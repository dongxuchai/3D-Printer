/*
    This file is part of Repetier-Firmware.

    Repetier-Firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Repetier-Firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Repetier-Firmware.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

/**************** READ FIRST ************************

   This configuration file was created with the configuration tool. For that
   reason, it does not contain the same informations as the original Configuration.h file.
   It misses the comments and unused parts. Open this file file in the config tool
   to see and change the data. You can also upload it to newer/older versions. The system
   will silently add new options, so compilation continues to work.

   This file is optimized for version 0.91
   generator: http://www.repetier.com/firmware/v091/
*/

#define NUM_EXTRUDER 1
//#define MOTHERBOARD 33
#define MOTHERBOARD 33

#include "pins.h"

// ################## EDIT THESE SETTINGS MANUALLY ################
// ################ END MANUAL SETTINGS ##########################

#define FAN_BOARD_PIN -1
//#define EXTERNALSERIAL  use Arduino serial library instead of build in. Requires more ram, has only 63 byte input buffer.
// Uncomment the following line if you are using arduino compatible firmware made for Arduino version earlier then 1.0
// If it is incompatible you will get compiler errors about write functions not beeing compatible!
//#define COMPAT_PRE1


#define DRIVE_SYSTEM 3
#define XAXIS_STEPS_PER_MM 88.89
#define YAXIS_STEPS_PER_MM 88.89
#define ZAXIS_STEPS_PER_MM 88.89
#define EXTRUDER_FAN_COOL_TEMP 50
#define EXT0_X_OFFSET 0
#define EXT0_Y_OFFSET 0
#define EXT0_STEPS_PER_MM 88.89
#define EXT0_TEMPSENSOR_TYPE 5
#define EXT0_TEMPSENSOR_PIN TEMP_0_PIN
#define EXT0_HEATER_PIN HEATER_0_PIN
#define EXT0_STEP_PIN E0_STEP_PIN
#define EXT0_DIR_PIN E0_DIR_PIN
#define EXT0_INVERSE 1
#define EXT0_ENABLE_PIN E0_ENABLE_PIN
#define EXT0_ENABLE_ON 0
#define EXT0_MAX_FEEDRATE 100
#define EXT0_MAX_START_FEEDRATE 10
#define EXT0_MAX_ACCELERATION 5000
#define EXT0_HEAT_MANAGER 1
#define EXT0_WATCHPERIOD 1
#define EXT0_PID_INTEGRAL_DRIVE_MAX 230
#define EXT0_PID_INTEGRAL_DRIVE_MIN 40
#define EXT0_PID_P 7
#define EXT0_PID_I 2
#define EXT0_PID_D 40
#define EXT0_PID_MAX 255
#define EXT0_ADVANCE_K 0
#define EXT0_ADVANCE_L 0
#define EXT0_ADVANCE_BACKLASH_STEPS 0
#define EXT0_WAIT_RETRACT_TEMP 150
#define EXT0_WAIT_RETRACT_UNITS 0
#define EXT0_SELECT_COMMANDS ""
#define EXT0_DESELECT_COMMANDS ""
#define EXT0_EXTRUDER_COOLER_PIN -1
#define EXT0_EXTRUDER_COOLER_SPEED 255
#define RETRACT_DURING_HEATUP true
#define PID_CONTROL_RANGE 20
#define SKIP_M109_IF_WITHIN 2
#define SCALE_PID_TO_MAX 0
#define TEMP_HYSTERESIS 0
#define EXTRUDE_MAXLENGTH 160
#define NUM_TEMPS_USERTHERMISTOR0 103
#define USER_THERMISTORTABLE0  {\
   {1*4, 938*8},{11*4, 423*8},{21*4, 351*8},{31*4, 314*8},{41*4, 290*8},{51*4, 272*8},{61*4, 258*8},{71*4, 247*8},{81*4, 237*8},{91*4, 229*8},\
   {101*4, 221*8},{111*4, 215*8},{121*4, 209*8},{131*4, 204*8},{141*4, 199*8},{151*4, 195*8},{161*4, 190*8},{171*4, 187*8},{181*4, 183*8},{191*4, 179*8},\
   {201*4, 176*8},{211*4, 173*8},{221*4, 170*8},{231*4, 167*8},{241*4, 165*8},{251*4, 162*8},{261*4, 160*8},{271*4, 157*8},{281*4, 155*8},{291*4, 153*8},\
   {301*4, 150*8},{311*4, 148*8},{321*4, 146*8},{331*4, 144*8},{341*4, 142*8},{351*4, 140*8},{361*4, 139*8},{371*4, 137*8},{381*4, 135*8},{391*4, 133*8},\
   {401*4, 131*8},{411*4, 130*8},{421*4, 128*8},{431*4, 126*8},{441*4, 125*8},{451*4, 123*8},{461*4, 122*8},{471*4, 120*8},{481*4, 119*8},{491*4, 117*8},\
   {501*4, 116*8},{511*4, 114*8},{521*4, 113*8},{531*4, 111*8},{541*4, 110*8},{551*4, 108*8},{561*4, 107*8},{571*4, 105*8},{581*4, 104*8},{591*4, 102*8},\
   {601*4, 101*8},{611*4, 100*8},{621*4, 98*8},{631*4, 97*8},{641*4, 95*8},{651*4, 94*8},{661*4, 92*8},{671*4, 91*8},{681*4, 90*8},{691*4, 88*8},\
   {701*4, 87*8},{711*4, 85*8},{721*4, 84*8},{731*4, 82*8},{741*4, 81*8},{751*4, 79*8},{761*4, 77*8},{771*4, 76*8},{781*4, 74*8},{791*4, 72*8},\
   {801*4, 71*8},{811*4, 69*8},{821*4, 67*8},{831*4, 65*8},{841*4, 63*8},{851*4, 62*8},{861*4, 60*8},{871*4, 57*8},{881*4, 55*8},{891*4, 53*8},\
   {901*4, 51*8},{911*4, 48*8},{921*4, 45*8},{931*4, 42*8},{941*4, 39*8},{951*4, 36*8},{961*4, 32*8},{971*4, 28*8},{981*4, 23*8},{991*4, 17*8},\
   {1001*4, 9*8},{1011*4, -1*8},{1021*4, -26*8}}
