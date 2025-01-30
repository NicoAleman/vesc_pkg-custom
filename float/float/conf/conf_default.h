// This file is autogenerated by VESC Tool

#ifndef CONF_DEFAULT_H_
#define CONF_DEFAULT_H_

// Angle P
#ifndef APPCONF_FLOAT_KP
#define APPCONF_FLOAT_KP 20
#endif

// Rate P
#ifndef APPCONF_FLOAT_KP2
#define APPCONF_FLOAT_KP2 0.6
#endif

// Angle I
#ifndef APPCONF_FLOAT_KI
#define APPCONF_FLOAT_KI 0.005
#endif

// Mahony KP
#ifndef APPCONF_FLOAT_MAHONY_KP
#define APPCONF_FLOAT_MAHONY_KP 2
#endif

// Angle P (Braking)
#ifndef APPCONF_FLOAT_KP_BRAKE
#define APPCONF_FLOAT_KP_BRAKE 1
#endif

// Rate P (Braking)
#ifndef APPCONF_FLOAT_KP2_BRAKE
#define APPCONF_FLOAT_KP2_BRAKE 1
#endif

// Loop Hertz
#ifndef APPCONF_FLOAT_HERTZ
#define APPCONF_FLOAT_HERTZ 832
#endif

// Pitch Axis Fault Cutoff
#ifndef APPCONF_FLOAT_FAULT_PITCH
#define APPCONF_FLOAT_FAULT_PITCH 60
#endif

// Roll Axis Fault Cutoff
#ifndef APPCONF_FLOAT_FAULT_ROLL
#define APPCONF_FLOAT_FAULT_ROLL 60
#endif

// PB12 Switch Threshold
#ifndef APPCONF_FLOAT_FAULT_ADC1
#define APPCONF_FLOAT_FAULT_ADC1 3.3
#endif

// Beep on Sensor Fault
#ifndef APPCONF_FLOAT_IS_FOOTBEEP_ENABLED
#define APPCONF_FLOAT_IS_FOOTBEEP_ENABLED 1
#endif

// Pitch Fault Delay
#ifndef APPCONF_FLOAT_FAULT_DELAY_PITCH
#define APPCONF_FLOAT_FAULT_DELAY_PITCH 250
#endif

// Roll Fault Delay
#ifndef APPCONF_FLOAT_FAULT_DELAY_ROLL
#define APPCONF_FLOAT_FAULT_DELAY_ROLL 250
#endif

// Half Switch Fault Delay
#ifndef APPCONF_FLOAT_FAULT_DELAY_SWITCH_HALF
#define APPCONF_FLOAT_FAULT_DELAY_SWITCH_HALF 20
#endif

// Full Switch Fault Delay
#ifndef APPCONF_FLOAT_FAULT_DELAY_SWITCH_FULL
#define APPCONF_FLOAT_FAULT_DELAY_SWITCH_FULL 20
#endif

// ADC Half State Fault ERPM
#ifndef APPCONF_FLOAT_FAULT_ADC_HALF_ERPM
#define APPCONF_FLOAT_FAULT_ADC_HALF_ERPM 200
#endif

// Treat Both Sensors as One (Posi)
#ifndef APPCONF_FLOAT_FAULT_IS_DUAL_SWITCH
#define APPCONF_FLOAT_FAULT_IS_DUAL_SWITCH 0
#endif

// Disable Moving Faults
#ifndef APPCONF_FLOAT_FAULT_MOVING_FAULT_DISABLED
#define APPCONF_FLOAT_FAULT_MOVING_FAULT_DISABLED 0
#endif

// Enable Darkride
#ifndef APPCONF_FLOAT_FAULT_DARKRIDE_ENABLED
#define APPCONF_FLOAT_FAULT_DARKRIDE_ENABLED 0
#endif

// Enable Reverse Stop
#ifndef APPCONF_FLOAT_FAULT_REVERSESTOP_ENABLED
#define APPCONF_FLOAT_FAULT_REVERSESTOP_ENABLED 0
#endif

// Angle
#ifndef APPCONF_FLOAT_TILTBACK_DUTY_ANGLE
#define APPCONF_FLOAT_TILTBACK_DUTY_ANGLE 0
#endif

