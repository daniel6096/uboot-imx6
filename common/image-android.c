/*
 * Copyright (c) 2011 Sebastian Andrzej Siewior <bigeasy@linutronix.de>
 *
 * Copyright (C) 2015-2016 Freescale Semiconductor, Inc.
 * Copyright 2017 NXP
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <image.h>
#include <android_image.h>
#include <malloc.h>
#include <errno.h>
#include <asm/bootm.h>
#include <asm/imx-common/boot_mode.h>

#define ANDROID_IMAGE_DEFAULT_KERNEL_ADDR	0x10008000

static char andr_tmp_str[ANDR_BOOT_ARGS_SIZE + 1];

#ifdef CONFIG_FSL_BOOTCTL
#include <linux/usb/ch9.h>
#include <linux/usb/gadget.h>
#include "../drivers/usb/gadget/bootctrl.h"
#endif

static ulong android_image_get_kernel_addr(const struct andr_img_hdr *hdr)
{
	/*
	 * All the Android tools that generate a boot.img use this
	 * address as the default.
	 *
	 * Even though it doesn't really make a lot of sense, and it
	 * might be valid on some platforms, we treat that adress as
	 * the default value for this field, and try to execute the
	 * kernel in place in such a case.
	 *
	 * Otherwise, we will return the actual value set by the user.
	 */
	if (hdr->kernel_addr == ANDROID_IMAGE_DEFAULT_KERNEL_ADDR)
		return (ulong)hdr + hdr->page_size;

	return hdr->kernel_addr;
}

/**
 * android_image_get_kernel() - processes kernel part of Android boot images
 * @hdr:	Pointer to image header, which is at the start
 *			of the image.
 * @verify:	Checksum verification flag. Currently unimplemented.
 * @os_data:	Pointer to a ulong variable, will hold os data start
 *			address.
 * @os_len:	Pointer to a ulong variable, will hold os data length.
 *
 * This function returns the os image's start address and length. Also,
 * it appends the kernel command line to the bootargs env variable.
 *
 * Return: Zero, os start address and length on success,
 *		otherwise on failure.
 */
int android_image_get_kernel(const struct andr_img_hdr *hdr, int verify,
			     ulong *os_data, ulong *os_len)
{
	u32 kernel_addr = android_image_get_kernel_addr(hdr);

	/*
	 * Not all Android tools use the id field for signing the image with
	 * sha1 (or anything) so we don't check it. It is not obvious that the
	 * string is null terminated so we take care of this.
	 */
	strncpy(andr_tmp_str, hdr->name, ANDR_BOOT_NAME_SIZE);
	andr_tmp_str[ANDR_BOOT_NAME_SIZE] = '\0';
	if (strlen(andr_tmp_str))
		printf("Android's image name: %s\n", andr_tmp_str);

	printf("Kernel load addr 0x%08x size %u KiB\n",
	       kernel_addr, DIV_ROUND_UP(hdr->kernel_size, 1024));

	char newbootargs[512] = {0};
	char commandline[1024] = {0};
	char *bootargs = getenv("bootargs");

	if (bootargs) {
		strcpy(commandline, bootargs);
	} else if (*hdr->cmdline) {
		strcat(commandline, hdr->cmdline);
	}

	printf("Kernel command line: %s\n", commandline);
#ifdef CONFIG_SERIAL_TAG
	struct tag_serialnr serialnr;
	get_board_serial(&serialnr);

	sprintf(newbootargs,
					" androidboot.serialno=%08x%08x",
					serialnr.high,
					serialnr.low);
	strcat(commandline, newbootargs);
#endif

	/* append soc type into bootargs */
	char *soc_type = getenv("soc_type");
	if (soc_type) {
		sprintf(newbootargs,
			" androidboot.soc_type=%s",
			soc_type);
		strcat(commandline, newbootargs);
	}

	int bootdev = get_boot_device();
	if (bootdev == SD1_BOOT || bootdev == SD2_BOOT ||
		bootdev == SD3_BOOT || bootdev == SD4_BOOT) {
		sprintf(newbootargs,
			" androidboot.storage_type=sd gpt");
	} else if (bootdev == MMC1_BOOT || bootdev == MMC2_BOOT ||
		bootdev == MMC3_BOOT || bootdev == MMC4_BOOT) {
		sprintf(newbootargs,
			" androidboot.storage_type=emmc");
	} else if (bootdev == NAND_BOOT) {
		sprintf(newbootargs,
			" androidboot.storage_type=nand");
	} else
		printf("boot device type is incorrect.\n");
	strcat(commandline, newbootargs);

#ifdef CONFIG_FSL_BOOTCTL
	sprintf(newbootargs, " androidboot.slot_suffix=%s", get_slot_suffix());
	strcat(commandline, newbootargs);
#endif
	setenv("bootargs", commandline);

	if (os_data) {
		*os_data = (ulong)hdr;
		*os_data += hdr->page_size;
	}
	if (os_len)
		*os_len = hdr->kernel_size;
	return 0;
}

