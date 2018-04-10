/*
 * Copyright 2017 NXP
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __ASM_ARCH_MX8M_DDR_H
#define __ASM_ARCH_MX8M_DDR_H

#define DDRC_DDR_SS_GPR0		0x3d000000
#define DDRC_IPS_BASE_ADDR_0		0x3f400000
#define IP2APB_DDRPHY_IPS_BASE_ADDR(X)	(0x3c000000 + (X * 0x2000000))
#define DDRPHY_MEM(X)			(0x3c000000 + (X * 0x2000000) + 0x50000)

struct ddrc_freq {
	u32 res0[8];
	u32 derateen;
	u32 derateint;
	u32 res1[10];
	u32 rfshctl0;
	u32 res2[4];
	u32 rfshtmg;
	u32 rfshtmg1;
	u32 res3[28];
	u32 init3;
	u32 init4;
	u32 res;
	u32 init6;
	u32 init7;
	u32 res4[4];
	u32 dramtmg0;
	u32 dramtmg1;
	u32 dramtmg2;
	u32 dramtmg3;
	u32 dramtmg4;
	u32 dramtmg5;
	u32 dramtmg6;
	u32 dramtmg7;
	u32 dramtmg8;
	u32 dramtmg9;
	u32 dramtmg10;
	u32 dramtmg11;
	u32 dramtmg12;
	u32 dramtmg13;
	u32 dramtmg14;
	u32 dramtmg15;
	u32 dramtmg16;
	u32 dramtmg17;
	u32 res5[10];
	u32 mramtmg0;
	u32 mramtmg1;
	u32 mramtmg4;
	u32 mramtmg9;
	u32 zqctl0;
	u32 res6[3];
	u32 dfitmg0;
	u32 dfitmg1;
	u32 res7[7];
	u32 dfitmg2;
	u32 dfitmg3;
	u32 res8[33];
	u32 odtcfg;
};

struct imx8m_ddrc_regs {
	u32 mstr;
	u32 stat;
	u32 mstr1;
	u32 res1;
	u32 mrctrl0;
	u32 mrctrl1;
	u32 mrstat;
	u32 mrctrl2;
	u32 derateen;
	u32 derateint;
	u32 mstr2;
	u32 res2;
	u32 pwrctl;
	u32 pwrtmg;
	u32 hwlpctl;
	u32 hwffcctl;
	u32 hwffcstat;
	u32 res3[3];
	u32 rfshctl0;
	u32 rfshctl1;
	u32 rfshctl2;
	u32 rfshctl4;
	u32 rfshctl3;
	u32 rfshtmg;
	u32 rfshtmg1;
	u32 res4;
	u32 ecccfg0;
	u32 ecccfg1;
	u32 eccstat;
	u32 eccclr;
	u32 eccerrcnt;
	u32 ecccaddr0;
	u32 ecccaddr1;
	u32 ecccsyn0;
	u32 ecccsyn1;
	u32 ecccsyn2;
	u32 eccbitmask0;
	u32 eccbitmask1;
	u32 eccbitmask2;
	u32 eccuaddr0;
	u32 eccuaddr1;
	u32 eccusyn0;
	u32 eccusyn1;
	u32 eccusyn2;
	u32 eccpoisonaddr0;
	u32 eccpoisonaddr1;
	u32 crcparctl0;
	u32 crcparctl1;
	u32 crcparctl2;
	u32 crcparstat;
	u32 init0;
	u32 init1;
	u32 init2;
	u32 init3;
	u32 init4;
	u32 init5;
	u32 init6;
	u32 init7;
	u32 dimmctl;
	u32 rankctl;
	u32 res5;
	u32 chctl;
	u32 dramtmg0;
	u32 dramtmg1;
	u32 dramtmg2;
	u32 dramtmg3;
	u32 dramtmg4;
	u32 dramtmg5;
	u32 dramtmg6;
	u32 dramtmg7;
	u32 dramtmg8;
	u32 dramtmg9;
	u32 dramtmg10;
	u32 dramtmg11;
	u32 dramtmg12;
	u32 dramtmg13;
	u32 dramtmg14;
	u32 dramtmg15;
	u32 dramtmg16;
	u32 dramtmg17;
	u32 res6[10];
	u32 mramtmg0;
	u32 mramtmg1;
	u32 mramtmg4;
	u32 mramtmg9;
	u32 zqctl0;
	u32 zqctl1;
	u32 zqctl2;
	u32 zqstat;
	u32 dfitmg0;
	u32 dfitmg1;
	u32 dfilpcfg0;
	u32 dfilpcfg1;
	u32 dfiupd0;
	u32 dfiupd1;
	u32 dfiupd2;
	u32 res7;
	u32 dfimisc;
	u32 dfitmg2;
	u32 dfitmg3;
	u32 dfistat;
	u32 dbictl;
	u32 dfiphymstr;
	u32 res8[14];
	u32 addrmap0;
	u32 addrmap1;
	u32 addrmap2;
	u32 addrmap3;
	u32 addrmap4;
	u32 addrmap5;
	u32 addrmap6;
	u32 addrmap7;
	u32 addrmap8;
	u32 addrmap9;
	u32 addrmap10;
	u32 addrmap11;
	u32 res9[4];
	u32 odtcfg;
	u32 odtmap;
	u32 res10[2];
	u32 sched;
	u32 sched1;
	u32 sched2;
	u32 perfhpr1;
	u32 res11;
	u32 perflpr1;
	u32 res12;
	u32 perfwr1;
	u32 res13[4];
	u32 dqmap0;
	u32 dqmap1;
	u32 dqmap2;
	u32 dqmap3;
	u32 dqmap4;
	u32 dqmap5;
	u32 res14[26];
	u32 dbg0;
	u32 dbg1;
	u32 dbgcam;
	u32 dbgcmd;
	u32 dbgstat;
	u32 res15[3];
	u32 swctl;
	u32 swstat;
	u32 res16[2];
	u32 ocparcfg0;
	u32 ocparcfg1;
	u32 ocparcfg2;
	u32 ocparcfg3;
	u32 ocparstat0;
	u32 ocparstat1;
	u32 ocparwlog0;
	u32 ocparwlog1;
	u32 ocparwlog2;
	u32 ocparawlog0;
	u32 ocparawlog1;
	u32 ocparrlog0;
	u32 ocparrlog1;
	u32 ocpararlog0;
	u32 ocpararlog1;
	u32 poisoncfg;
	u32 poisonstat;
	u32 adveccindex;
	union  {
		u32 adveccstat;
		u32 eccapstat;
	};
	u32 eccpoisonpat0;
	u32 eccpoisonpat1;
	u32 eccpoisonpat2;
	u32 res17[6];
	u32 caparpoisonctl;
	u32 caparpoisonstat;
	u32 res18[2];
	u32 dynbsmstat;
	u32 res19[18];
	u32 pstat;
	u32 pccfg;
	struct {
		u32 pcfgr;
		u32 pcfgw;
		u32 pcfgc;
		struct {
			u32 pcfgidmaskch0;
			u32 pcfidvaluech0;
		} pcfgid[16];
		u32 pctrl;
		u32 pcfgqos0;
		u32 pcfgqos1;
		u32 pcfgwqos0;
		u32 pcfgwqos1;
		u32 res[4];
	} pcfg[16];
	struct {
		u32 sarbase;
		u32 sarsize;
	} sar[4];
	u32 sbrctl;
	u32 sbrstat;
	u32 sbrwdata0;
	u32 sbrwdata1;
	u32 pdch;
	u32 res20[755];
	/* umctl2_regs_dch1 */
	u32 ch1_stat;
	u32 res21[2];
	u32 ch1_mrctrl0;
	u32 ch1_mrctrl1;
	u32 ch1_mrstat;
	u32 ch1_mrctrl2;
	u32 res22[4];
	u32 ch1_pwrctl;
	u32 ch1_pwrtmg;
	u32 ch1_hwlpctl;
	u32 res23[15];
	u32 ch1_eccstat;
	u32 ch1_eccclr;
	u32 ch1_eccerrcnt;
	u32 ch1_ecccaddr0;
	u32 ch1_ecccaddr1;
	u32 ch1_ecccsyn0;
	u32 ch1_ecccsyn1;
	u32 ch1_ecccsyn2;
	u32 ch1_eccbitmask0;
	u32 ch1_eccbitmask1;
	u32 ch1_eccbitmask2;
	u32 ch1_eccuaddr0;
	u32 ch1_eccuaddr1;
	u32 ch1_eccusyn0;
	u32 ch1_eccusyn1;
	u32 ch1_eccusyn2;
	u32 res24[2];
	u32 ch1_crcparctl0;
	u32 res25[2];
	u32 ch1_crcparstat;
	u32 res26[46];
	u32 ch1_zqctl2;
	u32 ch1_zqstat;
	u32 res27[11];
	u32 ch1_dfistat;
	u32 res28[33];
	u32 ch1_odtmap;
	u32 res29[47];
	u32 ch1_dbg1;
	u32 ch1_dbgcam;
	u32 ch1_dbgcmd;
	u32 ch1_dbgstat;
	u32 res30[123];
	/* umctl2_regs_freq1 */
	struct ddrc_freq freq1;
	u32 res31[109];
	/* umctl2_regs_addrmap_alt */
	u32 addrmap0_alt;
	u32 addrmap1_alt;
	u32 addrmap2_alt;
	u32 addrmap3_alt;
	u32 addrmap4_alt;
	u32 addrmap5_alt;
	u32 addrmap6_alt;
	u32 addrmap7_alt;
	u32 addrmap8_alt;
	u32 addrmap9_alt;
	u32 addrmap10_alt;
	u32 addrmap11_alt;
	u32 res32[758];
	/* umctl2_regs_freq2 */
	struct ddrc_freq freq2;
	u32 res33[879];
	/* umctl2_regs_freq3 */
	struct ddrc_freq freq3;
};