// Speed
#ifndef APPCONF_FLOAT_TILTBACK_DUTY_SPEED
#define APPCONF_FLOAT_TILTBACK_DUTY_SPEED 3
#endif

// Duty Cycle Threshold
#ifndef APPCONF_FLOAT_TILTBACK_DUTY
#define APPCONF_FLOAT_TILTBACK_DUTY 0.8
#endif

// Beep on Duty Tiltback
#ifndef APPCONF_FLOAT_IS_DUTYBEEP_ENABLED
#define APPCONF_FLOAT_IS_DUTYBEEP_ENABLED 0
#endif

// Surge Angle Increment
#ifndef APPCONF_FLOAT_SURGE_ANGLE
#define APPCONF_FLOAT_SURGE_ANGLE 0
#endif

// Surge Duty Cycle Start
#ifndef APPCONF_FLOAT_SURGE_DUTY_START
#define APPCONF_FLOAT_SURGE_DUTY_START 0.88
#endif

// Beep when Surging
#ifndef APPCONF_FLOAT_IS_SURGEBEEP_ENABLED
#define APPCONF_FLOAT_IS_SURGEBEEP_ENABLED 1
#endif

// Angle
#ifndef APPCONF_FLOAT_TILTBACK_HV_ANGLE
#define APPCONF_FLOAT_TILTBACK_HV_ANGLE 0
#endif

// Speed
#ifndef APPCONF_FLOAT_TILTBACK_HV_SPEED
#define APPCONF_FLOAT_TILTBACK_HV_SPEED 1
#endif

// High Voltage Threshold
#ifndef APPCONF_FLOAT_TILTBACK_HV
#define APPCONF_FLOAT_TILTBACK_HV 85.5
#endif

// Angle
#ifndef APPCONF_FLOAT_TILTBACK_LV_ANGLE
#define APPCONF_FLOAT_TILTBACK_LV_ANGLE 0
#endif

// Speed
#ifndef APPCONF_FLOAT_TILTBACK_LV_SPEED
#define APPCONF_FLOAT_TILTBACK_LV_SPEED 1
#endif

// Low Voltage Threshold
#ifndef APPCONF_FLOAT_TILTBACK_LV
#define APPCONF_FLOAT_TILTBACK_LV 60
#endif

// Return To Level Speed
#ifndef APPCONF_FLOAT_TILTBACK_RETURN_SPEED
#define APPCONF_FLOAT_TILTBACK_RETURN_SPEED 1
#endif

// Constant Tiltback
#ifndef APPCONF_FLOAT_TILTBACK_CONSTANT
#define APPCONF_FLOAT_TILTBACK_CONSTANT 0
#endif

// Constant Tiltback ERPM
#ifndef APPCONF_FLOAT_TILTBACK_CONSTANT_ERPM
#define APPCONF_FLOAT_TILTBACK_CONSTANT_ERPM 500
#endif

// Variable Tiltback Rate
#ifndef APPCONF_FLOAT_TILTBACK_VARIABLE
#define APPCONF_FLOAT_TILTBACK_VARIABLE 0.1
#endif

// Variable Tiltback Maximum
#ifndef APPCONF_FLOAT_TILTBACK_VARIABLE_MAX
#define APPCONF_FLOAT_TILTBACK_VARIABLE_MAX 0
#endif

// Variable Tiltback Start ERPM
#ifndef APPCONF_FLOAT_TILTBACK_VARIABLE_ERPM
#define APPCONF_FLOAT_TILTBACK_VARIABLE_ERPM 0
#endif

// Haptic Buzz Intensity
#ifndef APPCONF_FLOAT_HAPTIC_BUZZ_INTENSITY
#define APPCONF_FLOAT_HAPTIC_BUZZ_INTENSITY 0
#endif

// Haptic Buzz Minimum Intensity
#ifndef APPCONF_FLOAT_HAPTIC_BUZZ_MIN
#define APPCONF_FLOAT_HAPTIC_BUZZ_MIN 0
#endif

// Haptic Buzz
#ifndef APPCONF_FLOAT_HAPTIC_BUZZ_DUTY
#define APPCONF_FLOAT_HAPTIC_BUZZ_DUTY 0
#endif

