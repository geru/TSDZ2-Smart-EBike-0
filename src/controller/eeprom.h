/*
 * TongSheng TSDZ2 motor controller firmware/
 *
 * Copyright (C) Casainho and Leon, 2019.
 *
 * Released under the GPL License, Version 3
 */

#ifndef _EEPROM_H_
#define _EEPROM_H_

#include "main.h"

#define EEPROM_BASE_ADDRESS                                 0x4000

#define ADDRESS_KEY                                     0 + EEPROM_BASE_ADDRESS
//define ADDRESS_MOTOR_POWER_X10                         1 + EEPROM_BASE_ADDRESS // NOT USED
#define ADDRESS_BATTERY_CURRENT_MAX                     1 + EEPROM_BASE_ADDRESS
#define ADDRESS_BATTERY_LOW_VOLTAGE_CUT_OFF_X10_0       2 + EEPROM_BASE_ADDRESS
#define ADDRESS_BATTERY_LOW_VOLTAGE_CUT_OFF_X10_1       3 + EEPROM_BASE_ADDRESS
#define ADDRESS_WHEEL_PERIMETER_0                       4 + EEPROM_BASE_ADDRESS
#define ADDRESS_WHEEL_PERIMETER_1                       5 + EEPROM_BASE_ADDRESS
#define ADDRESS_WHEEL_SPEED_MAX							6 + EEPROM_BASE_ADDRESS
#define ADDRESS_MOTOR_TYPE                              7 + EEPROM_BASE_ADDRESS
#define ADDRESS_PEDAL_TORQUE_PER_10_BIT_ADC_STEP_X100   8 + EEPROM_BASE_ADDRESS
//#define EEPROM_BYTES_STORED                             9

// for oem display
#define ADDRESS_ODOMETER_COMPENSATION					EEPROM_BASE_ADDRESS + 10
#define ADDRESS_BATTERY_SOC								EEPROM_BASE_ADDRESS + 11																
#define ADDRESS_SET_PARAMETER_ON_STARTUP				EEPROM_BASE_ADDRESS + 12
#define ADDRESS_STREET_MODE_ON_STARTUP					EEPROM_BASE_ADDRESS + 13
#define ADDRESS_RIDING_MODE_ON_STARTUP					EEPROM_BASE_ADDRESS + 14
#define ADDRESS_LIGHTS_CONFIGURATION_ON_STARTUP			EEPROM_BASE_ADDRESS + 15
#define ADDRESS_CADENCE_SENSOR_MODE_ON_STARTUP			EEPROM_BASE_ADDRESS + 16
#define ADDRESS_CADENCE_SENSOR_PULSE_HIGH_PER_X10_0		EEPROM_BASE_ADDRESS + 17
#define ADDRESS_CADENCE_SENSOR_PULSE_HIGH_PER_X10_1		EEPROM_BASE_ADDRESS + 18
#define EEPROM_BYTES_STORED                             19
#define EEPROM_BYTES_STORED_OEM_DISPLAY					9
#define EEPROM_BYTES_INIT_OEM_DISPLAY					EEPROM_BYTES_STORED - EEPROM_BYTES_STORED_OEM_DISPLAY


// system
#define DEFAULT_VALUE_KEY     204
#define SET_TO_DEFAULT        0
#define READ_FROM_MEMORY      1
#define WRITE_TO_MEMORY       2
#define RESERVED_VALUE		  0


void EEPROM_init(void);
//void EEPROM_controller(uint8_t ui8_operation);
void EEPROM_controller(uint8_t ui8_operation, uint8_t ui8_byte_init);

#endif /* _EEPROM_H_ */
