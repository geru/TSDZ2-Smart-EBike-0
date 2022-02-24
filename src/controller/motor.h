/*
 * TongSheng TSDZ2 motor controller firmware/
 *
 * Copyright (C) Casainho, Leon, MSpider65 2020.
 *
 * Released under the GPL License, Version 3
 */

#ifndef _MOTOR_H_
#define _MOTOR_H_

#include <stdint.h>

// motor states
#define BLOCK_COMMUTATION 			            0
#define SINEWAVE_INTERPOLATION_60_DEGREES 	    1

// power variables
extern volatile uint8_t ui8_controller_duty_cycle_ramp_up_inverse_step;
extern volatile uint8_t ui8_controller_duty_cycle_ramp_down_inverse_step;
extern volatile uint16_t ui16_adc_battery_voltage_filtered;
extern volatile uint8_t ui8_adc_battery_voltage_cut_off;
extern volatile uint8_t ui8_adc_battery_current_filtered;
extern volatile uint8_t ui8_controller_adc_battery_current_target;
extern volatile uint8_t ui8_g_duty_cycle;
extern volatile uint8_t ui8_fw_angle;
extern volatile uint8_t ui8_controller_duty_cycle_target;
extern volatile uint8_t ui8_g_foc_angle;
extern volatile uint8_t ui8_g_assist_level;

// motor erps
extern volatile uint16_t ui16_motor_speed_erps;

// brakes
extern volatile uint8_t ui8_brake_state;

// cadence sensor
extern volatile uint16_t ui16_cadence_sensor_ticks;
//extern volatile uint32_t ui32_crank_revolutions_x20;

// wheel speed sensor
extern volatile uint16_t ui16_wheel_speed_sensor_ticks;
extern volatile uint32_t ui32_wheel_speed_sensor_ticks_total;

// battery soc
extern volatile uint8_t ui8_battery_SOC_reset_flag;

// ebike control motor check
extern volatile uint16_t ui16_ebike_check_counter;

void hall_sensor_init(void); // must be called before using the motor
void motor_enable_pwm(void);
void motor_disable_pwm(void);
void motor_controller(void);

#endif /* _MOTOR_H_ */