struct imx8m_ddrphy_regs {
	u32 reg[0xf0000];
};

/* PHY State */
enum pstate {
	PS0,
	PS1,
	PS2,
	PS3,
};

enum msg_response {
	TRAIN_SUCCESS = 0x7,
	TRAIN_STREAM_START = 0x8,
	TRAIN_FAIL = 0xff,
};

#define DDRC_MSTR_0             0x3d400000
#define DDRC_STAT_0             0x3d400004
#define DDRC_MSTR1_0            0x3d400008
#define DDRC_MRCTRL0_0          0x3d400010
#define DDRC_MRCTRL1_0          0x3d400014
#define DDRC_MRSTAT_0           0x3d400018
#define DDRC_MRCTRL2_0          0x3d40001c
#define DDRC_DERATEEN_0         0x3d400020
#define DDRC_DERATEINT_0        0x3d400024
#define DDRC_MSTR2_0            0x3d400028
#define DDRC_PWRCTL_0           0x3d400030
#define DDRC_PWRTMG_0           0x3d400034
#define DDRC_HWLPCTL_0          0x3d400038
#define DDRC_HWFFCCTL_0         0x3d40003c
#define DDRC_HWFFCSTAT_0        0x3d400040
#define DDRC_RFSHCTL0_0         0x3d400050
#define DDRC_RFSHCTL1_0         0x3d400054
#define DDRC_RFSHCTL2_0         0x3d400058
#define DDRC_RFSHCTL3_0         0x3d400060
#define DDRC_RFSHTMG_0          0x3d400064
#define DDRC_ECCCFG0_0          0x3d400070
#define DDRC_ECCCFG1_0          0x3d400074
#define DDRC_ECCSTAT_0          0x3d400078
#define DDRC_ECCCLR_0           0x3d40007c
#define DDRC_ECCERRCNT_0        0x3d400080
#define DDRC_ECCCADDR0_0        0x3d400084
#define DDRC_ECCCADDR1_0        0x3d400088
#define DDRC_ECCCSYN0_0         0x3d40008c
#define DDRC_ECCCSYN1_0         0x3d400090
#define DDRC_ECCCSYN2_0         0x3d400094
#define DDRC_ECCBITMASK0_0      0x3d400098
#define DDRC_ECCBITMASK1_0      0x3d40009c
#define DDRC_ECCBITMASK2_0      0x3d4000a0
#define DDRC_ECCUADDR0_0        0x3d4000a4
#define DDRC_ECCUADDR1_0        0x3d4000a8
#define DDRC_ECCUSYN0_0         0x3d4000ac
#define DDRC_ECCUSYN1_0         0x3d4000b0
#define DDRC_ECCUSYN2_0         0x3d4000b4
#define DDRC_ECCPOISONADDR0_0   0x3d4000b8
#define DDRC_ECCPOISONADDR1_0   0x3d4000bc
#define DDRC_CRCPARCTL0_0       0x3d4000c0
#define DDRC_CRCPARCTL1_0       0x3d4000c4
#define DDRC_CRCPARCTL2_0       0x3d4000c8
#define DDRC_CRCPARSTAT_0       0x3d4000cc
#define DDRC_INIT0_0            0x3d4000d0
#define DDRC_INIT1_0            0x3d4000d4
#define DDRC_INIT2_0            0x3d4000d8
#define DDRC_INIT3_0            0x3d4000dc
#define DDRC_INIT4_0            0x3d4000e0
#define DDRC_INIT5_0            0x3d4000e4
#define DDRC_INIT6_0            0x3d4000e8
#define DDRC_INIT7_0            0x3d4000ec
#define DDRC_DIMMCTL_0          0x3d4000f0
#define DDRC_RANKCTL_0          0x3d4000f4
#define DDRC_DRAMTMG0_0         0x3d400100
#define DDRC_DRAMTMG1_0         0x3d400104
#define DDRC_DRAMTMG2_0         0x3d400108
#define DDRC_DRAMTMG3_0         0x3d40010c
#define DDRC_DRAMTMG4_0         0x3d400110
#define DDRC_DRAMTMG5_0         0x3d400114
#define DDRC_DRAMTMG6_0         0x3d400118
#define DDRC_DRAMTMG7_0         0x3d40011c
#define DDRC_DRAMTMG8_0         0x3d400120
#define DDRC_DRAMTMG9_0         0x3d400124
#define DDRC_DRAMTMG10_0        0x3d400128
#define DDRC_DRAMTMG11_0        0x3d40012c
#define DDRC_DRAMTMG12_0        0x3d400130
#define DDRC_DRAMTMG13_0        0x3d400134
#define DDRC_DRAMTMG14_0        0x3d400138
#define DDRC_DRAMTMG15_0        0x3d40013C
#define DDRC_DRAMTMG16_0        0x3d400140
#define DDRC_DRAMTMG17_0        0x3d400144