#define NUM_TEMPS_USERTHERMISTOR1 47
#define USER_THERMISTORTABLE1  {\
  {22*4, 300*8},{30*4, 270*8},{33*4, 265*8},{36*4, 260*8},{39*4, 255*8},{42*4, 250*8},{47*4, 245*8},{51*4, 240*8},{56*4, 235*8},{63*4, 230*8},{69*4, 225*8},{74*4, 220*8},{81*4, 215*8},{90*4, 210*8},{98*4, 205*8},\
  {107*4, 200*8},{119*4, 195*8},{129*4, 190*8},{142*4, 185*8},{156*4, 180*8},{171*4, 175*8},{187*4, 170*8},{204*4, 165*8},{224*4, 160*8},{245*4, 155*8},{271*4, 150*8},{297*4, 145*8},{321*4, 140*8},{351*4, 135*8},\
  {370*4, 130*8},{402*4, 125*8},{451*4, 120*8},{502*4, 115*8},{533*4, 110*8},{551*4, 105*8},{570*4, 100*8},{610*4, 95*8},{661*4, 90*8},{731*4, 80*8},{801*4, 70*8},\
  {856*4, 60*8},{901*4, 50*8},{950*4, 40*8},{977*4, 30*8},{991*4, 20*8},{1003*4, 10*8},{1011*4, 0*8}}
