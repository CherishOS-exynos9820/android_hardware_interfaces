/*
 * Copyright (C) 2022 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * DO NOT EDIT MANUALLY!!!
 *
 * Generated by tools/generate_annotation_enums.py.
 */

#ifndef android_hardware_automotive_vehicle_aidl_generated_lib_AccessForVehicleProperty_H_
#define android_hardware_automotive_vehicle_aidl_generated_lib_AccessForVehicleProperty_H_

#include <aidl/android/hardware/automotive/vehicle/VehicleProperty.h>
#include <aidl/android/hardware/automotive/vehicle/VehiclePropertyAccess.h>

#include <unordered_map>

namespace aidl {
namespace android {
namespace hardware {
namespace automotive {
namespace vehicle {

std::unordered_map<VehicleProperty, VehiclePropertyAccess> AccessForVehicleProperty = {
        {VehicleProperty::INFO_VIN, VehiclePropertyAccess::READ},
        {VehicleProperty::INFO_MAKE, VehiclePropertyAccess::READ},
        {VehicleProperty::INFO_MODEL, VehiclePropertyAccess::READ},
        {VehicleProperty::INFO_MODEL_YEAR, VehiclePropertyAccess::READ},
        {VehicleProperty::INFO_FUEL_CAPACITY, VehiclePropertyAccess::READ},
        {VehicleProperty::INFO_FUEL_TYPE, VehiclePropertyAccess::READ},
        {VehicleProperty::INFO_EV_BATTERY_CAPACITY, VehiclePropertyAccess::READ},
        {VehicleProperty::INFO_EV_CONNECTOR_TYPE, VehiclePropertyAccess::READ},
        {VehicleProperty::INFO_FUEL_DOOR_LOCATION, VehiclePropertyAccess::READ},
        {VehicleProperty::INFO_EV_PORT_LOCATION, VehiclePropertyAccess::READ},
        {VehicleProperty::INFO_DRIVER_SEAT, VehiclePropertyAccess::READ},
        {VehicleProperty::INFO_EXTERIOR_DIMENSIONS, VehiclePropertyAccess::READ},
        {VehicleProperty::INFO_MULTI_EV_PORT_LOCATIONS, VehiclePropertyAccess::READ},
        {VehicleProperty::PERF_ODOMETER, VehiclePropertyAccess::READ},
        {VehicleProperty::PERF_VEHICLE_SPEED, VehiclePropertyAccess::READ},
        {VehicleProperty::PERF_VEHICLE_SPEED_DISPLAY, VehiclePropertyAccess::READ},
        {VehicleProperty::PERF_STEERING_ANGLE, VehiclePropertyAccess::READ},
        {VehicleProperty::PERF_REAR_STEERING_ANGLE, VehiclePropertyAccess::READ},
        {VehicleProperty::ENGINE_COOLANT_TEMP, VehiclePropertyAccess::READ},
        {VehicleProperty::ENGINE_OIL_LEVEL, VehiclePropertyAccess::READ},
        {VehicleProperty::ENGINE_OIL_TEMP, VehiclePropertyAccess::READ},
        {VehicleProperty::ENGINE_RPM, VehiclePropertyAccess::READ},
        {VehicleProperty::WHEEL_TICK, VehiclePropertyAccess::READ},
        {VehicleProperty::FUEL_LEVEL, VehiclePropertyAccess::READ},
        {VehicleProperty::FUEL_DOOR_OPEN, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::EV_BATTERY_LEVEL, VehiclePropertyAccess::READ},
        {VehicleProperty::EV_CHARGE_PORT_OPEN, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::EV_CHARGE_PORT_CONNECTED, VehiclePropertyAccess::READ},
        {VehicleProperty::EV_BATTERY_INSTANTANEOUS_CHARGE_RATE, VehiclePropertyAccess::READ},
        {VehicleProperty::RANGE_REMAINING, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::TIRE_PRESSURE, VehiclePropertyAccess::READ},
        {VehicleProperty::CRITICALLY_LOW_TIRE_PRESSURE, VehiclePropertyAccess::READ},
        {VehicleProperty::GEAR_SELECTION, VehiclePropertyAccess::READ},
        {VehicleProperty::CURRENT_GEAR, VehiclePropertyAccess::READ},
        {VehicleProperty::PARKING_BRAKE_ON, VehiclePropertyAccess::READ},
        {VehicleProperty::PARKING_BRAKE_AUTO_APPLY, VehiclePropertyAccess::READ},
        {VehicleProperty::FUEL_LEVEL_LOW, VehiclePropertyAccess::READ},
        {VehicleProperty::NIGHT_MODE, VehiclePropertyAccess::READ},
        {VehicleProperty::TURN_SIGNAL_STATE, VehiclePropertyAccess::READ},
        {VehicleProperty::IGNITION_STATE, VehiclePropertyAccess::READ},
        {VehicleProperty::ABS_ACTIVE, VehiclePropertyAccess::READ},
        {VehicleProperty::TRACTION_CONTROL_ACTIVE, VehiclePropertyAccess::READ},
        {VehicleProperty::HVAC_FAN_SPEED, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_FAN_DIRECTION, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_TEMPERATURE_CURRENT, VehiclePropertyAccess::READ},
        {VehicleProperty::HVAC_TEMPERATURE_SET, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_DEFROSTER, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_AC_ON, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_MAX_AC_ON, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_MAX_DEFROST_ON, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_RECIRC_ON, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_DUAL_ON, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_AUTO_ON, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_SEAT_TEMPERATURE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_SIDE_MIRROR_HEAT, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_STEERING_WHEEL_HEAT, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_TEMPERATURE_DISPLAY_UNITS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_ACTUAL_FAN_SPEED_RPM, VehiclePropertyAccess::READ},
        {VehicleProperty::HVAC_POWER_ON, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_FAN_DIRECTION_AVAILABLE, VehiclePropertyAccess::READ},
        {VehicleProperty::HVAC_AUTO_RECIRC_ON, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_SEAT_VENTILATION, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_ELECTRIC_DEFROSTER_ON, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HVAC_TEMPERATURE_VALUE_SUGGESTION, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::DISTANCE_DISPLAY_UNITS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::FUEL_VOLUME_DISPLAY_UNITS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::TIRE_PRESSURE_DISPLAY_UNITS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::EV_BATTERY_DISPLAY_UNITS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::FUEL_CONSUMPTION_UNITS_DISTANCE_OVER_VOLUME, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::VEHICLE_SPEED_DISPLAY_UNITS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::EXTERNAL_CAR_TIME, VehiclePropertyAccess::READ},
        {VehicleProperty::ANDROID_EPOCH_TIME, VehiclePropertyAccess::WRITE},
        {VehicleProperty::STORAGE_ENCRYPTION_BINDING_SEED, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::ENV_OUTSIDE_TEMPERATURE, VehiclePropertyAccess::READ},
        {VehicleProperty::AP_POWER_STATE_REQ, VehiclePropertyAccess::READ},
        {VehicleProperty::AP_POWER_STATE_REPORT, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::AP_POWER_BOOTUP_REASON, VehiclePropertyAccess::READ},
        {VehicleProperty::DISPLAY_BRIGHTNESS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HW_KEY_INPUT, VehiclePropertyAccess::READ},
        {VehicleProperty::HW_ROTARY_INPUT, VehiclePropertyAccess::READ},
        {VehicleProperty::HW_CUSTOM_INPUT, VehiclePropertyAccess::READ},
        {VehicleProperty::DOOR_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::DOOR_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::DOOR_LOCK, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::DOOR_CHILD_LOCK_ENABLED, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::MIRROR_Z_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::MIRROR_Z_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::MIRROR_Y_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::MIRROR_Y_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::MIRROR_LOCK, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::MIRROR_FOLD, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_MEMORY_SELECT, VehiclePropertyAccess::WRITE},
        {VehicleProperty::SEAT_MEMORY_SET, VehiclePropertyAccess::WRITE},
        {VehicleProperty::SEAT_BELT_BUCKLED, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_BELT_HEIGHT_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_BELT_HEIGHT_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_FORE_AFT_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_FORE_AFT_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_BACKREST_ANGLE_1_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_BACKREST_ANGLE_1_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_BACKREST_ANGLE_2_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_BACKREST_ANGLE_2_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_HEIGHT_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_HEIGHT_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_DEPTH_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_DEPTH_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_TILT_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_TILT_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_LUMBAR_FORE_AFT_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_LUMBAR_FORE_AFT_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_LUMBAR_SIDE_SUPPORT_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_LUMBAR_SIDE_SUPPORT_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_HEADREST_HEIGHT_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_HEADREST_HEIGHT_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_HEADREST_ANGLE_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_HEADREST_ANGLE_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_HEADREST_FORE_AFT_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_HEADREST_FORE_AFT_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SEAT_OCCUPANCY, VehiclePropertyAccess::READ},
        {VehicleProperty::WINDOW_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::WINDOW_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::WINDOW_LOCK, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::STEERING_WHEEL_DEPTH_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::STEERING_WHEEL_DEPTH_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::STEERING_WHEEL_HEIGHT_POS, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::STEERING_WHEEL_HEIGHT_MOVE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::STEERING_WHEEL_THEFT_LOCK_ENABLED, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::STEERING_WHEEL_LOCKED, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::VEHICLE_MAP_SERVICE, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::OBD2_LIVE_FRAME, VehiclePropertyAccess::READ},
        {VehicleProperty::OBD2_FREEZE_FRAME, VehiclePropertyAccess::READ},
        {VehicleProperty::OBD2_FREEZE_FRAME_INFO, VehiclePropertyAccess::READ},
        {VehicleProperty::OBD2_FREEZE_FRAME_CLEAR, VehiclePropertyAccess::WRITE},
        {VehicleProperty::HEADLIGHTS_STATE, VehiclePropertyAccess::READ},
        {VehicleProperty::HIGH_BEAM_LIGHTS_STATE, VehiclePropertyAccess::READ},
        {VehicleProperty::FOG_LIGHTS_STATE, VehiclePropertyAccess::READ},
        {VehicleProperty::HAZARD_LIGHTS_STATE, VehiclePropertyAccess::READ},
        {VehicleProperty::HEADLIGHTS_SWITCH, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HIGH_BEAM_LIGHTS_SWITCH, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::FOG_LIGHTS_SWITCH, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::HAZARD_LIGHTS_SWITCH, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::CABIN_LIGHTS_STATE, VehiclePropertyAccess::READ},
        {VehicleProperty::CABIN_LIGHTS_SWITCH, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::READING_LIGHTS_STATE, VehiclePropertyAccess::READ},
        {VehicleProperty::READING_LIGHTS_SWITCH, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SUPPORT_CUSTOMIZE_VENDOR_PERMISSION, VehiclePropertyAccess::READ},
        {VehicleProperty::DISABLED_OPTIONAL_FEATURES, VehiclePropertyAccess::READ},
        {VehicleProperty::INITIAL_USER_INFO, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::SWITCH_USER, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::CREATE_USER, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::REMOVE_USER, VehiclePropertyAccess::WRITE},
        {VehicleProperty::USER_IDENTIFICATION_ASSOCIATION, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::EVS_SERVICE_REQUEST, VehiclePropertyAccess::READ},
        {VehicleProperty::POWER_POLICY_REQ, VehiclePropertyAccess::READ},
        {VehicleProperty::POWER_POLICY_GROUP_REQ, VehiclePropertyAccess::READ},
        {VehicleProperty::CURRENT_POWER_POLICY, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::WATCHDOG_ALIVE, VehiclePropertyAccess::WRITE},
        {VehicleProperty::WATCHDOG_TERMINATED_PROCESS, VehiclePropertyAccess::WRITE},
        {VehicleProperty::VHAL_HEARTBEAT, VehiclePropertyAccess::READ},
        {VehicleProperty::CLUSTER_SWITCH_UI, VehiclePropertyAccess::READ},
        {VehicleProperty::CLUSTER_DISPLAY_STATE, VehiclePropertyAccess::READ},
        {VehicleProperty::CLUSTER_REPORT_STATE, VehiclePropertyAccess::WRITE},
        {VehicleProperty::CLUSTER_REQUEST_DISPLAY, VehiclePropertyAccess::WRITE},
        {VehicleProperty::CLUSTER_NAVIGATION_STATE, VehiclePropertyAccess::WRITE},
        {VehicleProperty::ELECTRONIC_TOLL_COLLECTION_CARD_TYPE, VehiclePropertyAccess::READ},
        {VehicleProperty::ELECTRONIC_TOLL_COLLECTION_CARD_STATUS, VehiclePropertyAccess::READ},
        {VehicleProperty::FRONT_FOG_LIGHTS_STATE, VehiclePropertyAccess::READ},
        {VehicleProperty::FRONT_FOG_LIGHTS_SWITCH, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::REAR_FOG_LIGHTS_STATE, VehiclePropertyAccess::READ},
        {VehicleProperty::REAR_FOG_LIGHTS_SWITCH, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::EV_CHARGE_CURRENT_DRAW_LIMIT, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::EV_CHARGE_PERCENT_LIMIT, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::EV_CHARGE_STATE, VehiclePropertyAccess::READ},
        {VehicleProperty::EV_CHARGE_SWITCH, VehiclePropertyAccess::READ_WRITE},
        {VehicleProperty::EV_CHARGE_TIME_REMAINING, VehiclePropertyAccess::READ},
        {VehicleProperty::EV_REGENERATIVE_BRAKING_STATE, VehiclePropertyAccess::READ},
        {VehicleProperty::TRAILER_PRESENT, VehiclePropertyAccess::READ},
        {VehicleProperty::VEHICLE_CURB_WEIGHT, VehiclePropertyAccess::READ},
        {VehicleProperty::GENERAL_SAFETY_REGULATION_COMPLIANCE_REQUIREMENT, VehiclePropertyAccess::READ},
        {VehicleProperty::SUPPORTED_PROPERTY_IDS, VehiclePropertyAccess::READ},
};

}  // namespace vehicle
}  // namespace automotive
}  // namespace hardware
}  // namespace android
}  // aidl

#endif  // android_hardware_automotive_vehicle_aidl_generated_lib_AccessForVehicleProperty_H_