#define DDRC_ZQCTL0_0           0x3d400180
#define DDRC_ZQCTL1_0           0x3d400184
#define DDRC_ZQCTL2_0           0x3d400188
#define DDRC_ZQSTAT_0           0x3d40018c
#define DDRC_DFITMG0_0          0x3d400190
#define DDRC_DFITMG1_0          0x3d400194
#define DDRC_DFILPCFG0_0        0x3d400198
#define DDRC_DFILPCFG1_0        0x3d40019c
#define DDRC_DFIUPD0_0          0x3d4001a0
#define DDRC_DFIUPD1_0          0x3d4001a4
#define DDRC_DFIUPD2_0          0x3d4001a8

#define DDRC_DFIMISC_0          0x3d4001b0
#define DDRC_DFITMG2_0          0x3d4001b4
#define DDRC_DFITMG3_0          0x3d4001b8
#define DDRC_DFISTAT_0          0x3d4001bc

#define DDRC_DBICTL_0           0x3d4001c0
#define DDRC_DFIPHYMSTR_0       0x3d4001c4
#define DDRC_TRAINCTL0_0        0x3d4001d0
#define DDRC_TRAINCTL1_0        0x3d4001d4
#define DDRC_TRAINCTL2_0        0x3d4001d8
#define DDRC_TRAINSTAT_0        0x3d4001dc
#define DDRC_ADDRMAP0_0         0x3d400200
#define DDRC_ADDRMAP1_0         0x3d400204
#define DDRC_ADDRMAP2_0         0x3d400208
#define DDRC_ADDRMAP3_0         0x3d40020c
#define DDRC_ADDRMAP4_0         0x3d400210
#define DDRC_ADDRMAP5_0         0x3d400214
#define DDRC_ADDRMAP6_0         0x3d400218
#define DDRC_ADDRMAP7_0         0x3d40021c
#define DDRC_ADDRMAP8_0         0x3d400220
#define DDRC_ADDRMAP9_0         0x3d400224
#define DDRC_ADDRMAP10_0        0x3d400228
#define DDRC_ADDRMAP11_0        0x3d40022c

#define DDRC_ODTCFG_0           0x3d400240
#define DDRC_ODTMAP_0           0x3d400244
#define DDRC_SCHED_0            0x3d400250
#define DDRC_SCHED1_0           0x3d400254
#define DDRC_PERFHPR1_0         0x3d40025c
#define DDRC_PERFLPR1_0         0x3d400264
#define DDRC_PERFWR1_0          0x3d40026c
#define DDRC_PERFVPR1_0         0x3d400274

#define DDRC_PERFVPW1_0         0x3d400278

#define DDRC_DQMAP0_0           0x3d400280
#define DDRC_DQMAP1_0           0x3d400284
#define DDRC_DQMAP2_0           0x3d400288
#define DDRC_DQMAP3_0           0x3d40028c
#define DDRC_DQMAP4_0           0x3d400290
#define DDRC_DQMAP5_0           0x3d400294
#define DDRC_DBG0_0             0x3d400300
#define DDRC_DBG1_0             0x3d400304
#define DDRC_DBGCAM_0           0x3d400308
#define DDRC_DBGCMD_0           0x3d40030c
#define DDRC_DBGSTAT_0          0x3d400310

#define DDRC_SWCTL_0            0x3d400320
#define DDRC_SWSTAT_0           0x3d400324
#define DDRC_OCPARCFG0_0        0x3d400330
#define DDRC_OCPARCFG1_0        0x3d400334
#define DDRC_OCPARCFG2_0        0x3d400338
#define DDRC_OCPARCFG3_0        0x3d40033c
#define DDRC_OCPARSTAT0_0       0x3d400340
#define DDRC_OCPARSTAT1_0       0x3d400344
#define DDRC_OCPARWLOG0_0       0x3d400348
#define DDRC_OCPARWLOG1_0       0x3d40034c
#define DDRC_OCPARWLOG2_0       0x3d400350
#define DDRC_OCPARAWLOG0_0      0x3d400354
#define DDRC_OCPARAWLOG1_0      0x3d400358
#define DDRC_OCPARRLOG0_0       0x3d40035c
#define DDRC_OCPARRLOG1_0       0x3d400360
#define DDRC_OCPARARLOG0_0      0x3d400364
#define DDRC_OCPARARLOG1_0      0x3d400368
#define DDRC_POISONCFG_0        0x3d40036C
#define DDRC_POISONSTAT_0       0x3d400370
#define DDRC_ADVECCINDEX_0      0x3d400003
#define DDRC_ADVECCSTAT_0       0x3d400003
#define DDRC_ECCPOISONPAT0_0    0x3d400003
#define DDRC_ECCPOISONPAT1_0    0x3d400003
#define DDRC_ECCPOISONPAT2_0    0x3d400003
#define DDRC_HIFCTL_0           0x3d400003

#define DDRC_PSTAT_0            0x3d4003fc
#define DDRC_PCCFG_0            0x3d400400
#define DDRC_PCFGR_0_0          0x3d400404
#define DDRC_PCFGR_1_0          0x3d4004b4
#define DDRC_PCFGR_2_0          0x3d400564
#define DDRC_PCFGR_3_0          0x3d400614
#define DDRC_PCFGW_0_0          0x3d400408
#define DDRC_PCFGW_1_0          0x3d400408
#define DDRC_PCFGW_2_0          0x3d400568
#define DDRC_PCFGW_3_0          0x3d400618
#define DDRC_PCFGC_0_0          0x3d40040c
#define DDRC_PCFGIDMASKCH_0     0x3d400410
#define DDRC_PCFGIDVALUECH_0    0x3d400414
#define DDRC_PCTRL_0_0          0x3d400490
#define DDRC_PCTRL_1_0          0x3d400540
#define DDRC_PCTRL_2_0          0x3d4005f0
#define DDRC_PCTRL_3_0          0x3d4006a0
#define DDRC_PCFGQOS0_0_0       0x3d400494
#define DDRC_PCFGQOS1_0_0       0x3d400498
#define DDRC_PCFGWQOS0_0_0      0x3d40049c
#define DDRC_PCFGWQOS1_0_0      0x3d4004a0
#define DDRC_SARBASE0_0         0x3d400f04
#define DDRC_SARSIZE0_0         0x3d400f08
#define DDRC_SBRCTL_0           0x3d400f24
#define DDRC_SBRSTAT_0          0x3d400f28
#define DDRC_SBRWDATA0_0        0x3d400f2c
#define DDRC_SBRWDATA1_0        0x3d400f30
#define DDRC_PDCH_0             0x3d400f34

