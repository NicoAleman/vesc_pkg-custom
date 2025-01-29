// This file is autogenerated by VESC Tool

#include <string.h>
#include "buffer.h"
#include "conf_general.h"
#include "confparser.h"

int32_t confparser_serialize_float_config(uint8_t *buffer, const float_config *conf) {
	int32_t ind = 0;

	buffer_append_uint32(buffer, FLOAT_CONFIG_SIGNATURE, &ind);

	buffer_append_float16(buffer, conf->kp, 10, &ind);
	buffer_append_float16(buffer, conf->kp2, 100, &ind);
	buffer_append_float16(buffer, conf->ki, 100000, &ind);
	buffer_append_float16(buffer, conf->mahony_kp, 100, &ind);
	buffer_append_float16(buffer, conf->kp_brake, 10, &ind);
	buffer_append_float16(buffer, conf->kp2_brake, 10, &ind);
	buffer_append_uint16(buffer, conf->hertz, &ind);
	buffer_append_float16(buffer, conf->fault_pitch, 10, &ind);
	buffer_append_float16(buffer, conf->fault_roll, 10, &ind);
	buffer_append_float16(buffer, conf->fault_adc1, 1000, &ind);
	buffer[ind++] = conf->is_footbeep_enabled;
	buffer_append_uint16(buffer, conf->fault_delay_pitch, &ind);
	buffer_append_uint16(buffer, conf->fault_delay_roll, &ind);
	buffer_append_uint16(buffer, conf->fault_delay_switch_half, &ind);
	buffer_append_uint16(buffer, conf->fault_delay_switch_full, &ind);
	buffer_append_uint16(buffer, conf->fault_adc_half_erpm, &ind);
	buffer[ind++] = conf->fault_is_dual_switch;
	buffer[ind++] = conf->fault_moving_fault_disabled;
	buffer[ind++] = conf->fault_darkride_enabled;
	buffer[ind++] = conf->fault_reversestop_enabled;
	buffer_append_float16(buffer, conf->tiltback_duty_angle, 100, &ind);
	buffer_append_float16(buffer, conf->tiltback_duty_speed, 100, &ind);
	buffer_append_float16(buffer, conf->tiltback_duty, 1000, &ind);
	buffer[ind++] = conf->is_dutybeep_enabled;
	buffer_append_float16(buffer, conf->surge_angle, 100, &ind);
	buffer_append_float16(buffer, conf->surge_duty_start, 1000, &ind);
	buffer[ind++] = conf->is_surgebeep_enabled;
	buffer_append_float16(buffer, conf->tiltback_hv_angle, 100, &ind);
	buffer_append_float16(buffer, conf->tiltback_hv_speed, 100, &ind);
	buffer_append_float16(buffer, conf->tiltback_hv, 10, &ind);
	buffer_append_float16(buffer, conf->tiltback_lv_angle, 100, &ind);
	buffer_append_float16(buffer, conf->tiltback_lv_speed, 100, &ind);
	buffer_append_float16(buffer, conf->tiltback_lv, 10, &ind);
	buffer_append_float16(buffer, conf->tiltback_return_speed, 100, &ind);
	buffer_append_float16(buffer, conf->tiltback_constant, 1000, &ind);
	buffer_append_uint16(buffer, conf->tiltback_constant_erpm, &ind);
	buffer_append_float16(buffer, conf->tiltback_variable, 1000, &ind);
	buffer_append_float16(buffer, conf->tiltback_variable_max, 100, &ind);
	buffer_append_uint16(buffer, conf->tiltback_variable_erpm, &ind);
	buffer[ind++] = (uint8_t)conf->haptic_buzz_intensity;
	buffer[ind++] = (uint8_t)conf->haptic_buzz_min;
	buffer[ind++] = conf->haptic_buzz_duty;
	buffer[ind++] = conf->haptic_buzz_hv;
	buffer[ind++] = conf->haptic_buzz_lv;
	buffer[ind++] = conf->haptic_buzz_temp;
	buffer[ind++] = conf->haptic_buzz_current;
	buffer[ind++] = conf->haptic_buzz_bms;
	buffer_append_float16(buffer, conf->noseangling_speed, 100, &ind);
	buffer[ind++] = conf->inputtilt_remote_type;
	buffer_append_float16(buffer, conf->inputtilt_angle_limit, 100, &ind);
	buffer_append_float16(buffer, conf->inputtilt_speed, 100, &ind);
	buffer[ind++] = (uint8_t)conf->inputtilt_smoothing_factor;
	buffer[ind++] = conf->inputtilt_invert_throttle;
	buffer_append_float16(buffer, conf->inputtilt_deadband, 10000, &ind);
	buffer_append_float16(buffer, conf->remote_throttle_current_max, 10, &ind);
	buffer_append_float16(buffer, conf->remote_throttle_grace_period, 10, &ind);
	buffer_append_float16(buffer, conf->startup_pitch_tolerance, 100, &ind);
	buffer_append_float16(buffer, conf->startup_roll_tolerance, 100, &ind);
	buffer_append_float16(buffer, conf->startup_speed, 100, &ind);
	buffer[ind++] = (uint8_t)conf->startup_click_current;
	buffer[ind++] = conf->startup_simplestart_enabled;
	buffer[ind++] = conf->startup_pushstart_enabled;
	buffer[ind++] = conf->startup_dirtylandings_enabled;
	buffer_append_float16(buffer, conf->brake_current, 100, &ind);
	buffer_append_float16(buffer, conf->ki_limit, 10, &ind);
	buffer_append_float16(buffer, conf->booster_angle, 100, &ind);
	buffer_append_float16(buffer, conf->booster_ramp, 100, &ind);
	buffer_append_float16(buffer, conf->booster_current, 100, &ind);
	buffer_append_float16(buffer, conf->brkbooster_angle, 100, &ind);
	buffer_append_float16(buffer, conf->brkbooster_ramp, 100, &ind);
	buffer_append_float16(buffer, conf->brkbooster_current, 100, &ind);
	buffer_append_float16(buffer, conf->torquetilt_start_current, 100, &ind);
	buffer_append_float16(buffer, conf->torquetilt_angle_limit, 100, &ind);
	buffer_append_float16(buffer, conf->torquetilt_on_speed, 100, &ind);
	buffer_append_float16(buffer, conf->torquetilt_off_speed, 100, &ind);
	buffer_append_float16(buffer, conf->torquetilt_strength, 1000, &ind);
	buffer_append_float16(buffer, conf->torquetilt_strength_regen, 1000, &ind);
	buffer_append_float16(buffer, conf->turntilt_strength, 100, &ind);
	buffer_append_float16(buffer, conf->turntilt_angle_limit, 100, &ind);
	buffer_append_float16(buffer, conf->turntilt_start_angle, 100, &ind);
	buffer_append_uint16(buffer, conf->turntilt_start_erpm, &ind);
	buffer_append_float16(buffer, conf->turntilt_speed, 100, &ind);
	buffer_append_uint16(buffer, conf->turntilt_erpm_boost, &ind);
	buffer_append_uint16(buffer, conf->turntilt_erpm_boost_end, &ind);
	buffer[ind++] = (uint8_t)conf->turntilt_yaw_aggregate;
	buffer_append_float16(buffer, conf->atr_strength_up, 1000, &ind);
	buffer_append_float16(buffer, conf->atr_strength_down, 1000, &ind);
	buffer_append_float16(buffer, conf->atr_threshold_up, 100, &ind);
	buffer_append_float16(buffer, conf->atr_threshold_down, 100, &ind);
	buffer_append_float16(buffer, conf->atr_speed_boost, 10000, &ind);
	buffer_append_float16(buffer, conf->atr_angle_limit, 100, &ind);
	buffer_append_float16(buffer, conf->atr_on_speed, 100, &ind);
	buffer_append_float16(buffer, conf->atr_off_speed, 100, &ind);
	buffer_append_float16(buffer, conf->atr_response_boost, 1000, &ind);
	buffer_append_float16(buffer, conf->atr_transition_boost, 1000, &ind);
	buffer_append_float16(buffer, conf->atr_filter, 100, &ind);
	buffer_append_float16(buffer, conf->atr_amps_accel_ratio, 100, &ind);
	buffer_append_float16(buffer, conf->atr_amps_decel_ratio, 100, &ind);
	buffer[ind++] = (uint8_t)conf->atr_test1;
	buffer_append_float16(buffer, conf->atr_test2, 100, &ind);
	buffer_append_float16(buffer, conf->atr_test3, 100, &ind);
	buffer_append_float16(buffer, conf->braketilt_strength, 100, &ind);
	buffer_append_float16(buffer, conf->braketilt_lingering, 1000, &ind);
	buffer[ind++] = conf->led_type;
	buffer[ind++] = (uint8_t)conf->led_status_count;
	buffer[ind++] = (uint8_t)conf->led_forward_count;
	buffer[ind++] = (uint8_t)conf->led_rear_count;
	buffer[ind++] = (uint8_t)conf->led_brightness;
	buffer[ind++] = (uint8_t)conf->led_brightness_idle;
	buffer[ind++] = conf->led_mode;
	buffer[ind++] = conf->led_mode_idle;
	buffer[ind++] = (uint8_t)conf->led_status_brightness;
	buffer[ind++] = conf->led_status_mode;
	buffer_append_int16(buffer, conf->limit_current_accel, &ind);
	buffer_append_int16(buffer, conf->limit_current_brake, &ind);
	buffer_append_int16(buffer, conf->limit_current_cont, &ind);
	buffer_append_float16(buffer, conf->dark_pitch_offset, 10, &ind);
	buffer[ind++] = conf->is_beeper_enabled;
	buffer[ind++] = conf->float_disable;
	buffer_append_float16(buffer, conf->float_version, 1000, &ind);
	buffer_append_int16(buffer, conf->bike_max_current, &ind);
	buffer_append_int16(buffer, conf->bike_max_current_brake, &ind);
	buffer_append_float32_auto(buffer, conf->bike_brake_throttle_cutoff, &ind);
	buffer_append_float16(buffer, conf->ramp_alpha_pos, 10000, &ind);
	buffer_append_float16(buffer, conf->ramp_alpha_neg, 10000, &ind);
	buffer[ind++] = conf->bike_button_enabled;
	buffer[ind++] = (uint8_t)conf->bike_button_debounce_threshold;

	return ind;
}

