#include "footpad_sensor.h"

#include "vesc_c_if.h"

// // ADC Hand-Press Scale Factor (Accomdate lighter presses than what's needed for engagement by foot)
// #define ADC_HAND_PRESS_SCALE 0.8f // NOT RELEVANT FOR FLOAT BIKE

#define PB12_THRESHOLD 0.5f

// Read ADCs and determine footpad sensor state
FootpadSensorState footpad_sensor_state_evaluate(const FootpadSensor *fs, const float_config *config, bool handpress) {
	// float pb12_threshold = /* handpress ? config->fault_adc1 * ADC_HAND_PRESS_SCALE : */config->fault_adc1;

	// // Calculate sensor state from ADC values
	// if (config->fault_adc1 == 3.3) { // Disable Sensor
	// 	return FS_NONE;
	// } else if (config->fault_adc1 == 0) { // No sensors
	// 	return FS_BOTH;
	// } else { // Single sensor on ADC1
	// 	if (fs->pb12 > pb12_threshold) {
	// 		return FS_BOTH;
	// 	}
	// }

	if (config->bike_button_enabled && fs->pb12) {
		return FS_BUTTON;
	} else if ((config->bike_throttle_threshold < 1) && (fs->throttle > config->bike_throttle_threshold)) {
		return FS_THROTTLE;
	}

	return FS_NONE;
}

void footpad_sensor_update(FootpadSensor *fs, const float_config *config) {
	float raw_pb12 = VESC_IF->io_read(VESC_PIN_HW_1);
	
	// Debouncing to filter out noise in button signal
	if (raw_pb12 > PB12_THRESHOLD) {
		if (fs->debounce_counter < config->bike_button_debounce_threshold) {
			fs->debounce_counter++;
		}
	} else {
		if (fs->debounce_counter > 0) {
			fs->debounce_counter--;
		}
	}
	
	// Only update pb12 value when debounced
	fs->pb12 = (fs->debounce_counter >= config->bike_button_debounce_threshold);

	// Track processed throttle value for engaging balance with throttle
	fs->throttle = VESC_IF->process_adc(0);

	// Update ADC values as normal
	fs->adc1 = VESC_IF->io_read_analog(VESC_PIN_ADC1);
	fs->adc2 = VESC_IF->io_read_analog(VESC_PIN_ADC2);

	// Update state based on debounced values
	fs->state = footpad_sensor_state_evaluate(fs, config, false);
}

int footpad_sensor_state_to_switch_compat(FootpadSensorState v) {
	switch (v) {
	case FS_BUTTON:
		return 2;
	case FS_LEFT:
	case FS_RIGHT:
	case FS_THROTTLE:
		return 1;
	case FS_NONE:
	default:
		return 0;
	}
}