/**********************/
#define DDRC_MSTR(X)             (DDRC_IPS_BASE_ADDR(X) + 0x00)
#define DDRC_STAT(X)             (DDRC_IPS_BASE_ADDR(X) + 0x04)
#define DDRC_MSTR1(X)            (DDRC_IPS_BASE_ADDR(X) + 0x08)
#define DDRC_MRCTRL0(X)          (DDRC_IPS_BASE_ADDR(X) + 0x10)
#define DDRC_MRCTRL1(X)          (DDRC_IPS_BASE_ADDR(X) + 0x14)
#define DDRC_MRSTAT(X)           (DDRC_IPS_BASE_ADDR(X) + 0x18)
#define DDRC_MRCTRL2(X)          (DDRC_IPS_BASE_ADDR(X) + 0x1c)
#define DDRC_DERATEEN(X)         (DDRC_IPS_BASE_ADDR(X) + 0x20)
#define DDRC_DERATEINT(X)        (DDRC_IPS_BASE_ADDR(X) + 0x24)
#define DDRC_MSTR2(X)            (DDRC_IPS_BASE_ADDR(X) + 0x28)
#define DDRC_PWRCTL(X)           (DDRC_IPS_BASE_ADDR(X) + 0x30)
#define DDRC_PWRTMG(X)           (DDRC_IPS_BASE_ADDR(X) + 0x34)
#define DDRC_HWLPCTL(X)          (DDRC_IPS_BASE_ADDR(X) + 0x38)
#define DDRC_HWFFCCTL(X)         (DDRC_IPS_BASE_ADDR(X) + 0x3c)
#define DDRC_HWFFCSTAT(X)        (DDRC_IPS_BASE_ADDR(X) + 0x40)
#define DDRC_RFSHCTL0(X)         (DDRC_IPS_BASE_ADDR(X) + 0x50)
#define DDRC_RFSHCTL1(X)         (DDRC_IPS_BASE_ADDR(X) + 0x54)
#define DDRC_RFSHCTL2(X)         (DDRC_IPS_BASE_ADDR(X) + 0x58)
#define DDRC_RFSHCTL3(X)         (DDRC_IPS_BASE_ADDR(X) + 0x60)
#define DDRC_RFSHTMG(X)          (DDRC_IPS_BASE_ADDR(X) + 0x64)
#define DDRC_ECCCFG0(X)          (DDRC_IPS_BASE_ADDR(X) + 0x70)
#define DDRC_ECCCFG1(X)          (DDRC_IPS_BASE_ADDR(X) + 0x74)
#define DDRC_ECCSTAT(X)          (DDRC_IPS_BASE_ADDR(X) + 0x78)
#define DDRC_ECCCLR(X)           (DDRC_IPS_BASE_ADDR(X) + 0x7c)
#define DDRC_ECCERRCNT(X)        (DDRC_IPS_BASE_ADDR(X) + 0x80)
#define DDRC_ECCCADDR0(X)        (DDRC_IPS_BASE_ADDR(X) + 0x84)
#define DDRC_ECCCADDR1(X)        (DDRC_IPS_BASE_ADDR(X) + 0x88)
#define DDRC_ECCCSYN0(X)         (DDRC_IPS_BASE_ADDR(X) + 0x8c)
#define DDRC_ECCCSYN1(X)         (DDRC_IPS_BASE_ADDR(X) + 0x90)
#define DDRC_ECCCSYN2(X)         (DDRC_IPS_BASE_ADDR(X) + 0x94)
#define DDRC_ECCBITMASK0(X)      (DDRC_IPS_BASE_ADDR(X) + 0x98)
#define DDRC_ECCBITMASK1(X)      (DDRC_IPS_BASE_ADDR(X) + 0x9c)
#define DDRC_ECCBITMASK2(X)      (DDRC_IPS_BASE_ADDR(X) + 0xa0)
#define DDRC_ECCUADDR0(X)        (DDRC_IPS_BASE_ADDR(X) + 0xa4)
#define DDRC_ECCUADDR1(X)        (DDRC_IPS_BASE_ADDR(X) + 0xa8)
#define DDRC_ECCUSYN0(X)         (DDRC_IPS_BASE_ADDR(X) + 0xac)
#define DDRC_ECCUSYN1(X)         (DDRC_IPS_BASE_ADDR(X) + 0xb0)
#define DDRC_ECCUSYN2(X)         (DDRC_IPS_BASE_ADDR(X) + 0xb4)
#define DDRC_ECCPOISONADDR0(X)   (DDRC_IPS_BASE_ADDR(X) + 0xb8)
#define DDRC_ECCPOISONADDR1(X)   (DDRC_IPS_BASE_ADDR(X) + 0xbc)
#define DDRC_CRCPARCTL0(X)       (DDRC_IPS_BASE_ADDR(X) + 0xc0)
#define DDRC_CRCPARCTL1(X)       (DDRC_IPS_BASE_ADDR(X) + 0xc4)
#define DDRC_CRCPARCTL2(X)       (DDRC_IPS_BASE_ADDR(X) + 0xc8)
#define DDRC_CRCPARSTAT(X)       (DDRC_IPS_BASE_ADDR(X) + 0xcc)
#define DDRC_INIT0(X)            (DDRC_IPS_BASE_ADDR(X) + 0xd0)
#define DDRC_INIT1(X)            (DDRC_IPS_BASE_ADDR(X) + 0xd4)
#define DDRC_INIT2(X)            (DDRC_IPS_BASE_ADDR(X) + 0xd8)
#define DDRC_INIT3(X)            (DDRC_IPS_BASE_ADDR(X) + 0xdc)
#define DDRC_INIT4(X)            (DDRC_IPS_BASE_ADDR(X) + 0xe0)
#define DDRC_INIT5(X)            (DDRC_IPS_BASE_ADDR(X) + 0xe4)
#define DDRC_INIT6(X)            (DDRC_IPS_BASE_ADDR(X) + 0xe8)
#define DDRC_INIT7(X)            (DDRC_IPS_BASE_ADDR(X) + 0xec)
#define DDRC_DIMMCTL(X)          (DDRC_IPS_BASE_ADDR(X) + 0xf0)
#define DDRC_RANKCTL(X)          (DDRC_IPS_BASE_ADDR(X) + 0xf4)
#define DDRC_DRAMTMG0(X)         (DDRC_IPS_BASE_ADDR(X) + 0x100)
#define DDRC_DRAMTMG1(X)         (DDRC_IPS_BASE_ADDR(X) + 0x104)
#define DDRC_DRAMTMG2(X)         (DDRC_IPS_BASE_ADDR(X) + 0x108)
#define DDRC_DRAMTMG3(X)         (DDRC_IPS_BASE_ADDR(X) + 0x10c)
#define DDRC_DRAMTMG4(X)         (DDRC_IPS_BASE_ADDR(X) + 0x110)
#define DDRC_DRAMTMG5(X)         (DDRC_IPS_BASE_ADDR(X) + 0x114)
#define DDRC_DRAMTMG6(X)         (DDRC_IPS_BASE_ADDR(X) + 0x118)
#define DDRC_DRAMTMG7(X)         (DDRC_IPS_BASE_ADDR(X) + 0x11c)
#define DDRC_DRAMTMG8(X)         (DDRC_IPS_BASE_ADDR(X) + 0x120)
#define DDRC_DRAMTMG9(X)         (DDRC_IPS_BASE_ADDR(X) + 0x124)
#define DDRC_DRAMTMG10(X)        (DDRC_IPS_BASE_ADDR(X) + 0x128)
#define DDRC_DRAMTMG11(X)        (DDRC_IPS_BASE_ADDR(X) + 0x12c)
#define DDRC_DRAMTMG12(X)        (DDRC_IPS_BASE_ADDR(X) + 0x130)
#define DDRC_DRAMTMG13(X)        (DDRC_IPS_BASE_ADDR(X) + 0x134)
#define DDRC_DRAMTMG14(X)        (DDRC_IPS_BASE_ADDR(X) + 0x138)
#define DDRC_DRAMTMG15(X)        (DDRC_IPS_BASE_ADDR(X) + 0x13C)
#define DDRC_DRAMTMG16(X)        (DDRC_IPS_BASE_ADDR(X) + 0x140)
#define DDRC_DRAMTMG17(X)        (DDRC_IPS_BASE_ADDR(X) + 0x144)
#define DDRC_ZQCTL0(X)           (DDRC_IPS_BASE_ADDR(X) + 0x180)
#define DDRC_ZQCTL1(X)           (DDRC_IPS_BASE_ADDR(X) + 0x184)
#define DDRC_ZQCTL2(X)           (DDRC_IPS_BASE_ADDR(X) + 0x188)
#define DDRC_ZQSTAT(X)           (DDRC_IPS_BASE_ADDR(X) + 0x18c)
#define DDRC_DFITMG0(X)          (DDRC_IPS_BASE_ADDR(X) + 0x190)
#define DDRC_DFITMG1(X)          (DDRC_IPS_BASE_ADDR(X) + 0x194)
#define DDRC_DFILPCFG0(X)        (DDRC_IPS_BASE_ADDR(X) + 0x198)
#define DDRC_DFILPCFG1(X)        (DDRC_IPS_BASE_ADDR(X) + 0x19c)
#define DDRC_DFIUPD0(X)          (DDRC_IPS_BASE_ADDR(X) + 0x1a0)
#define DDRC_DFIUPD1(X)          (DDRC_IPS_BASE_ADDR(X) + 0x1a4)
#define DDRC_DFIUPD2(X)          (DDRC_IPS_BASE_ADDR(X) + 0x1a8)
#define DDRC_DFIMISC(X)          (DDRC_IPS_BASE_ADDR(X) + 0x1b0)
#define DDRC_DFITMG2(X)          (DDRC_IPS_BASE_ADDR(X) + 0x1b4)
#define DDRC_DFITMG3(X)          (DDRC_IPS_BASE_ADDR(X) + 0x1b8)
#define DDRC_DFISTAT(X)          (DDRC_IPS_BASE_ADDR(X) + 0x1bc)
#define DDRC_DBICTL(X)           (DDRC_IPS_BASE_ADDR(X) + 0x1c0)
#define DDRC_DFIPHYMSTR(X)       (DDRC_IPS_BASE_ADDR(X) + 0x1c4)
#define DDRC_TRAINCTL0(X)        (DDRC_IPS_BASE_ADDR(X) + 0x1d0)
#define DDRC_TRAINCTL1(X)        (DDRC_IPS_BASE_ADDR(X) + 0x1d4)
#define DDRC_TRAINCTL2(X)        (DDRC_IPS_BASE_ADDR(X) + 0x1d8)
#define DDRC_TRAINSTAT(X)        (DDRC_IPS_BASE_ADDR(X) + 0x1dc)
#define DDRC_ADDRMAP0(X)         (DDRC_IPS_BASE_ADDR(X) + 0x200)
#define DDRC_ADDRMAP1(X)         (DDRC_IPS_BASE_ADDR(X) + 0x204)
#define DDRC_ADDRMAP2(X)         (DDRC_IPS_BASE_ADDR(X) + 0x208)
#define DDRC_ADDRMAP3(X)         (DDRC_IPS_BASE_ADDR(X) + 0x20c)
#define DDRC_ADDRMAP4(X)         (DDRC_IPS_BASE_ADDR(X) + 0x210)
#define DDRC_ADDRMAP5(X)         (DDRC_IPS_BASE_ADDR(X) + 0x214)
#define DDRC_ADDRMAP6(X)         (DDRC_IPS_BASE_ADDR(X) + 0x218)
#define DDRC_ADDRMAP7(X)         (DDRC_IPS_BASE_ADDR(X) + 0x21c)
#define DDRC_ADDRMAP8(X)         (DDRC_IPS_BASE_ADDR(X) + 0x220)
#define DDRC_ADDRMAP9(X)         (DDRC_IPS_BASE_ADDR(X) + 0x224)
#define DDRC_ADDRMAP10(X)        (DDRC_IPS_BASE_ADDR(X) + 0x228)
#define DDRC_ADDRMAP11(X)        (DDRC_IPS_BASE_ADDR(X) + 0x22c)
#define DDRC_ODTCFG(X)           (DDRC_IPS_BASE_ADDR(X) + 0x240)
#define DDRC_ODTMAP(X)           (DDRC_IPS_BASE_ADDR(X) + 0x244)
#define DDRC_SCHED(X)            (DDRC_IPS_BASE_ADDR(X) + 0x250)
#define DDRC_SCHED1(X)           (DDRC_IPS_BASE_ADDR(X) + 0x254)
#define DDRC_PERFHPR1(X)         (DDRC_IPS_BASE_ADDR(X) + 0x25c)
#define DDRC_PERFLPR1(X)         (DDRC_IPS_BASE_ADDR(X) + 0x264)
#define DDRC_PERFWR1(X)          (DDRC_IPS_BASE_ADDR(X) + 0x26c)
#define DDRC_PERFVPR1(X)         (DDRC_IPS_BASE_ADDR(X) + 0x274)
#define DDRC_PERFVPW1(X)         (DDRC_IPS_BASE_ADDR(X) + 0x278)
#define DDRC_DQMAP0(X)           (DDRC_IPS_BASE_ADDR(X) + 0x280)
#define DDRC_DQMAP1(X)           (DDRC_IPS_BASE_ADDR(X) + 0x284)
#define DDRC_DQMAP2(X)           (DDRC_IPS_BASE_ADDR(X) + 0x288)
#define DDRC_DQMAP3(X)           (DDRC_IPS_BASE_ADDR(X) + 0x28c)
#define DDRC_DQMAP4(X)           (DDRC_IPS_BASE_ADDR(X) + 0x290)
#define DDRC_DQMAP5(X)           (DDRC_IPS_BASE_ADDR(X) + 0x294)
#define DDRC_DBG0(X)             (DDRC_IPS_BASE_ADDR(X) + 0x300)
#define DDRC_DBG1(X)             (DDRC_IPS_BASE_ADDR(X) + 0x304)
#define DDRC_DBGCAM(X)           (DDRC_IPS_BASE_ADDR(X) + 0x308)
#define DDRC_DBGCMD(X)           (DDRC_IPS_BASE_ADDR(X) + 0x30c)
#define DDRC_DBGSTAT(X)          (DDRC_IPS_BASE_ADDR(X) + 0x310)
#define DDRC_SWCTL(X)            (DDRC_IPS_BASE_ADDR(X) + 0x320)
#define DDRC_SWSTAT(X)           (DDRC_IPS_BASE_ADDR(X) + 0x324)
#define DDRC_OCPARCFG0(X)        (DDRC_IPS_BASE_ADDR(X) + 0x330)
#define DDRC_OCPARCFG1(X)        (DDRC_IPS_BASE_ADDR(X) + 0x334)
#define DDRC_OCPARCFG2(X)        (DDRC_IPS_BASE_ADDR(X) + 0x338)
#define DDRC_OCPARCFG3(X)        (DDRC_IPS_BASE_ADDR(X) + 0x33c)
#define DDRC_OCPARSTAT0(X)       (DDRC_IPS_BASE_ADDR(X) + 0x340)
#define DDRC_OCPARSTAT1(X)       (DDRC_IPS_BASE_ADDR(X) + 0x344)
#define DDRC_OCPARWLOG0(X)       (DDRC_IPS_BASE_ADDR(X) + 0x348)
#define DDRC_OCPARWLOG1(X)       (DDRC_IPS_BASE_ADDR(X) + 0x34c)
#define DDRC_OCPARWLOG2(X)       (DDRC_IPS_BASE_ADDR(X) + 0x350)
#define DDRC_OCPARAWLOG0(X)      (DDRC_IPS_BASE_ADDR(X) + 0x354)
#define DDRC_OCPARAWLOG1(X)      (DDRC_IPS_BASE_ADDR(X) + 0x358)
#define DDRC_OCPARRLOG0(X)       (DDRC_IPS_BASE_ADDR(X) + 0x35c)
#define DDRC_OCPARRLOG1(X)       (DDRC_IPS_BASE_ADDR(X) + 0x360)
#define DDRC_OCPARARLOG0(X)      (DDRC_IPS_BASE_ADDR(X) + 0x364)
#define DDRC_OCPARARLOG1(X)      (DDRC_IPS_BASE_ADDR(X) + 0x368)
#define DDRC_POISONCFG(X)        (DDRC_IPS_BASE_ADDR(X) + 0x36C)
#define DDRC_POISONSTAT(X)       (DDRC_IPS_BASE_ADDR(X) + 0x370)
#define DDRC_ADVECCINDEX(X)      (DDRC_IPS_BASE_ADDR(X) + 0x3)
#define DDRC_ADVECCSTAT(X)       (DDRC_IPS_BASE_ADDR(X) + 0x3)
#define DDRC_ECCPOISONPAT0(X)    (DDRC_IPS_BASE_ADDR(X) + 0x3)
#define DDRC_ECCPOISONPAT1(X)    (DDRC_IPS_BASE_ADDR(X) + 0x3)
#define DDRC_ECCPOISONPAT2(X)    (DDRC_IPS_BASE_ADDR(X) + 0x3)
#define DDRC_HIFCTL(X)           (DDRC_IPS_BASE_ADDR(X) + 0x3)