// Haptic Buzz
#ifndef APPCONF_FLOAT_HAPTIC_BUZZ_HV
#define APPCONF_FLOAT_HAPTIC_BUZZ_HV 0
#endif

// Haptic Buzz
#ifndef APPCONF_FLOAT_HAPTIC_BUZZ_LV
#define APPCONF_FLOAT_HAPTIC_BUZZ_LV 0
#endif

// Haptic Buzz - Temperature
#ifndef APPCONF_FLOAT_HAPTIC_BUZZ_TEMP
#define APPCONF_FLOAT_HAPTIC_BUZZ_TEMP 0
#endif

// Haptic Buzz - Current Limits
#ifndef APPCONF_FLOAT_HAPTIC_BUZZ_CURRENT
#define APPCONF_FLOAT_HAPTIC_BUZZ_CURRENT 0
#endif

// Haptic Buzz - BMS
#ifndef APPCONF_FLOAT_HAPTIC_BUZZ_BMS
#define APPCONF_FLOAT_HAPTIC_BUZZ_BMS 0
#endif

// Nose Angling Speed
#ifndef APPCONF_FLOAT_NOSEANGLING_SPEED
#define APPCONF_FLOAT_NOSEANGLING_SPEED 5
#endif

// Remote Type
#ifndef APPCONF_FLOAT_INPUTTILT_REMOTE_TYPE
#define APPCONF_FLOAT_INPUTTILT_REMOTE_TYPE 0
#endif

// Tiltback Angle Limit
#ifndef APPCONF_FLOAT_INPUTTILT_ANGLE_LIMIT
#define APPCONF_FLOAT_INPUTTILT_ANGLE_LIMIT 10
#endif

// Tiltback Speed
#ifndef APPCONF_FLOAT_INPUTTILT_SPEED
#define APPCONF_FLOAT_INPUTTILT_SPEED 25
#endif

// Tiltback Smoothing Factor
#ifndef APPCONF_FLOAT_INPUTTILT_SMOOTHING_FACTOR
#define APPCONF_FLOAT_INPUTTILT_SMOOTHING_FACTOR 1
#endif

// Invert Throttle
#ifndef APPCONF_FLOAT_INPUTTILT_INVERT_THROTTLE
#define APPCONF_FLOAT_INPUTTILT_INVERT_THROTTLE 1
#endif

// Input Deadband
#ifndef APPCONF_FLOAT_INPUTTILT_DEADBAND
#define APPCONF_FLOAT_INPUTTILT_DEADBAND 0.1
#endif

// Throttle Current Maximum
#ifndef APPCONF_FLOAT_REMOTE_THROTTLE_CURRENT_MAX
#define APPCONF_FLOAT_REMOTE_THROTTLE_CURRENT_MAX 0
#endif

// Grace Period
#ifndef APPCONF_FLOAT_REMOTE_THROTTLE_GRACE_PERIOD
#define APPCONF_FLOAT_REMOTE_THROTTLE_GRACE_PERIOD 10
#endif

// Startup Pitch Axis Angle Tolerance
#ifndef APPCONF_FLOAT_STARTUP_PITCH_TOLERANCE
#define APPCONF_FLOAT_STARTUP_PITCH_TOLERANCE 6
#endif

// Startup Roll Axis Angle Tolerance
#ifndef APPCONF_FLOAT_STARTUP_ROLL_TOLERANCE
#define APPCONF_FLOAT_STARTUP_ROLL_TOLERANCE 30
#endif

// Startup Centering Speed
#ifndef APPCONF_FLOAT_STARTUP_SPEED
#define APPCONF_FLOAT_STARTUP_SPEED 30
#endif

// Startup Click Current
#ifndef APPCONF_FLOAT_STARTUP_CLICK_CURRENT
#define APPCONF_FLOAT_STARTUP_CLICK_CURRENT 0
#endif

// Enable Simple Start
#ifndef APPCONF_SIMPLESTART_ENABLED
#define APPCONF_SIMPLESTART_ENABLED 0
#endif

// Enable Push Start
#ifndef APPCONF_PUSHSTART_ENABLED
#define APPCONF_PUSHSTART_ENABLED 0
#endif

