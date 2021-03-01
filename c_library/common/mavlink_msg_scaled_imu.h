//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_MSG_SCALED_IMU_H
#define FASTMAVLINK_MSG_SCALED_IMU_H


//----------------------------------------
//-- Message SCALED_IMU
//----------------------------------------

// fields are ordered, as they are on the wire
FASTMAVLINK_PACK(
typedef struct _fmav_scaled_imu_t {
    uint32_t time_boot_ms;
    int16_t xacc;
    int16_t yacc;
    int16_t zacc;
    int16_t xgyro;
    int16_t ygyro;
    int16_t zgyro;
    int16_t xmag;
    int16_t ymag;
    int16_t zmag;
    int16_t temperature;
}) fmav_scaled_imu_t;


#define FASTMAVLINK_MSG_ID_SCALED_IMU  26

#define FASTMAVLINK_MSG_SCALED_IMU_PAYLOAD_LEN_MIN  22
#define FASTMAVLINK_MSG_SCALED_IMU_PAYLOAD_LEN_MAX  24
#define FASTMAVLINK_MSG_SCALED_IMU_CRCEXTRA  170

#define FASTMAVLINK_MSG_SCALED_IMU_FLAGS  0
#define FASTMAVLINK_MSG_SCALED_IMU_TARGET_SYSTEM_OFS  0
#define FASTMAVLINK_MSG_SCALED_IMU_TARGET_COMPONENT_OFS  0

#define FASTMAVLINK_MSG_SCALED_IMU_FRAME_LEN_MAX  49



#define FASTMAVLINK_MSG_SCALED_IMU_FIELD_TIME_BOOT_MS_OFS  0
#define FASTMAVLINK_MSG_SCALED_IMU_FIELD_XACC_OFS  4
#define FASTMAVLINK_MSG_SCALED_IMU_FIELD_YACC_OFS  6
#define FASTMAVLINK_MSG_SCALED_IMU_FIELD_ZACC_OFS  8
#define FASTMAVLINK_MSG_SCALED_IMU_FIELD_XGYRO_OFS  10
#define FASTMAVLINK_MSG_SCALED_IMU_FIELD_YGYRO_OFS  12
#define FASTMAVLINK_MSG_SCALED_IMU_FIELD_ZGYRO_OFS  14
#define FASTMAVLINK_MSG_SCALED_IMU_FIELD_XMAG_OFS  16
#define FASTMAVLINK_MSG_SCALED_IMU_FIELD_YMAG_OFS  18
#define FASTMAVLINK_MSG_SCALED_IMU_FIELD_ZMAG_OFS  20
#define FASTMAVLINK_MSG_SCALED_IMU_FIELD_TEMPERATURE_OFS  22