bool confparser_deserialize_float_config(const uint8_t *buffer, float_config *conf) {
	int32_t ind = 0;

	uint32_t signature = buffer_get_uint32(buffer, &ind);
	if (signature != FLOAT_CONFIG_SIGNATURE) {
		return false;
	}

	conf->kp = buffer_get_float16(buffer, 10, &ind);
	conf->kp2 = buffer_get_float16(buffer, 100, &ind);
	conf->ki = buffer_get_float16(buffer, 100000, &ind);
	conf->mahony_kp = buffer_get_float16(buffer, 100, &ind);
	conf->kp_brake = buffer_get_float16(buffer, 10, &ind);
	conf->kp2_brake = buffer_get_float16(buffer, 10, &ind);
	conf->hertz = buffer_get_uint16(buffer, &ind);
	conf->fault_pitch = buffer_get_float16(buffer, 10, &ind);
	conf->fault_roll = buffer_get_float16(buffer, 10, &ind);
	conf->fault_adc1 = buffer_get_float16(buffer, 1000, &ind);
	conf->is_footbeep_enabled = buffer[ind++];
	conf->fault_delay_pitch = buffer_get_uint16(buffer, &ind);
	conf->fault_delay_roll = buffer_get_uint16(buffer, &ind);
	conf->fault_delay_switch_half = buffer_get_uint16(buffer, &ind);
	conf->fault_delay_switch_full = buffer_get_uint16(buffer, &ind);
	conf->fault_adc_half_erpm = buffer_get_uint16(buffer, &ind);
	conf->fault_is_dual_switch = buffer[ind++];
	conf->fault_moving_fault_disabled = buffer[ind++];
	conf->fault_darkride_enabled = buffer[ind++];
	conf->fault_reversestop_enabled = buffer[ind++];
	conf->tiltback_duty_angle = buffer_get_float16(buffer, 100, &ind);
	conf->tiltback_duty_speed = buffer_get_float16(buffer, 100, &ind);
	conf->tiltback_duty = buffer_get_float16(buffer, 1000, &ind);
	conf->is_dutybeep_enabled = buffer[ind++];
	conf->surge_angle = buffer_get_float16(buffer, 100, &ind);
	conf->surge_duty_start = buffer_get_float16(buffer, 1000, &ind);
	conf->is_surgebeep_enabled = buffer[ind++];
	conf->tiltback_hv_angle = buffer_get_float16(buffer, 100, &ind);
	conf->tiltback_hv_speed = buffer_get_float16(buffer, 100, &ind);
	conf->tiltback_hv = buffer_get_float16(buffer, 10, &ind);
	conf->tiltback_lv_angle = buffer_get_float16(buffer, 100, &ind);
	conf->tiltback_lv_speed = buffer_get_float16(buffer, 100, &ind);
	conf->tiltback_lv = buffer_get_float16(buffer, 10, &ind);
	conf->tiltback_return_speed = buffer_get_float16(buffer, 100, &ind);
	conf->tiltback_constant = buffer_get_float16(buffer, 1000, &ind);
	conf->tiltback_constant_erpm = buffer_get_uint16(buffer, &ind);
	conf->tiltback_variable = buffer_get_float16(buffer, 1000, &ind);
	conf->tiltback_variable_max = buffer_get_float16(buffer, 100, &ind);
	conf->tiltback_variable_erpm = buffer_get_uint16(buffer, &ind);
	conf->haptic_buzz_intensity = buffer[ind++];
	conf->haptic_buzz_min = buffer[ind++];
	conf->haptic_buzz_duty = buffer[ind++];
	conf->haptic_buzz_hv = buffer[ind++];
	conf->haptic_buzz_lv = buffer[ind++];
	conf->haptic_buzz_temp = buffer[ind++];
	conf->haptic_buzz_current = buffer[ind++];
	conf->haptic_buzz_bms = buffer[ind++];
	conf->noseangling_speed = buffer_get_float16(buffer, 100, &ind);
	conf->inputtilt_remote_type = buffer[ind++];
	conf->inputtilt_angle_limit = buffer_get_float16(buffer, 100, &ind);
	conf->inputtilt_speed = buffer_get_float16(buffer, 100, &ind);
	conf->inputtilt_smoothing_factor = buffer[ind++];
	conf->inputtilt_invert_throttle = buffer[ind++];
	conf->inputtilt_deadband = buffer_get_float16(buffer, 10000, &ind);
	conf->remote_throttle_current_max = buffer_get_float16(buffer, 10, &ind);
	conf->remote_throttle_grace_period = buffer_get_float16(buffer, 10, &ind);
	conf->startup_pitch_tolerance = buffer_get_float16(buffer, 100, &ind);
	conf->startup_roll_tolerance = buffer_get_float16(buffer, 100, &ind);
	conf->startup_speed = buffer_get_float16(buffer, 100, &ind);
	conf->startup_click_current = buffer[ind++];
	conf->startup_simplestart_enabled = buffer[ind++];
	conf->startup_pushstart_enabled = buffer[ind++];
	conf->startup_dirtylandings_enabled = buffer[ind++];
	conf->brake_current = buffer_get_float16(buffer, 100, &ind);
	conf->ki_limit = buffer_get_float16(buffer, 10, &ind);
	conf->booster_angle = buffer_get_float16(buffer, 100, &ind);
	conf->booster_ramp = buffer_get_float16(buffer, 100, &ind);
	conf->booster_current = buffer_get_float16(buffer, 100, &ind);
	conf->brkbooster_angle = buffer_get_float16(buffer, 100, &ind);
	conf->brkbooster_ramp = buffer_get_float16(buffer, 100, &ind);
	conf->brkbooster_current = buffer_get_float16(buffer, 100, &ind);
	conf->torquetilt_start_current = buffer_get_float16(buffer, 100, &ind);
	conf->torquetilt_angle_limit = buffer_get_float16(buffer, 100, &ind);
	conf->torquetilt_on_speed = buffer_get_float16(buffer, 100, &ind);
	conf->torquetilt_off_speed = buffer_get_float16(buffer, 100, &ind);
	conf->torquetilt_strength = buffer_get_float16(buffer, 1000, &ind);
	conf->torquetilt_strength_regen = buffer_get_float16(buffer, 1000, &ind);
	conf->turntilt_strength = buffer_get_float16(buffer, 100, &ind);
	conf->turntilt_angle_limit = buffer_get_float16(buffer, 100, &ind);
	conf->turntilt_start_angle = buffer_get_float16(buffer, 100, &ind);
	conf->turntilt_start_erpm = buffer_get_uint16(buffer, &ind);
	conf->turntilt_speed = buffer_get_float16(buffer, 100, &ind);
	conf->turntilt_erpm_boost = buffer_get_uint16(buffer, &ind);
	conf->turntilt_erpm_boost_end = buffer_get_uint16(buffer, &ind);
	conf->turntilt_yaw_aggregate = buffer[ind++];
	conf->atr_strength_up = buffer_get_float16(buffer, 1000, &ind);
	conf->atr_strength_down = buffer_get_float16(buffer, 1000, &ind);
	conf->atr_threshold_up = buffer_get_float16(buffer, 100, &ind);
	conf->atr_threshold_down = buffer_get_float16(buffer, 100, &ind);
	conf->atr_speed_boost = buffer_get_float16(buffer, 10000, &ind);
	conf->atr_angle_limit = buffer_get_float16(buffer, 100, &ind);
	conf->atr_on_speed = buffer_get_float16(buffer, 100, &ind);
	conf->atr_off_speed = buffer_get_float16(buffer, 100, &ind);
	conf->atr_response_boost = buffer_get_float16(buffer, 1000, &ind);
	conf->atr_transition_boost = buffer_get_float16(buffer, 1000, &ind);
	conf->atr_filter = buffer_get_float16(buffer, 100, &ind);
	conf->atr_amps_accel_ratio = buffer_get_float16(buffer, 100, &ind);
	conf->atr_amps_decel_ratio = buffer_get_float16(buffer, 100, &ind);
	conf->atr_test1 = buffer[ind++];
	conf->atr_test2 = buffer_get_float16(buffer, 100, &ind);
	conf->atr_test3 = buffer_get_float16(buffer, 100, &ind);
	conf->braketilt_strength = buffer_get_float16(buffer, 100, &ind);
	conf->braketilt_lingering = buffer_get_float16(buffer, 1000, &ind);
	conf->led_type = buffer[ind++];
	conf->led_status_count = buffer[ind++];
	conf->led_forward_count = buffer[ind++];
	conf->led_rear_count = buffer[ind++];
	conf->led_brightness = buffer[ind++];
	conf->led_brightness_idle = buffer[ind++];
	conf->led_mode = buffer[ind++];
	conf->led_mode_idle = buffer[ind++];
	conf->led_status_brightness = buffer[ind++];
	conf->led_status_mode = buffer[ind++];
	conf->limit_current_accel = buffer_get_int16(buffer, &ind);
	conf->limit_current_brake = buffer_get_int16(buffer, &ind);
	conf->limit_current_cont = buffer_get_int16(buffer, &ind);
	conf->dark_pitch_offset = buffer_get_float16(buffer, 10, &ind);
	conf->is_beeper_enabled = buffer[ind++];
	conf->float_disable = buffer[ind++];
	conf->float_version = buffer_get_float16(buffer, 1000, &ind);
	conf->bike_max_current = buffer_get_int16(buffer, &ind);
	conf->bike_max_current_brake = buffer_get_int16(buffer, &ind);
	conf->bike_brake_throttle_cutoff = buffer_get_float32_auto(buffer, &ind);
	conf->ramp_alpha_pos = buffer_get_float16(buffer, 10000, &ind);
	conf->ramp_alpha_neg = buffer_get_float16(buffer, 10000, &ind);
	conf->bike_button_enabled = buffer[ind++];
	conf->bike_button_debounce_threshold = buffer[ind++];

	return true;
}