// Enable Dirty Landings
#ifndef APPCONF_DIRTYLANDINGS_ENABLED
#define APPCONF_DIRTYLANDINGS_ENABLED 0
#endif

// Brake Current
#ifndef APPCONF_FLOAT_BRAKE_CURRENT
#define APPCONF_FLOAT_BRAKE_CURRENT 0
#endif

// I Term Limit
#ifndef APPCONF_FLOAT_KI_LIMIT
#define APPCONF_FLOAT_KI_LIMIT 30
#endif

// Start Angle
#ifndef APPCONF_FLOAT_BOOSTER_ANGLE
#define APPCONF_FLOAT_BOOSTER_ANGLE 8
#endif

// Ramp Up
#ifndef APPCONF_FLOAT_BOOSTER_RAMP
#define APPCONF_FLOAT_BOOSTER_RAMP 4
#endif

// Current Boost
#ifndef APPCONF_FLOAT_BOOSTER_CURRENT
#define APPCONF_FLOAT_BOOSTER_CURRENT 0
#endif

// Start Angle
#ifndef APPCONF_FLOAT_BRKBOOSTER_ANGLE
#define APPCONF_FLOAT_BRKBOOSTER_ANGLE 8
#endif

// Ramp Up
#ifndef APPCONF_FLOAT_BRKBOOSTER_RAMP
#define APPCONF_FLOAT_BRKBOOSTER_RAMP 4
#endif

// Current Boost
#ifndef APPCONF_FLOAT_BRKBOOSTER_CURRENT
#define APPCONF_FLOAT_BRKBOOSTER_CURRENT 0
#endif

// Start Current Threshold
#ifndef APPCONF_FLOAT_TORQUETILT_START_CURRENT
#define APPCONF_FLOAT_TORQUETILT_START_CURRENT 15
#endif

// Tilitback Angle Limit
#ifndef APPCONF_FLOAT_TORQUETILT_ANGLE_LIMIT
#define APPCONF_FLOAT_TORQUETILT_ANGLE_LIMIT 8
#endif

// Max Tiltback Speed
#ifndef APPCONF_FLOAT_TORQUETILT_ON_SPEED
#define APPCONF_FLOAT_TORQUETILT_ON_SPEED 5
#endif

// Max Tiltback Release Speed
#ifndef APPCONF_FLOAT_TORQUETILT_OFF_SPEED
#define APPCONF_FLOAT_TORQUETILT_OFF_SPEED 3
#endif

// Strength
#ifndef APPCONF_FLOAT_TORQUETILT_STRENGTH
#define APPCONF_FLOAT_TORQUETILT_STRENGTH 0.1
#endif

// Strength (Regen)
#ifndef APPCONF_FLOAT_TORQUETILT_STRENGTH_REGEN
#define APPCONF_FLOAT_TORQUETILT_STRENGTH_REGEN 0.1
#endif

// Strength
#ifndef APPCONF_FLOAT_TURNTILT_STRENGTH
#define APPCONF_FLOAT_TURNTILT_STRENGTH 0
#endif

// Tilitback Angle Limit
#ifndef APPCONF_FLOAT_TURNTILT_ANGLE_LIMIT
#define APPCONF_FLOAT_TURNTILT_ANGLE_LIMIT 3
#endif

// Turn Aggregate Threshold
#ifndef APPCONF_FLOAT_TURNTILT_START_ANGLE
#define APPCONF_FLOAT_TURNTILT_START_ANGLE 2
#endif

// ERPM Threshold
#ifndef APPCONF_FLOAT_TURNTILT_START_ERPM
#define APPCONF_FLOAT_TURNTILT_START_ERPM 1000
#endif

// Max Tiltback Speed
#ifndef APPCONF_FLOAT_TURNTILT_SPEED
#define APPCONF_FLOAT_TURNTILT_SPEED 5
#endif

// Speed Boost %
#ifndef APPCONF_FLOAT_TURNTILT_ERPM_BOOST
#define APPCONF_FLOAT_TURNTILT_ERPM_BOOST 200
#endif

// Speed Boost Max ERPM
#ifndef APPCONF_FLOAT_TURNTILT_ERPM_BOOST_END
#define APPCONF_FLOAT_TURNTILT_ERPM_BOOST_END 5000
#endif