//----------------------------------------
//-- Message SCALED_IMU packing routines, for sending
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_scaled_imu_pack(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    uint32_t time_boot_ms, int16_t xacc, int16_t yacc, int16_t zacc, int16_t xgyro, int16_t ygyro, int16_t zgyro, int16_t xmag, int16_t ymag, int16_t zmag, int16_t temperature,
    fmav_status_t* _status)
{
    fmav_scaled_imu_t* _payload = (fmav_scaled_imu_t*)msg->payload;

    _payload->time_boot_ms = time_boot_ms;
    _payload->xacc = xacc;
    _payload->yacc = yacc;
    _payload->zacc = zacc;
    _payload->xgyro = xgyro;
    _payload->ygyro = ygyro;
    _payload->zgyro = zgyro;
    _payload->xmag = xmag;
    _payload->ymag = ymag;
    _payload->zmag = zmag;
    _payload->temperature = temperature;


    msg->sysid = sysid;
    msg->compid = compid;
    msg->msgid = FASTMAVLINK_MSG_ID_SCALED_IMU;

    msg->target_sysid = 0;
    msg->target_compid = 0;
    msg->crc_extra = FASTMAVLINK_MSG_SCALED_IMU_CRCEXTRA;

    return fmav_finalize_msg(
        msg,
        FASTMAVLINK_MSG_SCALED_IMU_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_SCALED_IMU_PAYLOAD_LEN_MAX,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_scaled_imu_encode(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    const fmav_scaled_imu_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_scaled_imu_pack(
        msg, sysid, compid,
        _payload->time_boot_ms, _payload->xacc, _payload->yacc, _payload->zacc, _payload->xgyro, _payload->ygyro, _payload->zgyro, _payload->xmag, _payload->ymag, _payload->zmag, _payload->temperature,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_scaled_imu_pack_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    uint32_t time_boot_ms, int16_t xacc, int16_t yacc, int16_t zacc, int16_t xgyro, int16_t ygyro, int16_t zgyro, int16_t xmag, int16_t ymag, int16_t zmag, int16_t temperature,
    fmav_status_t* _status)
{
    fmav_scaled_imu_t* _payload = (fmav_scaled_imu_t*)(&buf[FASTMAVLINK_HEADER_V2_LEN]);

    _payload->time_boot_ms = time_boot_ms;
    _payload->xacc = xacc;
    _payload->yacc = yacc;
    _payload->zacc = zacc;
    _payload->xgyro = xgyro;
    _payload->ygyro = ygyro;
    _payload->zgyro = zgyro;
    _payload->xmag = xmag;
    _payload->ymag = ymag;
    _payload->zmag = zmag;
    _payload->temperature = temperature;


    buf[5] = sysid;
    buf[6] = compid;
    buf[7] = (uint8_t)FASTMAVLINK_MSG_ID_SCALED_IMU;
    buf[8] = ((uint32_t)FASTMAVLINK_MSG_ID_SCALED_IMU >> 8);
    buf[9] = ((uint32_t)FASTMAVLINK_MSG_ID_SCALED_IMU >> 16);

    return fmav_finalize_frame_buf(
        buf,
        FASTMAVLINK_MSG_SCALED_IMU_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_SCALED_IMU_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_SCALED_IMU_CRCEXTRA,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_scaled_imu_encode_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    const fmav_scaled_imu_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_scaled_imu_pack_to_frame_buf(
        buf, sysid, compid,
        _payload->time_boot_ms, _payload->xacc, _payload->yacc, _payload->zacc, _payload->xgyro, _payload->ygyro, _payload->zgyro, _payload->xmag, _payload->ymag, _payload->zmag, _payload->temperature,
        _status);
}


#ifdef FASTMAVLINK_SERIAL_WRITE_CHAR

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_scaled_imu_pack_to_serial(
    uint8_t sysid,
    uint8_t compid,
    uint32_t time_boot_ms, int16_t xacc, int16_t yacc, int16_t zacc, int16_t xgyro, int16_t ygyro, int16_t zgyro, int16_t xmag, int16_t ymag, int16_t zmag, int16_t temperature,
    fmav_status_t* _status)
{
    fmav_scaled_imu_t _payload;

    _payload.time_boot_ms = time_boot_ms;
    _payload.xacc = xacc;
    _payload.yacc = yacc;
    _payload.zacc = zacc;
    _payload.xgyro = xgyro;
    _payload.ygyro = ygyro;
    _payload.zgyro = zgyro;
    _payload.xmag = xmag;
    _payload.ymag = ymag;
    _payload.zmag = zmag;
    _payload.temperature = temperature;


    return fmav_finalize_serial(
        sysid,
        compid,
        (uint8_t*)&_payload,
        FASTMAVLINK_MSG_ID_SCALED_IMU,
        FASTMAVLINK_MSG_SCALED_IMU_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_SCALED_IMU_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_SCALED_IMU_CRCEXTRA,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_scaled_imu_encode_to_serial(
    uint8_t sysid,
    uint8_t compid,
    const fmav_scaled_imu_t* _payload,
    fmav_status_t* _status)
{
    return fmav_finalize_serial(
        sysid,
        compid,
        (uint8_t*)_payload,
        FASTMAVLINK_MSG_ID_SCALED_IMU,
        FASTMAVLINK_MSG_SCALED_IMU_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_SCALED_IMU_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_SCALED_IMU_CRCEXTRA,
        _status);
}
#endif


//----------------------------------------
//-- Message SCALED_IMU unpacking routines, for receiving
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR void fmav_msg_scaled_imu_decode(fmav_scaled_imu_t* payload, const fmav_message_t* msg)
{
    uint8_t len = (msg->len < FASTMAVLINK_MSG_SCALED_IMU_PAYLOAD_LEN_MAX) ? msg->len : FASTMAVLINK_MSG_SCALED_IMU_PAYLOAD_LEN_MAX;

    memset(payload, 0, FASTMAVLINK_MSG_SCALED_IMU_PAYLOAD_LEN_MAX);
    memcpy(payload, msg->payload, len);
}


FASTMAVLINK_FUNCTION_DECORATOR uint32_t fmav_msg_scaled_imu_get_field_time_boot_ms(const fmav_message_t* msg)
{
    uint32_t r; 
    memcpy(&r, &(msg->payload[0]), sizeof(uint32_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_scaled_imu_get_field_xacc(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[4]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_scaled_imu_get_field_yacc(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[6]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_scaled_imu_get_field_zacc(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[8]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_scaled_imu_get_field_xgyro(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[10]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_scaled_imu_get_field_ygyro(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[12]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_scaled_imu_get_field_zgyro(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[14]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_scaled_imu_get_field_xmag(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[16]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_scaled_imu_get_field_ymag(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[18]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_scaled_imu_get_field_zmag(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[20]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_scaled_imu_get_field_temperature(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[22]), sizeof(int16_t)); 
    return r;     
}





//----------------------------------------
//-- Pymavlink wrappers
//----------------------------------------
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED

#define MAVLINK_MSG_ID_SCALED_IMU  26

#define mavlink_scaled_imu_t  fmav_scaled_imu_t

#define MAVLINK_MSG_ID_SCALED_IMU_LEN  24
#define MAVLINK_MSG_ID_SCALED_IMU_MIN_LEN  22
#define MAVLINK_MSG_ID_26_LEN  24
#define MAVLINK_MSG_ID_26_MIN_LEN  22

#define MAVLINK_MSG_ID_SCALED_IMU_CRC  170
#define MAVLINK_MSG_ID_26_CRC  170




#if MAVLINK_COMM_NUM_BUFFERS > 0

FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_scaled_imu_pack(
    uint8_t sysid,
    uint8_t compid,
    mavlink_message_t* msg,
    uint32_t time_boot_ms, int16_t xacc, int16_t yacc, int16_t zacc, int16_t xgyro, int16_t ygyro, int16_t zgyro, int16_t xmag, int16_t ymag, int16_t zmag, int16_t temperature)
{
    fmav_status_t* _status = mavlink_get_channel_status(MAVLINK_COMM_0);
    return fmav_msg_scaled_imu_pack(
        msg, sysid, compid,
        time_boot_ms, xacc, yacc, zacc, xgyro, ygyro, zgyro, xmag, ymag, zmag, temperature,
        _status);
}

#endif


FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_scaled_imu_pack_txbuf(
    char* buf,
    fmav_status_t* _status,
    uint8_t sysid,
    uint8_t compid,
    uint32_t time_boot_ms, int16_t xacc, int16_t yacc, int16_t zacc, int16_t xgyro, int16_t ygyro, int16_t zgyro, int16_t xmag, int16_t ymag, int16_t zmag, int16_t temperature)
{
    return fmav_msg_scaled_imu_pack_to_frame_buf(
        (uint8_t*)buf,
        sysid,
        compid,
        time_boot_ms, xacc, yacc, zacc, xgyro, ygyro, zgyro, xmag, ymag, zmag, temperature,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR void mavlink_msg_scaled_imu_decode(const mavlink_message_t* msg, mavlink_scaled_imu_t* payload)
{
    fmav_msg_scaled_imu_decode(payload, msg);
}

#endif // FASTMAVLINK_PYMAVLINK_ENABLED


#endif // FASTMAVLINK_MSG_SCALED_IMU_H