int android_image_check_header(const struct andr_img_hdr *hdr)
{
	return memcmp(ANDR_BOOT_MAGIC, hdr->magic, ANDR_BOOT_MAGIC_SIZE);
}

ulong android_image_get_end(const struct andr_img_hdr *hdr)
{
	ulong end;
	/*
	 * The header takes a full page, the remaining components are aligned
	 * on page boundary
	 */
	end = (ulong)hdr;
	end += hdr->page_size;
	end += ALIGN(hdr->kernel_size, hdr->page_size);
	end += ALIGN(hdr->ramdisk_size, hdr->page_size);
	end += ALIGN(hdr->second_size, hdr->page_size);

	return end;
}

ulong android_image_get_kload(const struct andr_img_hdr *hdr)
{
	return android_image_get_kernel_addr(hdr);
}

int android_image_get_ramdisk(const struct andr_img_hdr *hdr,
			      ulong *rd_data, ulong *rd_len)
{
	if (!hdr->ramdisk_size) {
		*rd_data = *rd_len = 0;
		return -1;
	}

	printf("RAM disk load addr 0x%08x size %u KiB\n",
	       hdr->ramdisk_addr, DIV_ROUND_UP(hdr->ramdisk_size, 1024));

	*rd_data = (unsigned long)hdr;
	*rd_data += hdr->page_size;
	*rd_data += ALIGN(hdr->kernel_size, hdr->page_size);

	*rd_len = hdr->ramdisk_size;
	return 0;
}

#if !defined(CONFIG_SPL_BUILD)
/**
 * android_print_contents - prints out the contents of the Android format image
 * @hdr: pointer to the Android format image header
 *
 * android_print_contents() formats a multi line Android image contents
 * description.
 * The routine prints out Android image properties
 *
 * returns:
 *     no returned results
 */
void android_print_contents(const struct andr_img_hdr *hdr)
{
	const char * const p = IMAGE_INDENT_STRING;

	printf("%skernel size:      %x\n", p, hdr->kernel_size);
	printf("%skernel address:   %x\n", p, hdr->kernel_addr);
	printf("%sramdisk size:     %x\n", p, hdr->ramdisk_size);
	printf("%sramdisk addrress: %x\n", p, hdr->ramdisk_addr);
	printf("%ssecond size:      %x\n", p, hdr->second_size);
	printf("%ssecond address:   %x\n", p, hdr->second_addr);
	printf("%stags address:     %x\n", p, hdr->tags_addr);
	printf("%spage size:        %x\n", p, hdr->page_size);
	printf("%sname:             %s\n", p, hdr->name);
	printf("%scmdline:          %s\n", p, hdr->cmdline);
}
#endif

int android_image_get_fdt(const struct andr_img_hdr *hdr,
			      ulong *fdt_data, ulong *fdt_len)
{
	if (!hdr->second_size)
		return -1;

	printf("FDT load addr 0x%08x size %u KiB\n",
	       hdr->second_addr, DIV_ROUND_UP(hdr->second_size, 1024));

	*fdt_data = (unsigned long)hdr;
	*fdt_data += hdr->page_size;
	*fdt_data += ALIGN(hdr->kernel_size, hdr->page_size);
	*fdt_data += ALIGN(hdr->ramdisk_size, hdr->page_size);

	*fdt_len = hdr->second_size;
	return 0;
}

#define ARM64_IMAGE_MAGIC	0x644d5241
bool image_arm64(void *images)
{
	struct header_image *ih;

	ih = (struct header_image *)images;
	debug("image magic: %x\n", ih->magic);
	if (ih->magic == le32_to_cpu(ARM64_IMAGE_MAGIC))
		return true;
	return false;
}