// Turn Aggregate Target
#ifndef APPCONF_FLOAT_TURNTILT_YAW_AGGREGATE
#define APPCONF_FLOAT_TURNTILT_YAW_AGGREGATE 90
#endif

// ATR Uphill Strength
#ifndef APPCONF_FLOAT_ATR_UPHILL_STRENGTH
#define APPCONF_FLOAT_ATR_UPHILL_STRENGTH 0
#endif

// ATR Downhill Strength
#ifndef APPCONF_FLOAT_ATR_DOWNHILL_STRENGTH
#define APPCONF_FLOAT_ATR_DOWNHILL_STRENGTH 0
#endif

// Threshold Angle Up
#ifndef APPCONF_FLOAT_ATR_THRESHOLD_UP
#define APPCONF_FLOAT_ATR_THRESHOLD_UP 1.5
#endif

// Threshold Angle Down
#ifndef APPCONF_FLOAT_ATR_THRESHOLD_DOWN
#define APPCONF_FLOAT_ATR_THRESHOLD_DOWN 1.5
#endif

// Speed Boost
#ifndef APPCONF_FLOAT_ATR_SPEED_BOOST
#define APPCONF_FLOAT_ATR_SPEED_BOOST 0.3
#endif

// Tilitback Angle Limit
#ifndef APPCONF_FLOAT_ATR_ANGLE_LIMIT
#define APPCONF_FLOAT_ATR_ANGLE_LIMIT 8
#endif

// Max Tiltback Speed
#ifndef APPCONF_FLOAT_ATR_ON_SPEED
#define APPCONF_FLOAT_ATR_ON_SPEED 4
#endif

// Max Tiltback Release Speed
#ifndef APPCONF_FLOAT_ATR_OFF_SPEED
#define APPCONF_FLOAT_ATR_OFF_SPEED 3
#endif

// Tiltback Response Boost
#ifndef APPCONF_FLOAT_ATR_RESPONSE_BOOST
#define APPCONF_FLOAT_ATR_RESPONSE_BOOST 1.5
#endif

// Tiltback Transition Boost
#ifndef APPCONF_FLOAT_ATR_TRANSITION_BOOST
#define APPCONF_FLOAT_ATR_TRANSITION_BOOST 3
#endif

// Current Filter
#ifndef APPCONF_FLOAT_ATR_FILTER
#define APPCONF_FLOAT_ATR_FILTER 5
#endif

// Amps to Acceleration Ratio
#ifndef APPCONF_FLOAT_ATR_AMPS_ACCEL_RATIO
#define APPCONF_FLOAT_ATR_AMPS_ACCEL_RATIO 9
#endif

// Amps to Deceleration Ratio
#ifndef APPCONF_FLOAT_ATR_AMPS_DECEL_RATIO
#define APPCONF_FLOAT_ATR_AMPS_DECEL_RATIO 8
#endif

// Test1
#ifndef APPCONF_FLOAT_ATR_TEST1
#define APPCONF_FLOAT_ATR_TEST1 0
#endif

// Test2
#ifndef APPCONF_FLOAT_ATR_TEST2
#define APPCONF_FLOAT_ATR_TEST2 0
#endif

// Test3
#ifndef APPCONF_FLOAT_ATR_TEST3
#define APPCONF_FLOAT_ATR_TEST3 0
#endif

// Brake Tilt Strength
#ifndef APPCONF_FLOAT_BRAKETILT_STRENGTH
#define APPCONF_FLOAT_BRAKETILT_STRENGTH 0
#endif

// Brake Tilt Lingering
#ifndef APPCONF_FLOAT_BRAKETILT_LINGERING
#define APPCONF_FLOAT_BRAKETILT_LINGERING 2
#endif

// LED Type
#ifndef APPCONF_FLOAT_LED_TYPE
#define APPCONF_FLOAT_LED_TYPE 0
#endif

// Status LED Strip Length
#ifndef APPCONF_FLOAT_LED_STATUS_COUNT
#define APPCONF_FLOAT_LED_STATUS_COUNT 10
#endif

// Forward LED Strip Length
#ifndef APPCONF_FLOAT_LED_FORWARD_COUNT
#define APPCONF_FLOAT_LED_FORWARD_COUNT 20
#endif

