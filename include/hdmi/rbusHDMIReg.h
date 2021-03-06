#include "autoconf.h"
#ifdef CONFIG_ENABLE_HDMI
#ifndef SPARROW_HDMI_REG_H
#define SPARROW_HDMI_REG_H
#define HDMI_TMDS_MSR_VADDR                        (0xf81200a1)
#define HDMI_TMDS_MRR0_VADDR                       (0xf81200a2)
#define HDMI_TMDS_MRR1_VADDR                       (0xf81200a3)
#define HDMI_TMDS_CTRL_VADDR                       (0xf81200a4)
#define HDMI_TMDS_CRCOB2_VADDR                     (0xf81200a5)
#define HDMI_TMDS_OUTCTL_VADDR                     (0xf81200a6)
#define HDMI_TMDS_PWDCTL_VADDR                     (0xf81200a7)
#define HDMI_TMDS_ACC0_VADDR                       (0xf81200a8)
#define HDMI_TMDS_ACC1_VADDR                       (0xf81200a9)
#define HDMI_TMDS_ABC_VADDR                        (0xf81200aa)
#define HDMI_TMDS_ACC2_VADDR                       (0xf81200ab)
#define HDMI_TMDS_Z0CC2_VADDR                      (0xf81200ac)
#define HDMI_TMDS_CPS_VADDR                        (0xf81200ad)
#define HDMI_TMDS_RPS_VADDR                        (0xf81200ae)
#define HDMI_TMDS_WDC_VADDR                        (0xf81200af)
#define HDMI_TMDS_DPC0_VADDR                       (0xf81200b4)
#define HDMI_TMDS_UDC0_VADDR                       (0xf81200b5)
#define HDMI_TMDS_UDC1_VADDR                       (0xf81200b6)
#define HDMI_TMDS_UDC2_VADDR                       (0xf81200b7)
#define HDMI_TMDS_DPC1_VADDR                       (0xf81200b8)
#define HDMI_TMDS_OUT_CTRL_VADDR                   (0xf81200b9)
#define HDMI_TMDS_ROUT_HIGH_BYTE_VADDR             (0xf81200ba)
#define HDMI_TMDS_ROUT_LOW_BYTE_VADDR              (0xf81200bb)
#define HDMI_TMDS_GOUT_HIGH_BYTE_VADDR             (0xf81200bc)
#define HDMI_TMDS_GOUT_LOW_BYTE_VADDR              (0xf81200bd)
#define HDMI_TMDS_BOUT_HIGH_BYTE_VADDR             (0xf81200be)
#define HDMI_TMDS_BOUT_LOW_BYTE_VADDR              (0xf81200bf)
#define HDMI_HDMI_APC_VADDR                        (0xf81200c8)
#define HDMI_HDMI_AP_VADDR                         (0xf81200c9)
#define HDMI_HDMI_DP_VADDR                         (0xf81200ca)
#define HDMI_HDMI_SR_VADDR                         (0xf81200cb)
#define HDMI_HDMI_GPVS_VADDR                       (0xf81200cc)
#define HDMI_HDMI_PSAP_VADDR                       (0xf81200cd)
#define HDMI_HDMI_PSDP_VADDR                       (0xf81200ce)
#define HDMI_HDCP_CR_VADDR                         (0xf81200c0)
#define HDMI_HDCP_DKAP_VADDR                       (0xf81200c1)
#define HDMI_HDCP_PCR_VADDR                        (0xf81200c2)
#define HDMI_HDCP_AP_VADDR                         (0xf81200c3)
#define HDMI_HDCP_DP_VADDR                         (0xf81200c4)
#define HDMI_DIG_BBANG00_VADDR			(0xf81200f0)
#define HDMI_PHY_CONTROL2_VADDR			(0xf81200fb)
#define HDMI_CDR_00_VADDR                          (0xf81b00a0)
#define HDMI_CDR_01_VADDR                          (0xf81b00a1)
#define HDMI_CDR_02_VADDR                          (0xf81b00a2)
#define HDMI_CDR_03_VADDR                          (0xf81b00a3)
#define HDMI_FLD_00_VADDR                          (0xf81b00a4)
#define HDMI_FLD_01_VADDR                          (0xf81b00a5)
#define HDMI_FLD_02_VADDR                          (0xf81b00a6)
#define HDMI_FLD_03_VADDR                          (0xf81b00a7)
#define HDMI_FLD_04_VADDR                          (0xf81b00a8)
#define HDMI_FLD_05_VADDR                          (0xf81b00a9)
#define HDMI_FLD_06_VADDR                          (0xf81b00aa)
#define HDMI_FLD_07_VADDR                          (0xf81b00ab)
#define HDMI_FLD_08_VADDR                          (0xf81b00ac)
#define HDMI_FLD_09_VADDR                          (0xf81b00ad)
#define HDMI_RXMISC_01_VADDR                       (0xf81b00ae)
#define HDMI_RXMISC_02_VADDR                       (0xf81b00af)
#define HDMI_OOBS_RXAMP_VADDR                      (0xf81b00b0)
#define HDMI_OOBS_VADDR                   				         (0xf81b00b1)
#define HDMI_ADAPTIVE_EQUALIZER_VADDR                            (0xf81b00b2)
#define HDMI_AUX_00_VADDR                          (0xf81b00b3)
#define HDMI_POWER_CONTROL_VADDR                   (0xf81b00b4)
#define HDMI_SWITCH_2D_VADDR                       (0xf81b00b5)
#define DP_PHY_2D_switch_VADDR                     (0xf81b00b5)
#define HDMI_Z0_CALIBRATION_VADDR                  (0xf81b00b6)
#define HDMI_CEC_VADDR                             (0xf81b00b7)
#define HDMI_AUX_01_VADDR                          (0xf81b00b8)
#define HDMI_AUX_02_VADDR                          (0xf81b00b9)
#define HDMI_RESERVED_00_VADDR                     (0xf81b00ba)
#define HDMI_RESERVED_01_VADDR                     (0xf81b00bb)
#define HDMI_RESERVED_02_VADDR                     (0xf81b00bc)
#define HDMI_RESERVED_03_VADDR                     (0xf81b00bd)
#define HDMI_RESERVED_04_VADDR                     (0xf81b00be)
#define HDMI_RESERVED_05_VADDR                     (0xf81b00bf)
#define HDMI_CMU_00_VADDR                          (0xf81b00c0)
#define HDMI_CMU_01_VADDR                          (0xf81b00c1)
#define HDMI_CMU_02_VADDR                          (0xf81b00c2)
#define HDMI_CMU_03_VADDR                          (0xf81b00c3)
#define HDMI_CMU_04_VADDR                          (0xf81b00c4)
#define HDMI_CMU_05_VADDR                          (0xf81b00c5)
#define HDMI_CMU_06_VADDR                          (0xf81b00c6)
#define HDMI_CMU_07_VADDR                          (0xf81b00c7)
#define HDMI_CMU_08_CAL_VADDR                      (0xf81b00c8)
#define HDMI_TX_VADDR                              (0xf81b00c9)
#define HDMI_SSCG_VADDR                            (0xf81b00ca)
#define HDMI_TX_Z0_CALIBRATION_VADDR               (0xf81b00cb)
#define HDMI_RESERVED_06_VADDR                     (0xf81b00cc)
#define HDMI_RESERVED_07_VADDR                     (0xf81b00cd)
#define DP_PHY_RESERVED_07					(0xf81b00cd)
#define HDMI_RESERVED_08_VADDR                     (0xf81b00ce)
#define HDMI_RESERVED_09_VADDR                     (0xf81b00cf)
#define HDMI_RXBIST_00_VADDR                       (0xf81b00d0)
#define HDMI_RXBIST_01_VADDR                       (0xf81b00d1)
#define HDMI_RXBIST_02_VADDR                       (0xf81b00d2)
#define HDMI_RXBIST_03_VADDR                       (0xf81b00d3)
#define HDMI_RXBIST_04_VADDR                       (0xf81b00d4)
#define HDMI_RXBIST_05_VADDR                       (0xf81b00d5)
#define HDMI_TXBIST_00_VADDR                       (0xf81b00d6)
#define HDMI_TXBIST_01_VADDR                       (0xf81b00d7)
#define HDMI_TXBIST_02_VADDR                       (0xf81b00d8)
#define HDMI_TXBIST_03_VADDR                       (0xf81b00d9)
#define HDMI_TXBIST_04_VADDR                       (0xf81b00da)
#define HDMI_TXBIST_05_VADDR                       (0xf81b00db)
#define HDMI_TXBIST_06_VADDR                       (0xf81b00dc)
#define HDMI_TXBIST_07_VADDR                       (0xf81b00dd)
#define HDMI_TXBIST_08_VADDR                       (0xf81b00de)
#define HDMI_TXBIST_09_VADDR                       (0xf81b00df)
#define HDMI_DIG_00_VADDR                          (0xf81b00e0)
#define HDMI_DIG_01_VADDR                          (0xf81b00e1)
#define HDMI_DIG_02_VADDR                          (0xf81b00e2)
#define HDMI_DIG_03_VADDR                          (0xf81b00e3)
#define HDMI_DIG_04_VADDR                          (0xf81b00e4)
#define HDMI_DIG_05_VADDR                          (0xf81b00e5)
#define HDMI_DIG_06_VADDR                          (0xf81b00e6)
#define HDMI_DIG_07_VADDR                          (0xf81b00e7)
#define HDMI_DIG_08_VADDR                          (0xf81b00e8)
#define HDMI_SSCG_DIG_VADDR                        (0xf81b00e9)
#define HDMI_DIG_TX_00_VADDR                       (0xf81b00ea)
#define HDMI_DIG_TX_01_VADDR                       (0xf81b00eb)
#define HDMI_DIG_TX_02_VADDR                       (0xf81b00ec)
#define HDMI_DIG_TX_03_VADDR                       (0xf81b00ed)
#define HDMI_RESERVED_0A_VADDR                     (0xf81b00ef)
#define HDMI_RESERVED_0B_VADDR                     (0xf81b00f0)
#define HDMI_RESERVED_0C_VADDR                     (0xf81b00f1)
#define HDMI_RESERVED_0D_VADDR                     (0xf81b00f2)
#define HDMI_RESERVED_0E_VADDR                     (0xf81b00f3)
#define HDMI_RESERVED_0F_VADDR                     (0xf81b00f4)
#define HDMI_RESERVED_FA_VADDR			 (0xf81b00fa)
#define HDMI_CDR_00_VADDR                          (0xf81b00a0)
#define HDMI_CDR_01_VADDR                          (0xf81b00a1)
#define HDMI_CDR_02_VADDR                          (0xf81b00a2)
#define HDMI_CDR_03_VADDR                          (0xf81b00a3)
#define HDMI_FLD_00_VADDR                          (0xf81b00a4)
#define HDMI_FLD_01_VADDR                          (0xf81b00a5)
#define HDMI_FLD_02_VADDR                          (0xf81b00a6)
#define HDMI_FLD_03_VADDR                          (0xf81b00a7)
#define HDMI_FLD_04_VADDR                          (0xf81b00a8)
#define HDMI_FLD_05_VADDR                          (0xf81b00a9)
#define HDMI_FLD_06_VADDR                          (0xf81b00aa)
#define HDMI_FLD_07_VADDR                          (0xf81b00ab)
#define HDMI_FLD_08_VADDR                          (0xf81b00ac)
#define HDMI_FLD_09_VADDR                          (0xf81b00ad)
#define HDMI_RXMISC_01_VADDR                       (0xf81b00ae)
#define HDMI_RXMISC_02_VADDR                       (0xf81b00af)
#define HDMI_OOBS_RXAMP_VADDR                      (0xf81b00b0)
#define HDMI_OOBS_VADDR                            (0xf81b00b1)
#define HDMI_A_EQ_VADDR                            (0xf81b00b2)
#define HDMI_AUX_00_VADDR                          (0xf81b00b3)
#define HDMI_POWERCONTROL_VADDR                    (0xf81b00b4)
#define HDMI_SWITCH_2D_VADDR                       (0xf81b00b5)
#define HDMI_Z0CALIBRATION_VADDR                   (0xf81b00b6)
//#define HDMI_RESERVED_VADDR                        (0xf81b00b7)
#define HDMI_AUX_01_VADDR                          (0xf81b00b8)
#define HDMI_AUX_02_VADDR                          (0xf81b00b9)
#define HDMI_RESERVED_00_VADDR                     (0xf81b00ba)
#define HDMI_RESERVED_01_VADDR                     (0xf81b00bb)
#define HDMI_RESERVED_02_VADDR                     (0xf81b00bc)
#define HDMI_RESERVED_03_VADDR                     (0xf81b00bd)
#define HDMI_RESERVED_04_VADDR                     (0xf81b00be)
#define HDMI_RESERVED_05_VADDR                     (0xf81b00bf)
#define HDMI_CMU_00_VADDR                          (0xf81b00c0)
#define HDMI_CMU_01_VADDR                          (0xf81b00c1)
#define HDMI_CMU_02_VADDR                          (0xf81b00c2)
#define HDMI_CMU_03_VADDR                          (0xf81b00c3)
#define HDMI_CMU_04_VADDR                          (0xf81b00c4)
#define HDMI_CMU_05_VADDR                          (0xf81b00c5)
#define HDMI_CMU_06_VADDR                          (0xf81b00c6)
#define HDMI_CMU_07_VADDR                          (0xf81b00c7)
#define HDMI_CMU_08_CAL_VADDR                      (0xf81b00c8)
#define HDMI_HDMI_SCR_VADDR					(0x00)
#define HDMI_HDMI_N_VAL_VADDR					(0x01)
#define HDMI_HDMI_BCHCR_VADDR					(0x02)
#define HDMI_HDMI_AFCR_VADDR					(0x03)
#define HDMI_HDMI_AFSR_VADDR					(0x04)
#define HDMI_HDMI_MAGCR0_VADDR				(0x05)
#define HDMI_HDMI_MAGCR1_VADDR				(0x06)
#define HDMI_HDMI_CMCR_VADDR					(0x10)
#define HDMI_HDMI_MCAPR_VADDR					(0x11)
#define HDMI_HDMI_SCAPR_VADDR					(0x12)
#define HDMI_HDMI_DCAPR0_VADDR				(0x13)
#define HDMI_HDMI_DCAPR1_VADDR				(0x14)
#define HDMI_HDMI_PSCR_VADDR					(0x15)
#define HDMI_HDMI_FDDR_VADDR					(0x16)
#define HDMI_HDMI_FDDF_VADDR					(0x17)
#define HDMI_HDMI_MFDDR_VADDR					(0x18)
#define HDMI_HDMI_MFDDF_VADDR					(0x19)
#define HDMI_HDMI_FTR_VADDR					(0x1A)
#define HDMI_HDMI_FBR_VADDR					(0x1B)
#define HDMI_HDMI_ICPSNCR0_VADDR				(0x1C)
#define HDMI_HDMI_ICPSNCR1_VADDR				(0x1D)
#define HDMI_HDMI_PCPSNCR0_VADDR				(0x1E)
#define HDMI_HDMI_PCPSNCR1_VADDR				(0x1F)
#define HDMI_HDMI_ICTPSR0_VADDR				(0x20)
#define HDMI_HDMI_ICTPSR1_VADDR				(0x21)
#define HDMI_HDMI_PCTPSR0_VADDR				(0x22)
#define HDMI_HDMI_PCTPSR1_VADDR				(0x23)
#define HDMI_HDMI_ICBPSR0_VADDR				(0x24)
#define HDMI_HDMI_ICBPSR1_VADDR				(0x25)
#define HDMI_HDMI_PCBPSR0_VADDR				(0x26)
#define HDMI_HDMI_PCBPSR1_VADDR				(0x27)
#define HDMI_HDMI_NTX1024TR0_VADDR			(0x28)
#define HDMI_HDMI_NTX1024TR1_VADDR			(0x29)
#define HDMI_HDMI_STBPR_VADDR					(0x2A)
#define HDMI_HDMI_NCPER_VADDR					(0x2B)
#define HDMI_HDMI_PETR_VADDR					(0x2C)
#define HDMI_HDMI_AAPNR_VADDR					(0x2D)
#define HDMI_HDMI_APDMCR_VADDR				(0x2E)
#define HDMI_HDMI_AVMCR_VADDR					(0x30)
#define HDMI_HDMI_WDCR0_VADDR					(0x31)
#define HDMI_HDMI_WDCR1_VADDR					(0x32)
#define HDMI_HDMI_WDCR2_VADDR					(0x33)
#define HDMI_HDMI_DBCR_VADDR					(0x34)
#define HDMI_HDMI_APTMCR0_VADDR				(0x35)
#define HDMI_HDMI_APTMCR1_VADDR				(0x36)
#define HDMI_HDMI_DPCR0_VADDR					(0x38)
#define HDMI_HDMI_DPCR1_VADDR					(0x39)
#define HDMI_HDMI_DPCR2_VADDR					(0x3A)
#define HDMI_HDMI_DPCR3_VADDR					(0x3B)
#define HDMI_HDMI_DPCR4_VADDR					(0x3C)
#define HDMI_HDMI_DPCR5_VADDR					(0x3D)
#define HDMI_HDMI_AWDSR_VADDR					(0x40)
#define HDMI_HDMI_VWDSR_VADDR					(0x41)
#define HDMI_HDMI_PAMICR_VADDR				(0x42)
#define HDMI_HDMI_PTRSV1_VADDR					(0x43)
#define HDMI_HDMI_PTRSV2_VADDR					(0x44)
#define HDMI_HDMI_PVGCR0_VADDR				(0x45)
#define HDMI_HDMI_PVGCR1_VADDR				(0x46)
#define HDMI_HDMI_PVGCR2_VADDR				(0x47)
#define HDMI_HDMI_PVSR0_VADDR					(0x48)
#define HDMI_HDMI_PVSR1_VADDR					(0x49)
#define HDMI_HDMI_PVSR2_VADDR					(0x4A)
#define HDMI_HDMI_VCR_VADDR					(0x50)
#define HDMI_HDMI_ACRCR_VADDR					(0x51)
#define HDMI_HDMI_ACRCR_RO_VADDR				(0x51)
#define HDMI_HDMI_ACRSR0_VADDR				(0x52)
#define HDMI_HDMI_ACRSR1_VADDR				(0x53)
#define HDMI_HDMI_ACRSR2_VADDR				(0x54)
#define HDMI_HDMI_ACRSR3_VADDR				(0x55)
#define HDMI_HDMI_ACRSR4_VADDR				(0x56)
#define HDMI_HDMI_ACS0_VADDR					(0x57)
#define HDMI_HDMI_ACS1_VADDR					(0x58)
#define HDMI_HDMI_ACS2_VADDR					(0x59)
#define HDMI_HDMI_ACS3_VADDR					(0x5A)
#define HDMI_HDMI_ACS4_VADDR					(0x5B)
#define HDMI_HDMI_INTCR_VADDR					(0x60)
#define HDMI_HDMI_ALCR_VADDR					(0x61)
#define HDMI_HDMI_AOCR_VADDR					(0x62)
#define HDMI_HDMI_BCSR_VADDR					(0x70)
#define HDMI_HDMI_ASR0_VADDR					(0x71)
#define HDMI_HDMI_ASR1_VADDR					(0x72)
#define HDMI_HDMI_DPC_SET0_VADDR				(0x80)
#define HDMI_HDMI_DPC_SET1_VADDR				(0x81)
#define HDMI_HDMI_DPC_SET2_VADDR				(0x82)
#define HDMI_HDMI_DPC_SET3_VADDR				(0x83)

#define HDMI_DP_CTRL_VADDR						(0xf81c00A1)
#define HDMI_DP_OUTPUT_CTRL_VADDR				(0xf81c00A2)
#define HDMI_DP_OUTPUT_CLK_CTRL_VADDR		(0xf81c00A3)
#define HDMI_DP_LANE_SWAP_CTRL_VADDR			(0xf81c00A4)
#define HDMI_DP_ADR_VADDR						(0xf81c00B3)
#define HDMI_DP_DAT_VADDR						(0xf81c00B4)


#endif
#endif