#define DDRC_PSTAT(X)            (DDRC_IPS_BASE_ADDR(X) + 0x3fc)
#define DDRC_PCCFG(X)            (DDRC_IPS_BASE_ADDR(X) + 0x400)
#define DDRC_PCFGR_0(X)          (DDRC_IPS_BASE_ADDR(X) + 0x404)
#define DDRC_PCFGR_1(X)          (DDRC_IPS_BASE_ADDR(X) + 1*0xb0+0x404)
#define DDRC_PCFGR_2(X)          (DDRC_IPS_BASE_ADDR(X) + 2*0xb0+0x404)
#define DDRC_PCFGR_3(X)          (DDRC_IPS_BASE_ADDR(X) + 3*0xb0+0x404)
#define DDRC_PCFGW_0(X)          (DDRC_IPS_BASE_ADDR(X) + 0x408)
#define DDRC_PCFGW_1(X)          (DDRC_IPS_BASE_ADDR(X) + 1*0xb0+0x408)
#define DDRC_PCFGW_2(X)          (DDRC_IPS_BASE_ADDR(X) + 2*0xb0+0x408)
#define DDRC_PCFGW_3(X)          (DDRC_IPS_BASE_ADDR(X) + 3*0xb0+0x408)
#define DDRC_PCFGC_0(X)          (DDRC_IPS_BASE_ADDR(X) + 0x40c)
#define DDRC_PCFGIDMASKCH(X)     (DDRC_IPS_BASE_ADDR(X) + 0x410)
#define DDRC_PCFGIDVALUECH(X)    (DDRC_IPS_BASE_ADDR(X) + 0x414)
#define DDRC_PCTRL_0(X)          (DDRC_IPS_BASE_ADDR(X) + 0x490)
#define DDRC_PCTRL_1(X)          (DDRC_IPS_BASE_ADDR(X) + 0x490 + 1*0xb0)
#define DDRC_PCTRL_2(X)          (DDRC_IPS_BASE_ADDR(X) + 0x490 + 2*0xb0)
#define DDRC_PCTRL_3(X)          (DDRC_IPS_BASE_ADDR(X) + 0x490 + 3*0xb0)
#define DDRC_PCFGQOS0_0(X)       (DDRC_IPS_BASE_ADDR(X) + 0x494)
#define DDRC_PCFGQOS1_0(X)       (DDRC_IPS_BASE_ADDR(X) + 0x498)
#define DDRC_PCFGWQOS0_0(X)      (DDRC_IPS_BASE_ADDR(X) + 0x49c)
#define DDRC_PCFGWQOS1_0(X)      (DDRC_IPS_BASE_ADDR(X) + 0x4a0)
#define DDRC_SARBASE0(X)         (DDRC_IPS_BASE_ADDR(X) + 0xf04)
#define DDRC_SARSIZE0(X)         (DDRC_IPS_BASE_ADDR(X) + 0xf08)
#define DDRC_SBRCTL(X)           (DDRC_IPS_BASE_ADDR(X) + 0xf24)
#define DDRC_SBRSTAT(X)          (DDRC_IPS_BASE_ADDR(X) + 0xf28)
#define DDRC_SBRWDATA0(X)        (DDRC_IPS_BASE_ADDR(X) + 0xf2c)
#define DDRC_SBRWDATA1(X)        (DDRC_IPS_BASE_ADDR(X) + 0xf30)
#define DDRC_PDCH(X)             (DDRC_IPS_BASE_ADDR(X) + 0xf34)

