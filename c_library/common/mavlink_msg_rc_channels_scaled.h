//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_MSG_RC_CHANNELS_SCALED_H
#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_H


//----------------------------------------
//-- Message RC_CHANNELS_SCALED
//----------------------------------------

// fields are ordered, as they are on the wire
FASTMAVLINK_PACK(
typedef struct _fmav_rc_channels_scaled_t {
    uint32_t time_boot_ms;
    int16_t chan1_scaled;
    int16_t chan2_scaled;
    int16_t chan3_scaled;
    int16_t chan4_scaled;
    int16_t chan5_scaled;
    int16_t chan6_scaled;
    int16_t chan7_scaled;
    int16_t chan8_scaled;
    uint8_t port;
    uint8_t rssi;
}) fmav_rc_channels_scaled_t;


#define FASTMAVLINK_MSG_ID_RC_CHANNELS_SCALED  34

#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_PAYLOAD_LEN_MIN  22
#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_PAYLOAD_LEN_MAX  22
#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_CRCEXTRA  237

#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_FLAGS  0
#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_TARGET_SYSTEM_OFS  0
#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_TARGET_COMPONENT_OFS  0

#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_FRAME_LEN_MAX  47



#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_FIELD_TIME_BOOT_MS_OFS  0
#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_FIELD_CHAN1_SCALED_OFS  4
#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_FIELD_CHAN2_SCALED_OFS  6
#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_FIELD_CHAN3_SCALED_OFS  8
#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_FIELD_CHAN4_SCALED_OFS  10
#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_FIELD_CHAN5_SCALED_OFS  12
#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_FIELD_CHAN6_SCALED_OFS  14
#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_FIELD_CHAN7_SCALED_OFS  16
#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_FIELD_CHAN8_SCALED_OFS  18
#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_FIELD_PORT_OFS  20
#define FASTMAVLINK_MSG_RC_CHANNELS_SCALED_FIELD_RSSI_OFS  21