#define NUM_TEMPS_USERTHERMISTOR2 30
#define USER_THERMISTORTABLE2  {\
{1*4, 816*8},{36*4, 282*8},{71*4, 233*8},{106*4, 207*8},{141*4, 189*8},{176*4, 176*8},{211*4, 165*8},{246*4, 156*8},{281*4, 148*8},{316*4, 141*8},\
{351*4, 135*8},{386*4, 129*8},{421*4, 123*8},{456*4, 118*8},{491*4, 113*8},{526*4, 108*8},{561*4, 103*8},{596*4, 98*8},{631*4, 93*8},{666*4, 89*8},\
{701*4, 84*8},{736*4, 79*8},{771*4, 74*8},{806*4, 68*8},{841*4, 62*8},{876*4, 55*8},{911*4, 47*8},{946*4, 37*8},{981*4, 23*8},{1016*4, 0*8}}  
#define USE_GENERIC_THERMISTORTABLE_1
#define GENERIC_THERM1_T0 25
#define GENERIC_THERM1_R0 100000
#define GENERIC_THERM1_BETA 4036
#define GENERIC_THERM1_MIN_TEMP -20
#define GENERIC_THERM1_MAX_TEMP 130
#define GENERIC_THERM1_R1 0
#define GENERIC_THERM1_R2 4700
#define GENERIC_THERM_VREF 5
#define GENERIC_THERM_NUM_ENTRIES 33
#define HEATER_PWM_SPEED 0

// ############# Heated bed configuration ########################

#define HAVE_HEATED_BED 1
#define HEATED_BED_MAX_TEMP 120
#define SKIP_M190_IF_WITHIN 3
#define HEATED_BED_SENSOR_TYPE 7
#define HEATED_BED_SENSOR_PIN TEMP_1_PIN
#define HEATED_BED_HEATER_PIN HEATER_1_PIN
#define HEATED_BED_SET_INTERVAL 5000
#define HEATED_BED_HEAT_MANAGER 1
#define HEATED_BED_PID_INTEGRAL_DRIVE_MAX 255
#define HEATED_BED_PID_INTEGRAL_DRIVE_MIN 80
#define HEATED_BED_PID_PGAIN   196
#define HEATED_BED_PID_IGAIN   33
#define HEATED_BED_PID_DGAIN 290
#define HEATED_BED_PID_MAX 255
#define MIN_EXTRUDER_TEMP 150
#define MAXTEMP 275
#define MIN_DEFECT_TEMPERATURE -10
#define MAX_DEFECT_TEMPERATURE 290

// ################ Endstop configuration #####################

#define ENDSTOP_PULLUP_X_MIN false
#define ENDSTOP_X_MIN_INVERTING false
#define MIN_HARDWARE_ENDSTOP_X false
#define ENDSTOP_PULLUP_Y_MIN false
#define ENDSTOP_Y_MIN_INVERTING false
#define MIN_HARDWARE_ENDSTOP_Y false
#define ENDSTOP_PULLUP_Z_MIN false
#define ENDSTOP_Z_MIN_INVERTING false
#define MIN_HARDWARE_ENDSTOP_Z false
#define ENDSTOP_PULLUP_X_MAX true
#define ENDSTOP_X_MAX_INVERTING true
#define MAX_HARDWARE_ENDSTOP_X true
#define ENDSTOP_PULLUP_Y_MAX true
#define ENDSTOP_Y_MAX_INVERTING true
#define MAX_HARDWARE_ENDSTOP_Y true
#define ENDSTOP_PULLUP_Z_MAX true
#define ENDSTOP_Z_MAX_INVERTING true
#define MAX_HARDWARE_ENDSTOP_Z true
#define max_software_endstop_r true

#define min_software_endstop_x false
#define min_software_endstop_y false
#define min_software_endstop_z false
#define max_software_endstop_x true
#define max_software_endstop_y true
#define max_software_endstop_z true
#define ENDSTOP_X_BACK_MOVE 5
#define ENDSTOP_Y_BACK_MOVE 5
#define ENDSTOP_Z_BACK_MOVE 1
#define ENDSTOP_X_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Y_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Z_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_X_BACK_ON_HOME 0
#define ENDSTOP_Y_BACK_ON_HOME 0
#define ENDSTOP_Z_BACK_ON_HOME 0
#define ALWAYS_CHECK_ENDSTOPS 1