void confparser_set_defaults_float_config(float_config *conf) {
	conf->kp = APPCONF_FLOAT_KP;
	conf->kp2 = APPCONF_FLOAT_KP2;
	conf->ki = APPCONF_FLOAT_KI;
	conf->mahony_kp = APPCONF_FLOAT_MAHONY_KP;
	conf->kp_brake = APPCONF_FLOAT_KP_BRAKE;
	conf->kp2_brake = APPCONF_FLOAT_KP2_BRAKE;
	conf->hertz = APPCONF_FLOAT_HERTZ;
	conf->fault_pitch = APPCONF_FLOAT_FAULT_PITCH;
	conf->fault_roll = APPCONF_FLOAT_FAULT_ROLL;
	conf->fault_adc1 = APPCONF_FLOAT_FAULT_ADC1;
	conf->is_footbeep_enabled = APPCONF_FLOAT_IS_FOOTBEEP_ENABLED;
	conf->fault_delay_pitch = APPCONF_FLOAT_FAULT_DELAY_PITCH;
	conf->fault_delay_roll = APPCONF_FLOAT_FAULT_DELAY_ROLL;
	conf->fault_delay_switch_half = APPCONF_FLOAT_FAULT_DELAY_SWITCH_HALF;
	conf->fault_delay_switch_full = APPCONF_FLOAT_FAULT_DELAY_SWITCH_FULL;
	conf->fault_adc_half_erpm = APPCONF_FLOAT_FAULT_ADC_HALF_ERPM;
	conf->fault_is_dual_switch = APPCONF_FLOAT_FAULT_IS_DUAL_SWITCH;
	conf->fault_moving_fault_disabled = APPCONF_FLOAT_FAULT_MOVING_FAULT_DISABLED;
	conf->fault_darkride_enabled = APPCONF_FLOAT_FAULT_DARKRIDE_ENABLED;
	conf->fault_reversestop_enabled = APPCONF_FLOAT_FAULT_REVERSESTOP_ENABLED;
	conf->tiltback_duty_angle = APPCONF_FLOAT_TILTBACK_DUTY_ANGLE;
	conf->tiltback_duty_speed = APPCONF_FLOAT_TILTBACK_DUTY_SPEED;
	conf->tiltback_duty = APPCONF_FLOAT_TILTBACK_DUTY;
	conf->is_dutybeep_enabled = APPCONF_FLOAT_IS_DUTYBEEP_ENABLED;
	conf->surge_angle = APPCONF_FLOAT_SURGE_ANGLE;
	conf->surge_duty_start = APPCONF_FLOAT_SURGE_DUTY_START;
	conf->is_surgebeep_enabled = APPCONF_FLOAT_IS_SURGEBEEP_ENABLED;
	conf->tiltback_hv_angle = APPCONF_FLOAT_TILTBACK_HV_ANGLE;
	conf->tiltback_hv_speed = APPCONF_FLOAT_TILTBACK_HV_SPEED;
	conf->tiltback_hv = APPCONF_FLOAT_TILTBACK_HV;
	conf->tiltback_lv_angle = APPCONF_FLOAT_TILTBACK_LV_ANGLE;
	conf->tiltback_lv_speed = APPCONF_FLOAT_TILTBACK_LV_SPEED;
	conf->tiltback_lv = APPCONF_FLOAT_TILTBACK_LV;
	conf->tiltback_return_speed = APPCONF_FLOAT_TILTBACK_RETURN_SPEED;
	conf->tiltback_constant = APPCONF_FLOAT_TILTBACK_CONSTANT;
	conf->tiltback_constant_erpm = APPCONF_FLOAT_TILTBACK_CONSTANT_ERPM;
	conf->tiltback_variable = APPCONF_FLOAT_TILTBACK_VARIABLE;
	conf->tiltback_variable_max = APPCONF_FLOAT_TILTBACK_VARIABLE_MAX;
	conf->tiltback_variable_erpm = APPCONF_FLOAT_TILTBACK_VARIABLE_ERPM;
	conf->haptic_buzz_intensity = APPCONF_FLOAT_HAPTIC_BUZZ_INTENSITY;
	conf->haptic_buzz_min = APPCONF_FLOAT_HAPTIC_BUZZ_MIN;
	conf->haptic_buzz_duty = APPCONF_FLOAT_HAPTIC_BUZZ_DUTY;
	conf->haptic_buzz_hv = APPCONF_FLOAT_HAPTIC_BUZZ_HV;
	conf->haptic_buzz_lv = APPCONF_FLOAT_HAPTIC_BUZZ_LV;
	conf->haptic_buzz_temp = APPCONF_FLOAT_HAPTIC_BUZZ_TEMP;
	conf->haptic_buzz_current = APPCONF_FLOAT_HAPTIC_BUZZ_CURRENT;
	conf->haptic_buzz_bms = APPCONF_FLOAT_HAPTIC_BUZZ_BMS;
	conf->noseangling_speed = APPCONF_FLOAT_NOSEANGLING_SPEED;
	conf->inputtilt_remote_type = APPCONF_FLOAT_INPUTTILT_REMOTE_TYPE;
	conf->inputtilt_angle_limit = APPCONF_FLOAT_INPUTTILT_ANGLE_LIMIT;
	conf->inputtilt_speed = APPCONF_FLOAT_INPUTTILT_SPEED;
	conf->inputtilt_smoothing_factor = APPCONF_FLOAT_INPUTTILT_SMOOTHING_FACTOR;
	conf->inputtilt_invert_throttle = APPCONF_FLOAT_INPUTTILT_INVERT_THROTTLE;
	conf->inputtilt_deadband = APPCONF_FLOAT_INPUTTILT_DEADBAND;
	conf->remote_throttle_current_max = APPCONF_FLOAT_REMOTE_THROTTLE_CURRENT_MAX;
	conf->remote_throttle_grace_period = APPCONF_FLOAT_REMOTE_THROTTLE_GRACE_PERIOD;
	conf->startup_pitch_tolerance = APPCONF_FLOAT_STARTUP_PITCH_TOLERANCE;
	conf->startup_roll_tolerance = APPCONF_FLOAT_STARTUP_ROLL_TOLERANCE;
	conf->startup_speed = APPCONF_FLOAT_STARTUP_SPEED;
	conf->startup_click_current = APPCONF_FLOAT_STARTUP_CLICK_CURRENT;
	conf->startup_simplestart_enabled = APPCONF_SIMPLESTART_ENABLED;
	conf->startup_pushstart_enabled = APPCONF_PUSHSTART_ENABLED;
	conf->startup_dirtylandings_enabled = APPCONF_DIRTYLANDINGS_ENABLED;
	conf->brake_current = APPCONF_FLOAT_BRAKE_CURRENT;
	conf->ki_limit = APPCONF_FLOAT_KI_LIMIT;
	conf->booster_angle = APPCONF_FLOAT_BOOSTER_ANGLE;
	conf->booster_ramp = APPCONF_FLOAT_BOOSTER_RAMP;
	conf->booster_current = APPCONF_FLOAT_BOOSTER_CURRENT;
	conf->brkbooster_angle = APPCONF_FLOAT_BRKBOOSTER_ANGLE;
	conf->brkbooster_ramp = APPCONF_FLOAT_BRKBOOSTER_RAMP;
	conf->brkbooster_current = APPCONF_FLOAT_BRKBOOSTER_CURRENT;
	conf->torquetilt_start_current = APPCONF_FLOAT_TORQUETILT_START_CURRENT;
	conf->torquetilt_angle_limit = APPCONF_FLOAT_TORQUETILT_ANGLE_LIMIT;
	conf->torquetilt_on_speed = APPCONF_FLOAT_TORQUETILT_ON_SPEED;
	conf->torquetilt_off_speed = APPCONF_FLOAT_TORQUETILT_OFF_SPEED;
	conf->torquetilt_strength = APPCONF_FLOAT_TORQUETILT_STRENGTH;
	conf->torquetilt_strength_regen = APPCONF_FLOAT_TORQUETILT_STRENGTH_REGEN;
	conf->turntilt_strength = APPCONF_FLOAT_TURNTILT_STRENGTH;
	conf->turntilt_angle_limit = APPCONF_FLOAT_TURNTILT_ANGLE_LIMIT;
	conf->turntilt_start_angle = APPCONF_FLOAT_TURNTILT_START_ANGLE;
	conf->turntilt_start_erpm = APPCONF_FLOAT_TURNTILT_START_ERPM;
	conf->turntilt_speed = APPCONF_FLOAT_TURNTILT_SPEED;
	conf->turntilt_erpm_boost = APPCONF_FLOAT_TURNTILT_ERPM_BOOST;
	conf->turntilt_erpm_boost_end = APPCONF_FLOAT_TURNTILT_ERPM_BOOST_END;
	conf->turntilt_yaw_aggregate = APPCONF_FLOAT_TURNTILT_YAW_AGGREGATE;
	conf->atr_strength_up = APPCONF_FLOAT_ATR_UPHILL_STRENGTH;
	conf->atr_strength_down = APPCONF_FLOAT_ATR_DOWNHILL_STRENGTH;
	conf->atr_threshold_up = APPCONF_FLOAT_ATR_THRESHOLD_UP;
	conf->atr_threshold_down = APPCONF_FLOAT_ATR_THRESHOLD_DOWN;
	conf->atr_speed_boost = APPCONF_FLOAT_ATR_SPEED_BOOST;
	conf->atr_angle_limit = APPCONF_FLOAT_ATR_ANGLE_LIMIT;
	conf->atr_on_speed = APPCONF_FLOAT_ATR_ON_SPEED;
	conf->atr_off_speed = APPCONF_FLOAT_ATR_OFF_SPEED;
	conf->atr_response_boost = APPCONF_FLOAT_ATR_RESPONSE_BOOST;
	conf->atr_transition_boost = APPCONF_FLOAT_ATR_TRANSITION_BOOST;
	conf->atr_filter = APPCONF_FLOAT_ATR_FILTER;
	conf->atr_amps_accel_ratio = APPCONF_FLOAT_ATR_AMPS_ACCEL_RATIO;
	conf->atr_amps_decel_ratio = APPCONF_FLOAT_ATR_AMPS_DECEL_RATIO;
	conf->atr_test1 = APPCONF_FLOAT_ATR_TEST1;
	conf->atr_test2 = APPCONF_FLOAT_ATR_TEST2;
	conf->atr_test3 = APPCONF_FLOAT_ATR_TEST3;
	conf->braketilt_strength = APPCONF_FLOAT_BRAKETILT_STRENGTH;
	conf->braketilt_lingering = APPCONF_FLOAT_BRAKETILT_LINGERING;
	conf->led_type = APPCONF_FLOAT_LED_TYPE;
	conf->led_status_count = APPCONF_FLOAT_LED_STATUS_COUNT;
	conf->led_forward_count = APPCONF_FLOAT_LED_FORWARD_COUNT;
	conf->led_rear_count = APPCONF_FLOAT_LED_REAR_COUNT;
	conf->led_brightness = APPCONF_FLOAT_LED_BRIGHTNESS;
	conf->led_brightness_idle = APPCONF_FLOAT_LED_BRIGHTNESS_IDLE;
	conf->led_mode = APPCONF_FLOAT_LED_MODE;
	conf->led_mode_idle = APPCONF_FLOAT_LED_MODE_IDLE;
	conf->led_status_brightness = APPCONF_FLOAT_LED_STATUS_BRIGHTNESS;
	conf->led_status_mode = APPCONF_FLOAT_LED_STATUS_MODE;
	conf->limit_current_accel = LIMIT_CURRENT_ACCEL;
	conf->limit_current_brake = LIMIT_CURRENT_BRAKE;
	conf->limit_current_cont = LIMIT_CURRENT_CONT;
	conf->dark_pitch_offset = APPCONF_FLOAT_DARK_PITCH_OFFSET;
	conf->is_beeper_enabled = APPCONF_FLOAT_IS_BEEPER_ENABLED;
	conf->float_disable = APPCONF_FLOAT_DISABLE;
	conf->float_version = APPCONF_FLOAT_VERSION;
	conf->bike_max_current = BIKE_MAX_CURRENT;
	conf->bike_max_current_brake = BIKE_MAX_CURRENT_BRAKE;
	conf->bike_brake_throttle_cutoff = BIKE_BRAKE_THROTTLE_CUTOFF;
	conf->ramp_alpha_pos = APPCONF_FLOAT_BIKE_RAMP_ALPHA_POS;
	conf->ramp_alpha_neg = APPCONF_FLOAT_BIKE_RAMP_ALPHA_NEG;
	conf->bike_button_enabled = BIKE_BUTTON_ENABLED;
	conf->bike_button_debounce_threshold = BIKE_BUTTON_DEBOUNCE_THRESHOLD;
}