#define DDRC_FREQ1_DERATEEN(X)         (DDRC_IPS_BASE_ADDR(X) + 0x2020)
#define DDRC_FREQ1_DERATEINT(X)        (DDRC_IPS_BASE_ADDR(X) + 0x2024)
#define DDRC_FREQ1_RFSHCTL0(X)         (DDRC_IPS_BASE_ADDR(X) + 0x2050)
#define DDRC_FREQ1_RFSHTMG(X)          (DDRC_IPS_BASE_ADDR(X) + 0x2064)
#define DDRC_FREQ1_INIT3(X)            (DDRC_IPS_BASE_ADDR(X) + 0x20dc)
#define DDRC_FREQ1_INIT4(X)            (DDRC_IPS_BASE_ADDR(X) + 0x20e0)
#define DDRC_FREQ1_INIT6(X)            (DDRC_IPS_BASE_ADDR(X) + 0x20e8)
#define DDRC_FREQ1_INIT7(X)            (DDRC_IPS_BASE_ADDR(X) + 0x20ec)
#define DDRC_FREQ1_DRAMTMG0(X)         (DDRC_IPS_BASE_ADDR(X) + 0x2100)
#define DDRC_FREQ1_DRAMTMG1(X)         (DDRC_IPS_BASE_ADDR(X) + 0x2104)
#define DDRC_FREQ1_DRAMTMG2(X)         (DDRC_IPS_BASE_ADDR(X) + 0x2108)
#define DDRC_FREQ1_DRAMTMG3(X)         (DDRC_IPS_BASE_ADDR(X) + 0x210c)
#define DDRC_FREQ1_DRAMTMG4(X)         (DDRC_IPS_BASE_ADDR(X) + 0x2110)
#define DDRC_FREQ1_DRAMTMG5(X)         (DDRC_IPS_BASE_ADDR(X) + 0x2114)
#define DDRC_FREQ1_DRAMTMG6(X)         (DDRC_IPS_BASE_ADDR(X) + 0x2118)
#define DDRC_FREQ1_DRAMTMG7(X)         (DDRC_IPS_BASE_ADDR(X) + 0x211c)
#define DDRC_FREQ1_DRAMTMG8(X)         (DDRC_IPS_BASE_ADDR(X) + 0x2120)
#define DDRC_FREQ1_DRAMTMG9(X)         (DDRC_IPS_BASE_ADDR(X) + 0x2124)
#define DDRC_FREQ1_DRAMTMG10(X)        (DDRC_IPS_BASE_ADDR(X) + 0x2128)
#define DDRC_FREQ1_DRAMTMG11(X)        (DDRC_IPS_BASE_ADDR(X) + 0x212c)
#define DDRC_FREQ1_DRAMTMG12(X)        (DDRC_IPS_BASE_ADDR(X) + 0x2130)
#define DDRC_FREQ1_DRAMTMG13(X)        (DDRC_IPS_BASE_ADDR(X) + 0x2134)
#define DDRC_FREQ1_DRAMTMG14(X)        (DDRC_IPS_BASE_ADDR(X) + 0x2138)
#define DDRC_FREQ1_DRAMTMG15(X)        (DDRC_IPS_BASE_ADDR(X) + 0x213C)
#define DDRC_FREQ1_DRAMTMG16(X)        (DDRC_IPS_BASE_ADDR(X) + 0x2140)
#define DDRC_FREQ1_DRAMTMG17(X)        (DDRC_IPS_BASE_ADDR(X) + 0x2144)
#define DDRC_FREQ1_ZQCTL0(X)           (DDRC_IPS_BASE_ADDR(X) + 0x2180)
#define DDRC_FREQ1_DFITMG0(X)          (DDRC_IPS_BASE_ADDR(X) + 0x2190)
#define DDRC_FREQ1_DFITMG1(X)          (DDRC_IPS_BASE_ADDR(X) + 0x2194)
#define DDRC_FREQ1_DFITMG2(X)          (DDRC_IPS_BASE_ADDR(X) + 0x21b4)
#define DDRC_FREQ1_DFITMG3(X)          (DDRC_IPS_BASE_ADDR(X) + 0x21b8)
#define DDRC_FREQ1_ODTCFG(X)           (DDRC_IPS_BASE_ADDR(X) + 0x2240)