// Rear LED Strip Length
#ifndef APPCONF_FLOAT_LED_REAR_COUNT
#define APPCONF_FLOAT_LED_REAR_COUNT 20
#endif

// Headlight Brightness
#ifndef APPCONF_FLOAT_LED_BRIGHTNESS
#define APPCONF_FLOAT_LED_BRIGHTNESS 50
#endif

// Headlight Brightness when Idle
#ifndef APPCONF_FLOAT_LED_BRIGHTNESS_IDLE
#define APPCONF_FLOAT_LED_BRIGHTNESS_IDLE 10
#endif

// Headlights LED Mode
#ifndef APPCONF_FLOAT_LED_MODE
#define APPCONF_FLOAT_LED_MODE 0
#endif

// Forward/Rear LED Mode when Idle
#ifndef APPCONF_FLOAT_LED_MODE_IDLE
#define APPCONF_FLOAT_LED_MODE_IDLE 1
#endif

// Status LED Brightness
#ifndef APPCONF_FLOAT_LED_STATUS_BRIGHTNESS
#define APPCONF_FLOAT_LED_STATUS_BRIGHTNESS 10
#endif

// Status LED Mode
#ifndef APPCONF_FLOAT_LED_STATUS_MODE
#define APPCONF_FLOAT_LED_STATUS_MODE 0
#endif

// Acceleration Current Limit
#ifndef LIMIT_CURRENT_ACCEL
#define LIMIT_CURRENT_ACCEL 150
#endif

// Braking Current Limit
#ifndef LIMIT_CURRENT_BRAKE
#define LIMIT_CURRENT_BRAKE -150
#endif

// Continuous Current Limit
#ifndef LIMIT_CURRENT_CONT
#define LIMIT_CURRENT_CONT 100
#endif

// Darkride Pitch Offset
#ifndef APPCONF_FLOAT_DARK_PITCH_OFFSET
#define APPCONF_FLOAT_DARK_PITCH_OFFSET 0
#endif

// Enable Beeper on Servo/PPM
#ifndef APPCONF_FLOAT_IS_BEEPER_ENABLED
#define APPCONF_FLOAT_IS_BEEPER_ENABLED 0
#endif

// Disable Float Package
#ifndef APPCONF_FLOAT_DISABLE
#define APPCONF_FLOAT_DISABLE 1
#endif

// Package Version
#ifndef APPCONF_FLOAT_VERSION
#define APPCONF_FLOAT_VERSION 2.06
#endif

// Max Current
#ifndef BIKE_MAX_CURRENT
#define BIKE_MAX_CURRENT 120
#endif

// Max Brake Current
#ifndef BIKE_MAX_CURRENT_BRAKE
#define BIKE_MAX_CURRENT_BRAKE -120
#endif

// Brake Throttle Cutoff
#ifndef BIKE_BRAKE_THROTTLE_CUTOFF
#define BIKE_BRAKE_THROTTLE_CUTOFF 1
#endif

// Positive Ramping Alpha
#ifndef APPCONF_FLOAT_BIKE_RAMP_ALPHA_POS
#define APPCONF_FLOAT_BIKE_RAMP_ALPHA_POS 0.003
#endif

// Negative Ramping Alpha
#ifndef APPCONF_FLOAT_BIKE_RAMP_ALPHA_NEG
#define APPCONF_FLOAT_BIKE_RAMP_ALPHA_NEG 0.02
#endif

// Self-Balancing Inputs
#ifndef BIKE_BALANCE_INPUTS
#define BIKE_BALANCE_INPUTS 0
#endif

// Button Debounce Threshold
#ifndef BIKE_BUTTON_DEBOUNCE_THRESHOLD
#define BIKE_BUTTON_DEBOUNCE_THRESHOLD 20
#endif

// Throttle Threshold
#ifndef BIKE_THROTTLE_THRESHOLD
#define BIKE_THROTTLE_THRESHOLD 0.1
#endif

// Startup Ramp Angle
#ifndef APPCONF_FLOAT_STARTUP_RAMP_ANGLE
#define APPCONF_FLOAT_STARTUP_RAMP_ANGLE 5
#endif

// CONF_DEFAULT_H_
#endif

