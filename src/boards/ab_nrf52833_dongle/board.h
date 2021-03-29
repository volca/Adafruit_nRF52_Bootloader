/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _AB_NRF52840_DONGLE_H
#define _AB_NRF52840_DONGLE_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

// Board is supplied on VDDH (3.3V)
#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER         2
#define LED_PRIMARY_PIN     _PINNUM(1, 9)
#define LED_SECONDARY_PIN   _PINNUM(0, 11)
#define LED_STATE_ON        0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER      2
#define BUTTON_1            _PINNUM(0, 29)
#define BUTTON_2            _PINNUM(0, 28)  // not wired
#define BUTTON_PULL         NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER    "April Brother"
#define BLEDIS_MODEL           "AB nRF52833 Dongle"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x1915
#define USB_DESC_UF2_PID       0x521F
#define USB_DESC_CDC_ONLY_PID  0x521F

#define UF2_PRODUCT_NAME    "AB nRF52833 Dongle"
#define UF2_BOARD_ID        "nRF52833-pca10100-v1"
#define UF2_INDEX_URL       "https://www.nordicsemi.com/Software-and-Tools/Development-Kits/nRF52833-DK"

#endif // _AB_NRF52840_DONGLE_H
