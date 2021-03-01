//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_H
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_H


//----------------------------------------
//-- Message OPTICAL_FLOW_RAD
//----------------------------------------

// fields are ordered, as they are on the wire
FASTMAVLINK_PACK(
typedef struct _fmav_optical_flow_rad_t {
    uint64_t time_usec;
    uint32_t integration_time_us;
    float integrated_x;
    float integrated_y;
    float integrated_xgyro;
    float integrated_ygyro;
    float integrated_zgyro;
    uint32_t time_delta_distance_us;
    float distance;
    int16_t temperature;
    uint8_t sensor_id;
    uint8_t quality;
}) fmav_optical_flow_rad_t;


#define FASTMAVLINK_MSG_ID_OPTICAL_FLOW_RAD  106

#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_PAYLOAD_LEN_MIN  44
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_PAYLOAD_LEN_MAX  44
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_CRCEXTRA  138

#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_FLAGS  0
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_TARGET_SYSTEM_OFS  0
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_TARGET_COMPONENT_OFS  0

#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_FRAME_LEN_MAX  69



#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_FIELD_TIME_USEC_OFS  0
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_FIELD_INTEGRATION_TIME_US_OFS  8
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_FIELD_INTEGRATED_X_OFS  12
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_FIELD_INTEGRATED_Y_OFS  16
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_FIELD_INTEGRATED_XGYRO_OFS  20
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_FIELD_INTEGRATED_YGYRO_OFS  24
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_FIELD_INTEGRATED_ZGYRO_OFS  28
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_FIELD_TIME_DELTA_DISTANCE_US_OFS  32
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_FIELD_DISTANCE_OFS  36
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_FIELD_TEMPERATURE_OFS  40
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_FIELD_SENSOR_ID_OFS  42
#define FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_FIELD_QUALITY_OFS  43


