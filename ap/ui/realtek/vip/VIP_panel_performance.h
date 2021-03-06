include $(TOPDIR)/.config

ifdef CONFIG_PANEL_AU_M170EG01
export VIP_PANEL_PERFORMANCEE = VIP_PANEL_AU_M190PW01
else ifdef CONFIG_PANEL_AU_M220EW01
export VIP_PANEL_PERFORMANCEE = VIP_PANEL_AU_M220EW01
else ifdef CONFIG_PANEL_CMO_N116B6_L02
export VIP_PANEL_PERFORMANCEE = VIP_PANEL_CMO_N116B6_L02
else ifdef CONFIG_PANEL_AU_M190PW01
export VIP_PANEL_PERFORMANCEE = VIP_PANEL_AU_M190PW01
else ifdef CONFIG_PANEL_AUM22001AGCL
export VIP_PANEL_PERFORMANCEE = VIP_quality_parameter
else ifdef CONFIG_PANEL_LVDS_800x600
export VIP_PANEL_PERFORMANCEE = VIP_quality_parameter
#if 0
else ifdef CONFIG_PANEL_LG_32
export VIP_PANEL_PERFORMANCEE = VIP_Panel_LG_LC320W01
else ifdef CONFIG_PANEL_HANNSTAR_HSD250MUW1
export VIP_PANEL_PERFORMANCEE = VIP_Panel_HANNSTAR_HSD250MUW1
else ifdef CONFIG_PANEL_CMO_M216H1_L01
export VIP_PANEL_PERFORMANCEE = VIP_Panel_Default
else ifdef CONFIG_PANEL_CMO_N116B6_L02
export VIP_PANEL_PERFORMANCEE = VIP_Panel_Default
else ifdef CONFIG_PANEL_CMO_V315B3L01
export VIP_PANEL_PERFORMANCEE = VIP_PANEL_CMO_V315B3L01
else ifdef CONFIG_PANEL_HANNSTAR_HSD280MUW1
export VIP_PANEL_PERFORMANCEE = VIP_PANEL_HANNSTAR_HSD280MUW1
else ifdef CONFIG_PANEL_CMO_22M220J1L01
export VIP_PANEL_PERFORMANCEE = VIP_PANEL_CMO_22M220J1L01
#endif
else
export VIP_PANEL_PERFORMANCEE = VIP_quality_parameter
endif