//----------------------------------------
//-- Message RC_CHANNELS_SCALED packing routines, for sending
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_rc_channels_scaled_pack(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    uint32_t time_boot_ms, uint8_t port, int16_t chan1_scaled, int16_t chan2_scaled, int16_t chan3_scaled, int16_t chan4_scaled, int16_t chan5_scaled, int16_t chan6_scaled, int16_t chan7_scaled, int16_t chan8_scaled, uint8_t rssi,
    fmav_status_t* _status)
{
    fmav_rc_channels_scaled_t* _payload = (fmav_rc_channels_scaled_t*)msg->payload;

    _payload->time_boot_ms = time_boot_ms;
    _payload->chan1_scaled = chan1_scaled;
    _payload->chan2_scaled = chan2_scaled;
    _payload->chan3_scaled = chan3_scaled;
    _payload->chan4_scaled = chan4_scaled;
    _payload->chan5_scaled = chan5_scaled;
    _payload->chan6_scaled = chan6_scaled;
    _payload->chan7_scaled = chan7_scaled;
    _payload->chan8_scaled = chan8_scaled;
    _payload->port = port;
    _payload->rssi = rssi;


    msg->sysid = sysid;
    msg->compid = compid;
    msg->msgid = FASTMAVLINK_MSG_ID_RC_CHANNELS_SCALED;

    msg->target_sysid = 0;
    msg->target_compid = 0;
    msg->crc_extra = FASTMAVLINK_MSG_RC_CHANNELS_SCALED_CRCEXTRA;

    return fmav_finalize_msg(
        msg,
        FASTMAVLINK_MSG_RC_CHANNELS_SCALED_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_RC_CHANNELS_SCALED_PAYLOAD_LEN_MAX,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_rc_channels_scaled_encode(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    const fmav_rc_channels_scaled_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_rc_channels_scaled_pack(
        msg, sysid, compid,
        _payload->time_boot_ms, _payload->port, _payload->chan1_scaled, _payload->chan2_scaled, _payload->chan3_scaled, _payload->chan4_scaled, _payload->chan5_scaled, _payload->chan6_scaled, _payload->chan7_scaled, _payload->chan8_scaled, _payload->rssi,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_rc_channels_scaled_pack_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    uint32_t time_boot_ms, uint8_t port, int16_t chan1_scaled, int16_t chan2_scaled, int16_t chan3_scaled, int16_t chan4_scaled, int16_t chan5_scaled, int16_t chan6_scaled, int16_t chan7_scaled, int16_t chan8_scaled, uint8_t rssi,
    fmav_status_t* _status)
{
    fmav_rc_channels_scaled_t* _payload = (fmav_rc_channels_scaled_t*)(&buf[FASTMAVLINK_HEADER_V2_LEN]);

    _payload->time_boot_ms = time_boot_ms;
    _payload->chan1_scaled = chan1_scaled;
    _payload->chan2_scaled = chan2_scaled;
    _payload->chan3_scaled = chan3_scaled;
    _payload->chan4_scaled = chan4_scaled;
    _payload->chan5_scaled = chan5_scaled;
    _payload->chan6_scaled = chan6_scaled;
    _payload->chan7_scaled = chan7_scaled;
    _payload->chan8_scaled = chan8_scaled;
    _payload->port = port;
    _payload->rssi = rssi;


    buf[5] = sysid;
    buf[6] = compid;
    buf[7] = (uint8_t)FASTMAVLINK_MSG_ID_RC_CHANNELS_SCALED;
    buf[8] = ((uint32_t)FASTMAVLINK_MSG_ID_RC_CHANNELS_SCALED >> 8);
    buf[9] = ((uint32_t)FASTMAVLINK_MSG_ID_RC_CHANNELS_SCALED >> 16);

    return fmav_finalize_frame_buf(
        buf,
        FASTMAVLINK_MSG_RC_CHANNELS_SCALED_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_RC_CHANNELS_SCALED_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_RC_CHANNELS_SCALED_CRCEXTRA,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_rc_channels_scaled_encode_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    const fmav_rc_channels_scaled_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_rc_channels_scaled_pack_to_frame_buf(
        buf, sysid, compid,
        _payload->time_boot_ms, _payload->port, _payload->chan1_scaled, _payload->chan2_scaled, _payload->chan3_scaled, _payload->chan4_scaled, _payload->chan5_scaled, _payload->chan6_scaled, _payload->chan7_scaled, _payload->chan8_scaled, _payload->rssi,
        _status);
}


#ifdef FASTMAVLINK_SERIAL_WRITE_CHAR

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_rc_channels_scaled_pack_to_serial(
    uint8_t sysid,
    uint8_t compid,
    uint32_t time_boot_ms, uint8_t port, int16_t chan1_scaled, int16_t chan2_scaled, int16_t chan3_scaled, int16_t chan4_scaled, int16_t chan5_scaled, int16_t chan6_scaled, int16_t chan7_scaled, int16_t chan8_scaled, uint8_t rssi,
    fmav_status_t* _status)
{
    fmav_rc_channels_scaled_t _payload;

    _payload.time_boot_ms = time_boot_ms;
    _payload.chan1_scaled = chan1_scaled;
    _payload.chan2_scaled = chan2_scaled;
    _payload.chan3_scaled = chan3_scaled;
    _payload.chan4_scaled = chan4_scaled;
    _payload.chan5_scaled = chan5_scaled;
    _payload.chan6_scaled = chan6_scaled;
    _payload.chan7_scaled = chan7_scaled;
    _payload.chan8_scaled = chan8_scaled;
    _payload.port = port;
    _payload.rssi = rssi;


    return fmav_finalize_serial(
        sysid,
        compid,
        (uint8_t*)&_payload,
        FASTMAVLINK_MSG_ID_RC_CHANNELS_SCALED,
        FASTMAVLINK_MSG_RC_CHANNELS_SCALED_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_RC_CHANNELS_SCALED_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_RC_CHANNELS_SCALED_CRCEXTRA,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_rc_channels_scaled_encode_to_serial(
    uint8_t sysid,
    uint8_t compid,
    const fmav_rc_channels_scaled_t* _payload,
    fmav_status_t* _status)
{
    return fmav_finalize_serial(
        sysid,
        compid,
        (uint8_t*)_payload,
        FASTMAVLINK_MSG_ID_RC_CHANNELS_SCALED,
        FASTMAVLINK_MSG_RC_CHANNELS_SCALED_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_RC_CHANNELS_SCALED_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_RC_CHANNELS_SCALED_CRCEXTRA,
        _status);
}
#endif


//----------------------------------------
//-- Message RC_CHANNELS_SCALED unpacking routines, for receiving
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR void fmav_msg_rc_channels_scaled_decode(fmav_rc_channels_scaled_t* payload, const fmav_message_t* msg)
{
    uint8_t len = (msg->len < FASTMAVLINK_MSG_RC_CHANNELS_SCALED_PAYLOAD_LEN_MAX) ? msg->len : FASTMAVLINK_MSG_RC_CHANNELS_SCALED_PAYLOAD_LEN_MAX;

    memset(payload, 0, FASTMAVLINK_MSG_RC_CHANNELS_SCALED_PAYLOAD_LEN_MAX);
    memcpy(payload, msg->payload, len);
}


FASTMAVLINK_FUNCTION_DECORATOR uint32_t fmav_msg_rc_channels_scaled_get_field_time_boot_ms(const fmav_message_t* msg)
{
    uint32_t r; 
    memcpy(&r, &(msg->payload[0]), sizeof(uint32_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_rc_channels_scaled_get_field_chan1_scaled(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[4]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_rc_channels_scaled_get_field_chan2_scaled(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[6]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_rc_channels_scaled_get_field_chan3_scaled(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[8]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_rc_channels_scaled_get_field_chan4_scaled(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[10]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_rc_channels_scaled_get_field_chan5_scaled(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[12]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_rc_channels_scaled_get_field_chan6_scaled(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[14]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_rc_channels_scaled_get_field_chan7_scaled(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[16]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR int16_t fmav_msg_rc_channels_scaled_get_field_chan8_scaled(const fmav_message_t* msg)
{
    int16_t r; 
    memcpy(&r, &(msg->payload[18]), sizeof(int16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR uint8_t fmav_msg_rc_channels_scaled_get_field_port(const fmav_message_t* msg)
{
    uint8_t r; 
    memcpy(&r, &(msg->payload[20]), sizeof(uint8_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR uint8_t fmav_msg_rc_channels_scaled_get_field_rssi(const fmav_message_t* msg)
{
    uint8_t r; 
    memcpy(&r, &(msg->payload[21]), sizeof(uint8_t)); 
    return r;     
}





//----------------------------------------
//-- Pymavlink wrappers
//----------------------------------------
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED

#define MAVLINK_MSG_ID_RC_CHANNELS_SCALED  34

#define mavlink_rc_channels_scaled_t  fmav_rc_channels_scaled_t

#define MAVLINK_MSG_ID_RC_CHANNELS_SCALED_LEN  22
#define MAVLINK_MSG_ID_RC_CHANNELS_SCALED_MIN_LEN  22
#define MAVLINK_MSG_ID_34_LEN  22
#define MAVLINK_MSG_ID_34_MIN_LEN  22

#define MAVLINK_MSG_ID_RC_CHANNELS_SCALED_CRC  237
#define MAVLINK_MSG_ID_34_CRC  237




#if MAVLINK_COMM_NUM_BUFFERS > 0

FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_rc_channels_scaled_pack(
    uint8_t sysid,
    uint8_t compid,
    mavlink_message_t* msg,
    uint32_t time_boot_ms, uint8_t port, int16_t chan1_scaled, int16_t chan2_scaled, int16_t chan3_scaled, int16_t chan4_scaled, int16_t chan5_scaled, int16_t chan6_scaled, int16_t chan7_scaled, int16_t chan8_scaled, uint8_t rssi)
{
    fmav_status_t* _status = mavlink_get_channel_status(MAVLINK_COMM_0);
    return fmav_msg_rc_channels_scaled_pack(
        msg, sysid, compid,
        time_boot_ms, port, chan1_scaled, chan2_scaled, chan3_scaled, chan4_scaled, chan5_scaled, chan6_scaled, chan7_scaled, chan8_scaled, rssi,
        _status);
}

#endif


FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_rc_channels_scaled_pack_txbuf(
    char* buf,
    fmav_status_t* _status,
    uint8_t sysid,
    uint8_t compid,
    uint32_t time_boot_ms, uint8_t port, int16_t chan1_scaled, int16_t chan2_scaled, int16_t chan3_scaled, int16_t chan4_scaled, int16_t chan5_scaled, int16_t chan6_scaled, int16_t chan7_scaled, int16_t chan8_scaled, uint8_t rssi)
{
    return fmav_msg_rc_channels_scaled_pack_to_frame_buf(
        (uint8_t*)buf,
        sysid,
        compid,
        time_boot_ms, port, chan1_scaled, chan2_scaled, chan3_scaled, chan4_scaled, chan5_scaled, chan6_scaled, chan7_scaled, chan8_scaled, rssi,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR void mavlink_msg_rc_channels_scaled_decode(const mavlink_message_t* msg, mavlink_rc_channels_scaled_t* payload)
{
    fmav_msg_rc_channels_scaled_decode(payload, msg);
}

#endif // FASTMAVLINK_PYMAVLINK_ENABLED


#endif // FASTMAVLINK_MSG_RC_CHANNELS_SCALED_H
