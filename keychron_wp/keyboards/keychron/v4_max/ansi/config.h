/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifdef RGB_MATRIX_ENABLE
/* RGB Matrix driver configuration */
#    define DRIVER_COUNT 2
#    define RGB_MATRIX_LED_COUNT 61

#    define SPI_SCK_PIN A5
#    define SPI_MISO_PIN A6
#    define SPI_MOSI_PIN A7

#    define DRIVER_CS_PINS \
        { B8, B9 }
#    define SNLED23751_SPI_DIVISOR 16
#    define SPI_DRIVER SPID1

/* Scan phase of led driver set as MSKPHASE_9CHANNEL(defined as 0x03 in snled27351.h) */
#    define SNLED27351_PHASE_CHANNEL MSKPHASE_9CHANNEL

/* Set LED driver current */
#    define SNLED27351_CURRENT_TUNE \
         { 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36 }

/* Set to infinit, which is use in USB mode by default */
#    define RGB_MATRIX_TIMEOUT RGB_MATRIX_TIMEOUT_INFINITE

/* Allow shutdown of led driver to save power */
#    define RGB_MATRIX_DRIVER_SHUTDOWN_ENABLE
/* Turn off backlight on low brightness to save power */
#    define RGB_MATRIX_BRIGHTNESS_TURN_OFF_VAL 32

/* Indications */
#    define BT_HOST_LED_MATRIX_LIST \
        { 15, 16, 17 }

#    define P2P4G_HOST_LED_MATRIX_LIST \
        { 18 }

#    define BAT_LEVEL_LED_LIST \
        { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }

#    define CAPS_LOCK_INDEX 28
#    define LOW_BAT_IND_INDEX \
        { 56 }

#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS

#endif
