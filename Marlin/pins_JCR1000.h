/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * JCR1000 pin assignments emprical from joris
 */

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#define DEFAULT_MACHINE_NAME    "JCR1000 - Pino"
#define DEFAULT_SOURCE_CODE_URL "https://github.com/Marlinfirmware"
#define BOARD_NAME              "JCR1000"

#define LARGE_FLASH true

//
// Servos
//
#define SERVO0_PIN         13 // untested

//
// Limit Switches
//
#define X_MIN_PIN          4
//#define X_MAX_PIN          24
#define Y_MIN_PIN          5
//#define Y_MAX_PIN          28
#define Z_MIN_PIN          16
#define Z2_MIN_PIN          17
//#define Z_MAX_PIN          32

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  17
#endif

//
// Steppers
//
#define X_STEP_PIN         48
#define X_DIR_PIN          49
#define X_ENABLE_PIN       46

#define Y_STEP_PIN         47
#define Y_DIR_PIN          44
#define Y_ENABLE_PIN       45

#define Z_STEP_PIN         42
#define Z_DIR_PIN          43
#define Z_ENABLE_PIN       40

#define Z2_STEP_PIN        41
#define Z2_DIR_PIN         38
#define Z2_ENABLE_PIN      39

#define E0_STEP_PIN        36
#define E0_DIR_PIN         37
#define E0_ENABLE_PIN      34

#define E1_STEP_PIN        35
#define E1_DIR_PIN         32
#define E1_ENABLE_PIN      33

//
// Temperature Sensors
//
#define TEMP_0_PIN         14   // Analog Input 15 tested:69 60 83
#define TEMP_1_PIN         15   // Analog Input 14 tested:68 59 82
#define TEMP_BED_PIN       12   // Analog Input 12 tested:66 57 85

//
// Heaters / Fans
//
// swapped, couldn't measure Voltage on E0
// Led on main board didn't work either, maybe 7 is wrong pin, update: 7 is not wrong pin, but was also defined as fan_pin
#define HEATER_0_PIN        8
#define HEATER_1_PIN        7
//#define HEATER_0_PIN        7
//#define HEATER_1_PIN        8

#define HEATER_BED_PIN      25

#define HEATER_CHAMBER_PIN  23

#define FAN_PIN             3


// BELOW IS NOT IN USED OR TESTED...!!
//
// Misc. Functions
//
#define SDSS               53
#define LED_PIN            13 // note same as servo pin?!
#define PS_ON_PIN          13 // note was same as temp bed pin?!
#define SUICIDE_PIN        54  // PIN that has to be turned on right after start, to keep power flowing.

//
// LCD / Controller
//
#if ENABLED(ULTRA_LCD)

  #define BEEPER_PIN 18

  #if ENABLED(NEWPANEL)

    #define LCD_PINS_RS 20
    #define LCD_PINS_ENABLE 13 // 17
    #define LCD_PINS_D4 13 //16
    #define LCD_PINS_D5 21
    #define LCD_PINS_D6 13 //5
    #define LCD_PINS_D7 6

    // buttons are directly attached
    #define BTN_EN1 13 //40
    #define BTN_EN2 13 //42
    #define BTN_ENC 19

    #define SD_DETECT_PIN 13 //38

  #endif // !NEWPANEL

#endif // ULTRA_LCD