// ################# XYZ movements ###################

#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define DISABLE_X 0
#define DISABLE_Y 0
#define DISABLE_Z 0
#define DISABLE_E 0
#define INVERT_X_DIR 1
#define INVERT_Y_DIR 1
#define INVERT_Z_DIR 1
#define X_HOME_DIR 1
#define Y_HOME_DIR 1
#define Z_HOME_DIR 1
#define X_MAX_LENGTH 150
#define Y_MAX_LENGTH 150
#define Z_MAX_LENGTH 183.6
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0

// ##########################################################################################
// ##                           Movement settings                                          ##
// ##########################################################################################


#define DELTA_SEGMENTS_PER_SECOND_PRINT 180 // Move accurate setting for print moves
#define DELTA_SEGMENTS_PER_SECOND_MOVE 70 // Less accurate setting for other moves

// Delta settings
#define DELTA_DIAGONAL_ROD 196 // mm
#define DELTA_ALPHA_A 210
#define DELTA_ALPHA_B 330
#define DELTA_ALPHA_C 90
#define DELTA_RADIUS_CORRECTION_A -20.550
#define DELTA_RADIUS_CORRECTION_B -20.550
#define DELTA_RADIUS_CORRECTION_C -20.550
#define DELTA_RADIUS 107
#define DELTA_HOME_ON_POWER 0
#define STEP_COUNTER
#define DELTA_X_ENDSTOP_OFFSET_STEPS 0
#define DELTA_Y_ENDSTOP_OFFSET_STEPS 0
#define DELTA_Z_ENDSTOP_OFFSET_STEPS 0
//#define SOFTWARE_LEVELING

#define MAX_DELTA_SEGMENTS_PER_LINE 24
#define STEPPER_INACTIVE_TIME 360L
#define MAX_INACTIVE_TIME 0L
#define MAX_FEEDRATE_X 200
#define MAX_FEEDRATE_Y 200
#define MAX_FEEDRATE_Z 200
#define HOMING_FEEDRATE_X 40
#define HOMING_FEEDRATE_Y 40
#define HOMING_FEEDRATE_Z 40
#define HOMING_ORDER HOME_ORDER_ZXY
#define ENABLE_BACKLASH_COMPENSATION 0
#define X_BACKLASH 0
#define Y_BACKLASH 0
#define Z_BACKLASH 0
#define RAMP_ACCELERATION 1
#define STEPPER_HIGH_DELAY 0
#define STEP_DOUBLER_FREQUENCY 12000
#define ALLOW_QUADSTEPPING 1
#define DOUBLE_STEP_DELAY 1 // time in microseconds
#define MAX_HALFSTEP_INTERVAL 1999
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_X 1000
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1000
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Z 1000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_X 1000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Z 1000
#define MAX_JERK 20
#define MAX_ZJERK 20
#define MOVE_CACHE_SIZE 16
#define MOVE_CACHE_LOW 10
#define LOW_TICKS_PER_MOVE 250000
#define FEATURE_TWO_XSTEPPER 0
#define X2_STEP_PIN   E1_STEP_PIN
#define X2_DIR_PIN    E1_DIR_PIN
#define X2_ENABLE_PIN E1_ENABLE_PIN
#define FEATURE_TWO_YSTEPPER 0
#define Y2_STEP_PIN   E1_STEP_PIN
#define Y2_DIR_PIN    E1_DIR_PIN
#define Y2_ENABLE_PIN E1_ENABLE_PIN
#define FEATURE_TWO_ZSTEPPER 0
#define Z2_STEP_PIN   E1_STEP_PIN
#define Z2_DIR_PIN    E1_DIR_PIN
#define Z2_ENABLE_PIN E1_ENABLE_PIN
#define FEATURE_DITTO_PRINTING 0


// ################# Misc. settings ##################