//----------------------------------------
//-- Message OPTICAL_FLOW_RAD packing routines, for sending
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_optical_flow_rad_pack(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    uint64_t time_usec, uint8_t sensor_id, uint32_t integration_time_us, float integrated_x, float integrated_y, float integrated_xgyro, float integrated_ygyro, float integrated_zgyro, int16_t temperature, uint8_t quality, uint32_t time_delta_distance_us, float distance,
    fmav_status_t* _status)
{
    fmav_optical_flow_rad_t* _payload = (fmav_optical_flow_rad_t*)msg->payload;

    _payload->time_usec = time_usec;
    _payload->integration_time_us = integration_time_us;
    _payload->integrated_x = integrated_x;
    _payload->integrated_y = integrated_y;
    _payload->integrated_xgyro = integrated_xgyro;
    _payload->integrated_ygyro = integrated_ygyro;
    _payload->integrated_zgyro = integrated_zgyro;
    _payload->time_delta_distance_us = time_delta_distance_us;
    _payload->distance = distance;
    _payload->temperature = temperature;
    _payload->sensor_id = sensor_id;
    _payload->quality = quality;


    msg->sysid = sysid;
    msg->compid = compid;
    msg->msgid = FASTMAVLINK_MSG_ID_OPTICAL_FLOW_RAD;

    msg->target_sysid = 0;
    msg->target_compid = 0;
    msg->crc_extra = FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_CRCEXTRA;

    return fmav_finalize_msg(
        msg,
        FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_PAYLOAD_LEN_MAX,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_optical_flow_rad_encode(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    const fmav_optical_flow_rad_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_optical_flow_rad_pack(
        msg, sysid, compid,
        _payload->time_usec, _payload->sensor_id, _payload->integration_time_us, _payload->integrated_x, _payload->integrated_y, _payload->integrated_xgyro, _payload->integrated_ygyro, _payload->integrated_zgyro, _payload->temperature, _payload->quality, _payload->time_delta_distance_us, _payload->distance,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_optical_flow_rad_pack_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    uint64_t time_usec, uint8_t sensor_id, uint32_t integration_time_us, float integrated_x, float integrated_y, float integrated_xgyro, float integrated_ygyro, float integrated_zgyro, int16_t temperature, uint8_t quality, uint32_t time_delta_distance_us, float distance,
    fmav_status_t* _status)
{
    fmav_optical_flow_rad_t* _payload = (fmav_optical_flow_rad_t*)(&buf[FASTMAVLINK_HEADER_V2_LEN]);

    _payload->time_usec = time_usec;
    _payload->integration_time_us = integration_time_us;
    _payload->integrated_x = integrated_x;
    _payload->integrated_y = integrated_y;
    _payload->integrated_xgyro = integrated_xgyro;
    _payload->integrated_ygyro = integrated_ygyro;
    _payload->integrated_zgyro = integrated_zgyro;
    _payload->time_delta_distance_us = time_delta_distance_us;
    _payload->distance = distance;
    _payload->temperature = temperature;
    _payload->sensor_id = sensor_id;
    _payload->quality = quality;


    buf[5] = sysid;
    buf[6] = compid;
    buf[7] = (uint8_t)FASTMAVLINK_MSG_ID_OPTICAL_FLOW_RAD;
    buf[8] = ((uint32_t)FASTMAVLINK_MSG_ID_OPTICAL_FLOW_RAD >> 8);
    buf[9] = ((uint32_t)FASTMAVLINK_MSG_ID_OPTICAL_FLOW_RAD >> 16);

    return fmav_finalize_frame_buf(
        buf,
        FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_CRCEXTRA,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_optical_flow_rad_encode_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    const fmav_optical_flow_rad_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_optical_flow_rad_pack_to_frame_buf(
        buf, sysid, compid,
        _payload->time_usec, _payload->sensor_id, _payload->integration_time_us, _payload->integrated_x, _payload->integrated_y, _payload->integrated_xgyro, _payload->integrated_ygyro, _payload->integrated_zgyro, _payload->temperature, _payload->quality, _payload->time_delta_distance_us, _payload->distance,
        _status);
}


#ifdef FASTMAVLINK_SERIAL_WRITE_CHAR

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_optical_flow_rad_pack_to_serial(
    uint8_t sysid,
    uint8_t compid,
    uint64_t time_usec, uint8_t sensor_id, uint32_t integration_time_us, float integrated_x, float integrated_y, float integrated_xgyro, float integrated_ygyro, float integrated_zgyro, int16_t temperature, uint8_t quality, uint32_t time_delta_distance_us, float distance,
    fmav_status_t* _status)
{
    fmav_optical_flow_rad_t _payload;

    _payload.time_usec = time_usec;
    _payload.integration_time_us = integration_time_us;
    _payload.integrated_x = integrated_x;
    _payload.integrated_y = integrated_y;
    _payload.integrated_xgyro = integrated_xgyro;
    _payload.integrated_ygyro = integrated_ygyro;
    _payload.integrated_zgyro = integrated_zgyro;
    _payload.time_delta_distance_us = time_delta_distance_us;
    _payload.distance = distance;
    _payload.temperature = temperature;
    _payload.sensor_id = sensor_id;
    _payload.quality = quality;


    return fmav_finalize_serial(
        sysid,
        compid,
        (uint8_t*)&_payload,
        FASTMAVLINK_MSG_ID_OPTICAL_FLOW_RAD,
        FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_CRCEXTRA,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_optical_flow_rad_encode_to_serial(
    uint8_t sysid,
    uint8_t compid,
    const fmav_optical_flow_rad_t* _payload,
    fmav_status_t* _status)
{
    return fmav_finalize_serial(
        sysid,
        compid,
        (uint8_t*)_payload,
        FASTMAVLINK_MSG_ID_OPTICAL_FLOW_RAD,
        FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_CRCEXTRA,
        _status);
}
#endif


//----------------------------------------
//-- Message OPTICAL_FLOW_RAD unpacking routines, for receiving
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR void fmav_msg_optical_flow_rad_decode(fmav_optical_flow_rad_t* payload, const fmav_message_t* msg)
{
    uint8_t len = (msg->len < FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_PAYLOAD_LEN_MAX) ? msg->len : FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_PAYLOAD_LEN_MAX;

    memset(payload, 0, FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_PAYLOAD_LEN_MAX);
    memcpy(payload, msg->payload, len);
}


FASTMAVLINK_FUNCTION_DECORATOR uint64_t fmav_msg_optical_flow_rad_get_field_time_usec(const fmav_message_t* msg)
{
    uint64_t r; 
    memcpy(&r, &(msg->payload[0]), sizeof(uint64_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR uint32_t fmav_msg_optical_flow_rad_get_field_integration_time_us(const fmav_message_t* msg)
{
    uint32_t r; 
    memcpy(&r, &(msg->payload[8]), sizeof(uint32_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_optical_flow_rad_get_field_integrated_x(const fmav_message_t* msg)
{
    float r; 
    memcpy(&r, &(msg->payload[12]), sizeof(float)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_optical_flow_rad_get_field_integrated_y(const fmav_message_t* msg)
{
    float r; 
    memcpy(&r, &(msg->payload[16]), sizeof(float)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_optical_flow_rad_get_field_integrated_xgyro(const fmav_message_t* msg)
{
    float r; 
    memcpy(&r, &(msg->payload[20]), sizeof(float)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_optical_flow_rad_get_field_integrated_ygyro(const fmav_message_t* msg)
{
    float r; 
    memcpy(&r, &(msg->payload[24]), sizeof(float)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_optical_flow_rad_get_field_integrated_zgyro(const fmav_message_t* msg)
{
    float r; 
    memcpy(&r, &(msg->payload[28]), sizeof(float)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR uint32_t fmav_msg_optical_flow_rad_get_field_time_delta_distance_us(const fmav_message_t* msg)
{
    uint32_t r; 
    memcpy(&r, &(msg->payload[32]), sizeof(uint32_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_optical_flow_rad_get_field_distance(const fmav_message_t* msg)
{
    float r; 
    memcpy(&r, &(msg->payload[36]), sizeof(float)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_optical_flow_rad_get_field_temperature(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[40]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR uint8_t fmav_msg_optical_flow_rad_get_field_sensor_id(const fmav_message_t* msg)
{
    uint8_t r; 
    memcpy(&r, &(msg->payload[42]), sizeof(uint8_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR uint8_t fmav_msg_optical_flow_rad_get_field_quality(const fmav_message_t* msg)
{
    uint8_t r; 
    memcpy(&r, &(msg->payload[43]), sizeof(uint8_t)); 
    return r;     
}





//----------------------------------------
//-- Pymavlink wrappers
//----------------------------------------
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED

#define MAVLINK_MSG_ID_OPTICAL_FLOW_RAD  106

#define mavlink_optical_flow_rad_t  fmav_optical_flow_rad_t

#define MAVLINK_MSG_ID_OPTICAL_FLOW_RAD_LEN  44
#define MAVLINK_MSG_ID_OPTICAL_FLOW_RAD_MIN_LEN  44
#define MAVLINK_MSG_ID_106_LEN  44
#define MAVLINK_MSG_ID_106_MIN_LEN  44

#define MAVLINK_MSG_ID_OPTICAL_FLOW_RAD_CRC  138
#define MAVLINK_MSG_ID_106_CRC  138




#if MAVLINK_COMM_NUM_BUFFERS > 0

FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_optical_flow_rad_pack(
    uint8_t sysid,
    uint8_t compid,
    mavlink_message_t* msg,
    uint64_t time_usec, uint8_t sensor_id, uint32_t integration_time_us, float integrated_x, float integrated_y, float integrated_xgyro, float integrated_ygyro, float integrated_zgyro, int16_t temperature, uint8_t quality, uint32_t time_delta_distance_us, float distance)
{
    fmav_status_t* _status = mavlink_get_channel_status(MAVLINK_COMM_0);
    return fmav_msg_optical_flow_rad_pack(
        msg, sysid, compid,
        time_usec, sensor_id, integration_time_us, integrated_x, integrated_y, integrated_xgyro, integrated_ygyro, integrated_zgyro, temperature, quality, time_delta_distance_us, distance,
        _status);
}

#endif


FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_optical_flow_rad_pack_txbuf(
    char* buf,
    fmav_status_t* _status,
    uint8_t sysid,
    uint8_t compid,
    uint64_t time_usec, uint8_t sensor_id, uint32_t integration_time_us, float integrated_x, float integrated_y, float integrated_xgyro, float integrated_ygyro, float integrated_zgyro, int16_t temperature, uint8_t quality, uint32_t time_delta_distance_us, float distance)
{
    return fmav_msg_optical_flow_rad_pack_to_frame_buf(
        (uint8_t*)buf,
        sysid,
        compid,
        time_usec, sensor_id, integration_time_us, integrated_x, integrated_y, integrated_xgyro, integrated_ygyro, integrated_zgyro, temperature, quality, time_delta_distance_us, distance,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR void mavlink_msg_optical_flow_rad_decode(const mavlink_message_t* msg, mavlink_optical_flow_rad_t* payload)
{
    fmav_msg_optical_flow_rad_decode(payload, msg);
}

#endif // FASTMAVLINK_PYMAVLINK_ENABLED


#endif // FASTMAVLINK_MSG_OPTICAL_FLOW_RAD_H
