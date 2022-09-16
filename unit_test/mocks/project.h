// Mock this file, something is wrong with Cygwin and core_cm3.h from PSOC
#include "cyfitter_cfg.h"
#include "cydevice.h"
#include "cydevice_trm.h"
#include "cyfitter.h"
#include "cydisabledsheets.h"
#include "EEPROM.h"
#include "isr_adc.h"
#include "Clock_PWM.h"
#include "isr_dac.h"
#include "PWM_isr.h"
#include "IDAC_calibrate.h"
#include "Pin_DVDAC_cap_aliases.h"
#include "Pin_DVDAC_cap.h"
#include "TIA.h"
#include "VDAC_TIA.h"
#include "Working_Electrode_aliases.h"
#include "Working_Electrode.h"
#include "TIA_end_pin_aliases.h"
#include "TIA_end_pin.h"
#include "ADC_SigDel.h"
#include "DVDAC.h"
#include "TIA_resistor1_aliases.h"
#include "TIA_resistor1.h"
#include "AMux_V_source.h"
#include "AMux_TIA_resistor_bypass.h"
#include "Reference_Electrode_aliases.h"
#include "Reference_Electrode.h"
#include "AMux_TIA_input.h"
#include "VDAC_source.h"
#include "AMux_electrode.h"
#include "USBFS.h"
#include "USBFS_audio.h"
#include "USBFS_cdc.h"
#include "USBFS_hid.h"
#include "USBFS_midi.h"
#include "USBFS_pvt.h"
#include "USBFS_cydmac.h"
#include "USBFS_msc.h"
#include "Counter_Electrode_aliases.h"
#include "Counter_Electrode.h"
#include "Opamp_Aux.h"
#include "isr_adcAmp.h"
#include "ADC_SigDel_Ext_CP_Clk.h"
#include "ADC_SigDel_IRQ.h"
#include "ADC_SigDel_theACLK.h"
#include "DVDAC_DMA_dma.h"
#include "DVDAC_VDAC8.h"
#include "DVDAC_IntClock.h"
#include "USBFS_Dm_aliases.h"
#include "USBFS_Dm.h"
#include "USBFS_Dp_aliases.h"
#include "USBFS_Dp.h"
#include "CyDmac.h"
#include "CyFlash.h"
#include "CyLib.h"
#include "cypins.h"
#include "cyPm.h"
#include "CySpc.h"
#include "cytypes.h"
#include "cy_em_eeprom.h"