#define BAUDRATE 115200
#define ENABLE_POWER_ON_STARTUP
#define POWER_INVERTING 0
#define KILL_METHOD 1
#define GCODE_BUFFER_SIZE 2
#define ACK_WITH_LINENUMBER
#define WAITING_IDENTIFIER "wait"
#define ECHO_ON_EXECUTE
#define EEPROM_MODE 1

/* ======== Servos =======
Control the servos with
M340 P<servoId> S<pulseInUS>   / ServoID = 0..3  pulseInUs = 500..2500
Servos are controlled by a pulse width normally between 500 and 2500 with 1500ms in center position. 0 turns servo off.
WARNING: Servos can draw a considerable amount of current. Make sure your system can handle this or you may risk your hardware!
*/
#define FEATURE_SERVO 0
#define SERVO0_PIN 11
#define SERVO1_PIN -1
#define SERVO2_PIN -1
#define SERVO3_PIN -1
#define FEATURE_WATCHDOG 0

// #################### Z-Probing #####################

#define FEATURE_Z_PROBE 0
#define Z_PROBE_PIN -1
#define Z_PROBE_PULLUP 0
#define Z_PROBE_ON_HIGH 0
#define Z_PROBE_X_OFFSET 0
#define Z_PROBE_Y_OFFSET 0
#define Z_PROBE_WAIT_BEFORE_TEST 0
#define Z_PROBE_SPEED 2
#define Z_PROBE_XY_SPEED 150
#define Z_PROBE_SWITCHING_DISTANCE 1
#define Z_PROBE_REPETITIONS 1
#define Z_PROBE_HEIGHT 40
#define Z_PROBE_START_SCRIPT ""
#define Z_PROBE_FINISHED_SCRIPT ""
#define FEATURE_AUTOLEVEL 1
#define Z_PROBE_X1 20
#define Z_PROBE_Y1 20
#define Z_PROBE_X2 160
#define Z_PROBE_Y2 20
#define Z_PROBE_X3 100
#define Z_PROBE_Y3 160

#ifndef SDSUPPORT  // Some boards have sd support on board. These define the values already in pins.h
#define SDSUPPORT 1
#define SDCARDDETECT SDCARDDETECT
#define SDCARDDETECTINVERTED 0
#endif
#define SD_EXTENDED_DIR 1 /** Show extended directory including file length. Don't use this with Pronterface! */
#define ARC_SUPPORT 1
#define FEATURE_MEMORY_POSITION 1
#define FEATURE_CHECKSUM_FORCED 0
#define FEATURE_FAN_CONTROL 1
#define FEATURE_CONTROLLER 2
#define UI_LANGUAGE 0
#define UI_PRINTER_NAME "ReverRuns"
#define UI_PRINTER_COMPANY "Home made"
#define UI_PAGES_DURATION 4000
#define UI_ANIMATION 1
#define UI_DISABLE_AUTO_PAGESWITCH 1
#define UI_AUTORETURN_TO_MENU_AFTER 30000
#define FEATURE_UI_KEYS 0
#define UI_ENCODER_SPEED 1
#define UI_KEY_BOUNCETIME 10
#define UI_KEY_FIRST_REPEAT 500
#define UI_KEY_REDUCE_REPEAT 50
#define UI_KEY_MIN_REPEAT 50
#define FEATURE_BEEPER 0
#define CASE_LIGHTS_PIN -1
#define UI_START_SCREEN_DELAY 1000
/**
Beeper sound definitions for short beeps during key actions
and longer beeps for important actions.
Parameter is delay in microseconds and the secons is the number of repetitions.
Values must be in range 1..255
*/
#define BEEPER_SHORT_SEQUENCE 2,2
#define BEEPER_LONG_SEQUENCE 8,8
#define UI_SET_PRESET_HEATED_BED_TEMP_PLA 60
#define UI_SET_PRESET_EXTRUDER_TEMP_PLA   190
#define UI_SET_PRESET_HEATED_BED_TEMP_ABS 120
#define UI_SET_PRESET_EXTRUDER_TEMP_ABS   240
#define UI_SET_MIN_HEATED_BED_TEMP  30
#define UI_SET_MAX_HEATED_BED_TEMP 130
#define UI_SET_MIN_EXTRUDER_TEMP   170
#define UI_SET_MAX_EXTRUDER_TEMP   260
#define UI_SET_EXTRUDER_FEEDRATE 2
#define UI_SET_EXTRUDER_RETRACT_DISTANCE 3