#define DDRC_FREQ2_DERATEEN(X)         (DDRC_IPS_BASE_ADDR(X) + 0x3020)
#define DDRC_FREQ2_DERATEINT(X)        (DDRC_IPS_BASE_ADDR(X) + 0x3024)
#define DDRC_FREQ2_RFSHCTL0(X)         (DDRC_IPS_BASE_ADDR(X) + 0x3050)
#define DDRC_FREQ2_RFSHTMG(X)          (DDRC_IPS_BASE_ADDR(X) + 0x3064)
#define DDRC_FREQ2_INIT3(X)            (DDRC_IPS_BASE_ADDR(X) + 0x30dc)
#define DDRC_FREQ2_INIT4(X)            (DDRC_IPS_BASE_ADDR(X) + 0x30e0)
#define DDRC_FREQ2_INIT6(X)            (DDRC_IPS_BASE_ADDR(X) + 0x30e8)
#define DDRC_FREQ2_INIT7(X)            (DDRC_IPS_BASE_ADDR(X) + 0x30ec)
#define DDRC_FREQ2_DRAMTMG0(X)         (DDRC_IPS_BASE_ADDR(X) + 0x3100)
#define DDRC_FREQ2_DRAMTMG1(X)         (DDRC_IPS_BASE_ADDR(X) + 0x3104)
#define DDRC_FREQ2_DRAMTMG2(X)         (DDRC_IPS_BASE_ADDR(X) + 0x3108)
#define DDRC_FREQ2_DRAMTMG3(X)         (DDRC_IPS_BASE_ADDR(X) + 0x310c)
#define DDRC_FREQ2_DRAMTMG4(X)         (DDRC_IPS_BASE_ADDR(X) + 0x3110)
#define DDRC_FREQ2_DRAMTMG5(X)         (DDRC_IPS_BASE_ADDR(X) + 0x3114)
#define DDRC_FREQ2_DRAMTMG6(X)         (DDRC_IPS_BASE_ADDR(X) + 0x3118)
#define DDRC_FREQ2_DRAMTMG7(X)         (DDRC_IPS_BASE_ADDR(X) + 0x311c)
#define DDRC_FREQ2_DRAMTMG8(X)         (DDRC_IPS_BASE_ADDR(X) + 0x3120)
#define DDRC_FREQ2_DRAMTMG9(X)         (DDRC_IPS_BASE_ADDR(X) + 0x3124)
#define DDRC_FREQ2_DRAMTMG10(X)        (DDRC_IPS_BASE_ADDR(X) + 0x3128)
#define DDRC_FREQ2_DRAMTMG11(X)        (DDRC_IPS_BASE_ADDR(X) + 0x312c)
#define DDRC_FREQ2_DRAMTMG12(X)        (DDRC_IPS_BASE_ADDR(X) + 0x3130)
#define DDRC_FREQ2_DRAMTMG13(X)        (DDRC_IPS_BASE_ADDR(X) + 0x3134)
#define DDRC_FREQ2_DRAMTMG14(X)        (DDRC_IPS_BASE_ADDR(X) + 0x3138)
#define DDRC_FREQ2_DRAMTMG15(X)        (DDRC_IPS_BASE_ADDR(X) + 0x313C)
#define DDRC_FREQ2_DRAMTMG16(X)        (DDRC_IPS_BASE_ADDR(X) + 0x3140)
#define DDRC_FREQ2_DRAMTMG17(X)        (DDRC_IPS_BASE_ADDR(X) + 0x3144)
#define DDRC_FREQ2_ZQCTL0(X)           (DDRC_IPS_BASE_ADDR(X) + 0x3180)
#define DDRC_FREQ2_DFITMG0(X)          (DDRC_IPS_BASE_ADDR(X) + 0x3190)
#define DDRC_FREQ2_DFITMG1(X)          (DDRC_IPS_BASE_ADDR(X) + 0x3194)
#define DDRC_FREQ2_DFITMG2(X)          (DDRC_IPS_BASE_ADDR(X) + 0x31b4)
#define DDRC_FREQ2_DFITMG3(X)          (DDRC_IPS_BASE_ADDR(X) + 0x31b8)
#define DDRC_FREQ2_ODTCFG(X)           (DDRC_IPS_BASE_ADDR(X) + 0x3240)

