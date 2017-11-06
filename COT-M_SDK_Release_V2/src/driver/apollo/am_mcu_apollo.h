//*****************************************************************************
//
//! @file am_mcu_apollo.h
//!
//! @brief Top Include for Apollo class devices.
//!
//! This file provides all the includes necessary for an apollo device.
//
//*****************************************************************************

//*****************************************************************************
//
// Copyright (c) 2017, Ambiq Micro
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer in the
// documentation and/or other materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its
// contributors may be used to endorse or promote products derived from this
// software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
// This is part of revision 1.2.8 of the AmbiqSuite Development Package.
//
//*****************************************************************************
#ifndef AM_MCU_APOLLO_H
#define AM_MCU_APOLLO_H

//*****************************************************************************
//
// C99
//
//*****************************************************************************
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#ifdef __IAR_SYSTEMS_ICC__
#include "intrinsics.h"     // __CLZ() and other intrinsics
#endif

//*****************************************************************************
//
// Registers
//
//*****************************************************************************
#include "am_reg_adc.h"
#include "am_reg_base_addresses.h"
#include "am_reg_clkgen.h"
#include "am_reg_ctimer.h"
#include "am_reg_gpio.h"
#include "am_reg_iomstr.h"
#include "am_reg_ioslave.h"
#include "am_reg_itm.h"
#include "am_reg_jedec.h"
#include "am_reg_macros.h"
#include "am_reg_mcuctrl.h"
#include "am_reg_nvic.h"
#include "am_reg_rtc.h"
#include "am_reg_rstgen.h"
#include "am_reg_sysctrl.h"
#include "am_reg_systick.h"
#include "am_reg_tpiu.h"
#include "am_reg_uart.h"
#include "am_reg_vcomp.h"
#include "am_reg_wdt.h"

//*****************************************************************************
//
// HAL
//
//*****************************************************************************
#include "am_hal_adc.h"
#include "am_hal_cachectrl.h"
#include "am_hal_clkgen.h"
#include "am_hal_ctimer.h"
#include "am_hal_debug.h"
#include "am_hal_flash.h"
#include "am_hal_global.h"
#include "am_hal_gpio.h"
#include "am_hal_i2c_bit_bang.h"
#include "am_hal_interrupt.h"
#include "am_hal_iom.h"
#include "am_hal_ios.h"
#include "am_hal_itm.h"
#include "am_hal_mcuctrl.h"
#include "am_hal_otp.h"
#include "am_hal_pin.h"
#include "am_hal_pwrctrl.h"
#include "am_hal_queue.h"
#include "am_hal_reset.h"
#include "am_hal_rtc.h"
#include "am_hal_sysctrl.h"
#include "am_hal_systick.h"
#include "am_hal_tpiu.h"
#include "am_hal_uart.h"
#include "am_hal_vcomp.h"
#include "am_hal_wdt.h"


#endif // AM_MCU_APOLLO_H