#endif

/* Below you will find the configuration string, that created this Configuration.h

========== Start configuration string ==========
{
    "editMode": 2,
    "processor": 0,
    "baudrate": 115200,
    "xStepsPerMM": 88.89,
    "yStepsPerMM": 88.89,
    "zStepsPerMM": 88.89,
    "xInvert": "1",
    "xInvertEnable": "1",
    "eepromMode": 1,
    "yInvert": "1",
    "yInvertEnable": "1",
    "zInvert": "1",
    "zInvertEnable": "1",
    "extruder": [
        {
            "id": 0,
            "heatManager": 1,
            "pidDriveMin": 40,
            "pidDriveMax": 230,
            "pidMax": 255,
            "sensorType": 1,
            "sensorPin": "TEMP_0_PIN",
            "heaterPin": "HEATER_0_PIN",
            "inverse": 0,
            "maxFeedrate": 100,
            "startFeedrate": 100,
            "invert": "0",
            "invertEnable": "0",
            "acceleration": 5000,
            "watchPeriod": 1,
            "pidP": 7,
            "pidI": 2,
            "pidD": 40,
            "advanceK": 0,
            "advanceL": 0,
            "waitRetractTemp": 150,
            "waitRetractUnits": 0,
            "waitRetract": 0,
            "stepsPerMM": 88.89,
            "coolerPin": -1,
            "coolerSpeed": 255,
            "selectCommands": "",
            "deselectCommands": "",
            "xOffset": 0,
            "yOffset": 0,
            "xOffsetSteps": 0,
            "yOffsetSteps": 0,
            "stepper": {
                "name": "Extruder 0",
                "step": "E0_STEP_PIN",
                "dir": "E0_DIR_PIN",
                "enable": "E0_ENABLE_PIN"
            },
            "advanceBacklashSteps": 0
        }
    ],
    "uiLanguage": 0,
    "uiController": 0,
    "xMinEndstop": 0,
    "yMinEndstop": 0,
    "zMinEndstop": 0,
    "xMaxEndstop": 2,
    "yMaxEndstop": 2,
    "zMaxEndstop": 2,
    "motherboard": 33,
    "driveSystem": 3,
    "xMaxSpeed": 200,
    "xHomingSpeed": 40,
    "xTravelAcceleration": 1000,
    "xPrintAcceleration": 1000,
    "yMaxSpeed": 200,
    "yHomingSpeed": 40,
    "yTravelAcceleration": 1000,
    "yPrintAcceleration": 1000,
    "zMaxSpeed": 200,
    "zHomingSpeed": 40,
    "zTravelAcceleration": 1000,
    "zPrintAcceleration": 1000,
    "xMotor": {
        "name": "X motor",
        "step": "X_STEP_PIN",
        "dir": "X_DIR_PIN",
        "enable": "X_ENABLE_PIN"
    },
    "yMotor": {
        "name": "Y motor",
        "step": "Y_STEP_PIN",
        "dir": "Y_DIR_PIN",
        "enable": "Y_ENABLE_PIN"
    },
    "zMotor": {
        "name": "Z motor",
        "step": "Z_STEP_PIN",
        "dir": "Z_DIR_PIN",
        "enable": "Z_ENABLE_PIN"
    },
    "enableBacklash": "0",
    "backlashX": 0,
    "backlashY": 0,
    "backlashZ": 0,
    "stepperInactiveTime": 360,
    "maxInactiveTime": 0,
    "xMinPos": 0,
    "yMinPos": 0,
    "zMinPos": 0,
    "xLength": 150,
    "yLength": 150,
    "zLength": 206,
    "alwaysCheckEndstops": "1",
    "disableX": "0",
    "disableY": "0",
    "disableZ": "0",
    "disableE": "0",
    "xHomeDir": "-1",
    "yHomeDir": "-1",
    "zHomeDir": 1,
    "xEndstopBack": 0,
    "yEndstopBack": 0,
    "zEndstopBack": 0,
    "deltaSegmentsPerSecondPrint": 180,
    "deltaSegmentsPerSecondTravel": 70,
    "deltaDiagonalRod": 186,
    "deltaHorizontalRadius": 107,
    "deltaAlphaA": 210,
    "deltaAlphaB": 330,
    "deltaAlphaC": 90,
    "deltaRadiusCorrA": -22,
    "deltaRadiusCorrB": -22,
    "deltaRadiusCorrC": -22,
    "deltaXOffsetSteps": 0,
    "deltaYOffsetSteps": 0,
    "deltaZOffsetSteps": 0,
    "deltaSegmentsPerLine": 24,
    "stepperHighDelay": 0,
    "stepDoublerFrequency": 12000,
    "allowQuadstepping": "1",
    "doubleStepDelay": 1,
    "maxHalfstepInterval": 1999,
    "maxJerk": 20,
    "maxZJerk": 0.3,
    "moveCacheSize": 16,
    "moveCacheLow": 10,
    "lowTicksPerMove": 250000,
    "enablePowerOnStartup": "1",
    "echoOnExecute": "1",
    "sendWaits": "1",
    "ackWithLineNumber": "1",
    "killMethod": 1,
    "useAdvance": "0",
    "useQuadraticAdvance": "0",
    "powerInverting": 0,
    "mirrorX": 0,
    "mirrorXMotor": {
        "name": "Extruder 1",
        "step": "E1_STEP_PIN",
        "dir": "E1_DIR_PIN",
        "enable": "E1_ENABLE_PIN"
    },
    "mirrorY": 0,
    "mirrorYMotor": {
        "name": "Extruder 1",
        "step": "E1_STEP_PIN",
        "dir": "E1_DIR_PIN",
        "enable": "E1_ENABLE_PIN"
    },
    "mirrorZ": 0,
    "mirrorZMotor": {
        "name": "Extruder 1",
        "step": "E1_STEP_PIN",
        "dir": "E1_DIR_PIN",
        "enable": "E1_ENABLE_PIN"
    },
    "dittoPrinting": "0",
    "featureServos": "0",
    "servo0Pin": 11,
    "servo1Pin": -1,
    "servo2Pin": -1,
    "servo3Pin": -1,
    "featureWatchdog": "0",
    "hasHeatedBed": "1",
    "enableZProbing": "0",
    "extrudeMaxLength": 160,
    "homeOrder": "HOME_ORDER_ZXY",
    "featureController": 2,
    "uiPrinterName": "ReverRuns",
    "uiPrinterCompany": "Home made",
    "uiPagesDuration": 4000,
    "uiAnimation": "1",
    "uiDisablePageswitch": "1",
    "uiAutoReturnAfter": 30000,
    "featureKeys": "0",
    "uiEncoderSpeed": 1,
    "uiKeyBouncetime": 10,
    "uiKeyFirstRepeat": 500,
    "uiKeyReduceRepeat": 50,
    "uiKeyMinRepeat": 50,
    "featureBeeper": "0",
    "uiPresetBedTempPLA": 60,
    "uiPresetBedABS": 120,
    "uiPresetExtruderPLA": 190,
    "uiPresetExtruderABS": 240,
    "uiMinHeatedBed": 30,
    "uiMaxHeatedBed": 130,
    "uiMinEtxruderTemp": 170,
    "uiMaxExtruderTemp": 260,
    "uiExtruderFeedrate": 2,
    "uiExtruderRetractDistance": 3,
    "maxBedTemperature": 120,
    "bedSensorType": 97,
    "bedSensorPin": "TEMP_1_PIN",
    "bedHeaterPin": "HEATER_1_PIN",
    "bedHeatManager": 1,
    "bedUpdateInterval": 5000,
    "bedPidDriveMin": 80,
    "bedPidDriveMax": 255,
    "bedPidP": 196,
    "bedPidI": 33,
    "bedPidD": 290,
    "bedPidMax": 255,
    "caseLightPin": -1,
    "bedSkipIfWithin": 3,
    "gen1T0": 25,
    "gen1R0": 100000,
    "gen1Beta": 4036,
    "gen1MinTemp": -20,
    "gen1MaxTemp": 130,
    "gen1R1": 0,
    "gen1R2": 4700,
    "gen2T0": 25,
    "gen2R0": 100000,
    "gen2Beta": 4036,
    "gen2MinTemp": -20,
    "gen2MaxTemp": 300,
    "gen2R1": 0,
    "gen2R2": 4700,
    "gen3T0": 25,
    "gen3R0": 100000,
    "gen3Beta": 4036,
    "gen3MinTemp": -20,
    "gen3MaxTemp": 300,
    "gen3R1": 0,
    "gen3R2": 4700,
    "userTable0": {
        "r1": 0,
        "r2": 4700,
        "temps": [

        ]
    },
    "userTable1": {
        "r1": 0,
        "r2": 4700,
        "temps": [

        ]
    },
    "userTable2": {
        "r1": 0,
        "r2": 4700,
        "temps": [

        ]
    },
    "tempHysteresis": 0,
    "pidControlRange": 20,
    "skipM109Within": 2,
    "extruderFanCoolTemp": 50,
    "minTemp": 150,
    "maxTemp": 275,
    "minDefectTemp": -10,
    "maxDefectTemp": 290,
    "arcSupport": "1",
    "featureMemoryPositionWatchdog": "1",
    "forceChecksum": "0",
    "sdExtendedDir": "1",
    "featureFanControl": "1",
    "fanPin": "FAN_PIN",
    "scalePidToMax": 0,
    "zProbePin": -1,
    "zProbePullup": "0",
    "zProbeOnHigh": "0",
    "zProbeXOffset": 0,
    "zProbeYOffset": 0,
    "zProbeWaitBeforeTest": "0",
    "zProbeSpeed": 2,
    "zProbeXYSpeed": 150,
    "zProbeHeight": 40,
    "zProbeStartScript": "",
    "zProbeFinishedScript": "",
    "featureAutolevel": "1",
    "zProbeX1": 20,
    "zProbeY1": 20,
    "zProbeX2": 160,
    "zProbeY2": 20,
    "zProbeX3": 100,
    "zProbeY3": 160,
    "zProbeSwitchingDistance": 1,
    "zProbeRepetitions": 1,
    "sdSupport": "0",
    "sdCardDetectPin": "SDCARDDETECT",
    "sdCardDetectInverted": "0",
    "uiStartScreenDelay": 1000,
    "xEndstopBackMove": 5,
    "yEndstopBackMove": 5,
    "zEndstopBackMove": 1,
    "xEndstopRetestFactor": 3,
    "yEndstopRetestFactor": 3,
    "zEndstopRetestFactor": 3,
    "xMinPin": "X_MIN_PIN",
    "yMinPin": "Y_MIN_PIN",
    "zMinPin": "Z_MIN_PIN",
    "xMaxPin": "X_MAX_PIN",
    "yMaxPin": "Y_MAX_PIN",
    "zMaxPin": "Z_MAX_PIN",
    "deltaHomeOnPower": "0",
    "fanBoardPin": -1,
    "heaterPWMSpeed": 0,
    "hasMAX6675": false,
    "hasMAX31855": false,
    "hasGeneric1": true,
    "hasGeneric2": false,
    "hasGeneric3": false,
    "hasUser0": false,
    "hasUser1": false,
    "hasUser2": false,
    "numExtruder": 1,
    "version": 91
}
========== End configuration string ==========

*/