#define DDRC_FREQ3_DERATEEN(X)         (DDRC_IPS_BASE_ADDR(X) + 0x4020)
#define DDRC_FREQ3_DERATEINT(X)        (DDRC_IPS_BASE_ADDR(X) + 0x4024)
#define DDRC_FREQ3_RFSHCTL0(X)         (DDRC_IPS_BASE_ADDR(X) + 0x4050)
#define DDRC_FREQ3_RFSHTMG(X)          (DDRC_IPS_BASE_ADDR(X) + 0x4064)
#define DDRC_FREQ3_INIT3(X)            (DDRC_IPS_BASE_ADDR(X) + 0x40dc)
#define DDRC_FREQ3_INIT4(X)            (DDRC_IPS_BASE_ADDR(X) + 0x40e0)
#define DDRC_FREQ3_INIT6(X)            (DDRC_IPS_BASE_ADDR(X) + 0x40e8)
#define DDRC_FREQ3_INIT7(X)            (DDRC_IPS_BASE_ADDR(X) + 0x40ec)
#define DDRC_FREQ3_DRAMTMG0(X)         (DDRC_IPS_BASE_ADDR(X) + 0x4100)
#define DDRC_FREQ3_DRAMTMG1(X)         (DDRC_IPS_BASE_ADDR(X) + 0x4104)
#define DDRC_FREQ3_DRAMTMG2(X)         (DDRC_IPS_BASE_ADDR(X) + 0x4108)
#define DDRC_FREQ3_DRAMTMG3(X)         (DDRC_IPS_BASE_ADDR(X) + 0x410c)
#define DDRC_FREQ3_DRAMTMG4(X)         (DDRC_IPS_BASE_ADDR(X) + 0x4110)
#define DDRC_FREQ3_DRAMTMG5(X)         (DDRC_IPS_BASE_ADDR(X) + 0x4114)
#define DDRC_FREQ3_DRAMTMG6(X)         (DDRC_IPS_BASE_ADDR(X) + 0x4118)
#define DDRC_FREQ3_DRAMTMG7(X)         (DDRC_IPS_BASE_ADDR(X) + 0x411c)
#define DDRC_FREQ3_DRAMTMG8(X)         (DDRC_IPS_BASE_ADDR(X) + 0x4120)
#define DDRC_FREQ3_DRAMTMG9(X)         (DDRC_IPS_BASE_ADDR(X) + 0x4124)
#define DDRC_FREQ3_DRAMTMG10(X)        (DDRC_IPS_BASE_ADDR(X) + 0x4128)
#define DDRC_FREQ3_DRAMTMG11(X)        (DDRC_IPS_BASE_ADDR(X) + 0x412c)
#define DDRC_FREQ3_DRAMTMG12(X)        (DDRC_IPS_BASE_ADDR(X) + 0x4130)
#define DDRC_FREQ3_DRAMTMG13(X)        (DDRC_IPS_BASE_ADDR(X) + 0x4134)
#define DDRC_FREQ3_DRAMTMG14(X)        (DDRC_IPS_BASE_ADDR(X) + 0x4138)
#define DDRC_FREQ3_DRAMTMG15(X)        (DDRC_IPS_BASE_ADDR(X) + 0x413C)
#define DDRC_FREQ3_DRAMTMG16(X)        (DDRC_IPS_BASE_ADDR(X) + 0x4140)

#define DDRC_FREQ3_ZQCTL0(X)           (DDRC_IPS_BASE_ADDR(X) + 0x4180)
#define DDRC_FREQ3_DFITMG0(X)          (DDRC_IPS_BASE_ADDR(X) + 0x4190)
#define DDRC_FREQ3_DFITMG1(X)          (DDRC_IPS_BASE_ADDR(X) + 0x4194)
#define DDRC_FREQ3_DFITMG2(X)          (DDRC_IPS_BASE_ADDR(X) + 0x41b4)
#define DDRC_FREQ3_DFITMG3(X)          (DDRC_IPS_BASE_ADDR(X) + 0x41b8)
#define DDRC_FREQ3_ODTCFG(X)           (DDRC_IPS_BASE_ADDR(X) + 0x4240)
#define DDRC_DFITMG0_SHADOW(X)         (DDRC_IPS_BASE_ADDR(X) + 0x2190)
#define DDRC_DFITMG1_SHADOW(X)         (DDRC_IPS_BASE_ADDR(X) + 0x2194)
#define DDRC_DFITMG2_SHADOW(X)         (DDRC_IPS_BASE_ADDR(X) + 0x21b4)
#define DDRC_DFITMG3_SHADOW(X)         (DDRC_IPS_BASE_ADDR(X) + 0x21b8)
#define DDRC_ODTCFG_SHADOW(X)          (DDRC_IPS_BASE_ADDR(X) + 0x2240)

#endif
