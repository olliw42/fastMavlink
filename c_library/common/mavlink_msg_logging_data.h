//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_MSG_LOGGING_DATA_H
#define FASTMAVLINK_MSG_LOGGING_DATA_H


//----------------------------------------
//-- Message LOGGING_DATA
//----------------------------------------

// fields are ordered, as they are on the wire
FASTMAVLINK_PACK(
typedef struct _fmav_logging_data_t {
    uint16_t sequence;
    uint8_t target_system;
    uint8_t target_component;
    uint8_t length;
    uint8_t first_message_offset;
    uint8_t data[249];
}) fmav_logging_data_t;


#define FASTMAVLINK_MSG_ID_LOGGING_DATA  266

#define FASTMAVLINK_MSG_LOGGING_DATA_PAYLOAD_LEN_MIN  255
#define FASTMAVLINK_MSG_LOGGING_DATA_PAYLOAD_LEN_MAX  255
#define FASTMAVLINK_MSG_LOGGING_DATA_CRCEXTRA  193

#define FASTMAVLINK_MSG_LOGGING_DATA_FLAGS  3
#define FASTMAVLINK_MSG_LOGGING_DATA_TARGET_SYSTEM_OFS  2
#define FASTMAVLINK_MSG_LOGGING_DATA_TARGET_COMPONENT_OFS  3

#define FASTMAVLINK_MSG_LOGGING_DATA_FRAME_LEN_MAX  280

#define FASTMAVLINK_MSG_LOGGING_DATA_FIELD_DATA_NUM  249 // number of elements in array
#define FASTMAVLINK_MSG_LOGGING_DATA_FIELD_DATA_LEN  249 // length of array = number of bytes

#define FASTMAVLINK_MSG_LOGGING_DATA_FIELD_SEQUENCE_OFS  0
#define FASTMAVLINK_MSG_LOGGING_DATA_FIELD_TARGET_SYSTEM_OFS  2
#define FASTMAVLINK_MSG_LOGGING_DATA_FIELD_TARGET_COMPONENT_OFS  3
#define FASTMAVLINK_MSG_LOGGING_DATA_FIELD_LENGTH_OFS  4
#define FASTMAVLINK_MSG_LOGGING_DATA_FIELD_FIRST_MESSAGE_OFFSET_OFS  5
#define FASTMAVLINK_MSG_LOGGING_DATA_FIELD_DATA_OFS  6


//----------------------------------------
//-- Message LOGGING_DATA packing routines, for sending
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_logging_data_pack(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    uint8_t target_system, uint8_t target_component, uint16_t sequence, uint8_t length, uint8_t first_message_offset, const uint8_t* data,
    fmav_status_t* _status)
{
    fmav_logging_data_t* _payload = (fmav_logging_data_t*)msg->payload;

    _payload->sequence = sequence;
    _payload->target_system = target_system;
    _payload->target_component = target_component;
    _payload->length = length;
    _payload->first_message_offset = first_message_offset;
    memcpy(&(_payload->data), data, sizeof(uint8_t)*249);

    msg->sysid = sysid;
    msg->compid = compid;
    msg->msgid = FASTMAVLINK_MSG_ID_LOGGING_DATA;

    msg->target_sysid = target_system;
    msg->target_compid = target_component;
    msg->crc_extra = FASTMAVLINK_MSG_LOGGING_DATA_CRCEXTRA;

    return fmav_finalize_msg(
        msg,
        FASTMAVLINK_MSG_LOGGING_DATA_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_LOGGING_DATA_PAYLOAD_LEN_MAX,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_logging_data_encode(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    const fmav_logging_data_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_logging_data_pack(
        msg, sysid, compid,
        _payload->target_system, _payload->target_component, _payload->sequence, _payload->length, _payload->first_message_offset, _payload->data,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_logging_data_pack_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    uint8_t target_system, uint8_t target_component, uint16_t sequence, uint8_t length, uint8_t first_message_offset, const uint8_t* data,
    fmav_status_t* _status)
{
    fmav_logging_data_t* _payload = (fmav_logging_data_t*)(&buf[FASTMAVLINK_HEADER_V2_LEN]);

    _payload->sequence = sequence;
    _payload->target_system = target_system;
    _payload->target_component = target_component;
    _payload->length = length;
    _payload->first_message_offset = first_message_offset;
    memcpy(&(_payload->data), data, sizeof(uint8_t)*249);

    buf[5] = sysid;
    buf[6] = compid;
    buf[7] = (uint8_t)FASTMAVLINK_MSG_ID_LOGGING_DATA;
    buf[8] = ((uint32_t)FASTMAVLINK_MSG_ID_LOGGING_DATA >> 8);
    buf[9] = ((uint32_t)FASTMAVLINK_MSG_ID_LOGGING_DATA >> 16);

    return fmav_finalize_frame_buf(
        buf,
        FASTMAVLINK_MSG_LOGGING_DATA_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_LOGGING_DATA_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_LOGGING_DATA_CRCEXTRA,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_logging_data_encode_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    const fmav_logging_data_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_logging_data_pack_to_frame_buf(
        buf, sysid, compid,
        _payload->target_system, _payload->target_component, _payload->sequence, _payload->length, _payload->first_message_offset, _payload->data,
        _status);
}


#ifdef FASTMAVLINK_SERIAL_WRITE_CHAR

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_logging_data_pack_to_serial(
    uint8_t sysid,
    uint8_t compid,
    uint8_t target_system, uint8_t target_component, uint16_t sequence, uint8_t length, uint8_t first_message_offset, const uint8_t* data,
    fmav_status_t* _status)
{
    fmav_logging_data_t _payload;

    _payload.sequence = sequence;
    _payload.target_system = target_system;
    _payload.target_component = target_component;
    _payload.length = length;
    _payload.first_message_offset = first_message_offset;
    memcpy(&(_payload.data), data, sizeof(uint8_t)*249);

    return fmav_finalize_serial(
        sysid,
        compid,
        (uint8_t*)&_payload,
        FASTMAVLINK_MSG_ID_LOGGING_DATA,
        FASTMAVLINK_MSG_LOGGING_DATA_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_LOGGING_DATA_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_LOGGING_DATA_CRCEXTRA,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_logging_data_encode_to_serial(
    uint8_t sysid,
    uint8_t compid,
    const fmav_logging_data_t* _payload,
    fmav_status_t* _status)
{
    return fmav_finalize_serial(
        sysid,
        compid,
        (uint8_t*)_payload,
        FASTMAVLINK_MSG_ID_LOGGING_DATA,
        FASTMAVLINK_MSG_LOGGING_DATA_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_LOGGING_DATA_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_LOGGING_DATA_CRCEXTRA,
        _status);
}
#endif


//----------------------------------------
//-- Message LOGGING_DATA unpacking routines, for receiving
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR void fmav_msg_logging_data_decode(fmav_logging_data_t* payload, const fmav_message_t* msg)
{
    uint8_t len = (msg->len < FASTMAVLINK_MSG_LOGGING_DATA_PAYLOAD_LEN_MAX) ? msg->len : FASTMAVLINK_MSG_LOGGING_DATA_PAYLOAD_LEN_MAX;

    memset(payload, 0, FASTMAVLINK_MSG_LOGGING_DATA_PAYLOAD_LEN_MAX);
    memcpy(payload, msg->payload, len);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_logging_data_get_field_sequence(const fmav_message_t* msg)
{
    uint16_t r; 
    memcpy(&r, &(msg->payload[0]), sizeof(uint16_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR uint8_t fmav_msg_logging_data_get_field_target_system(const fmav_message_t* msg)
{
    uint8_t r; 
    memcpy(&r, &(msg->payload[2]), sizeof(uint8_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR uint8_t fmav_msg_logging_data_get_field_target_component(const fmav_message_t* msg)
{
    uint8_t r; 
    memcpy(&r, &(msg->payload[3]), sizeof(uint8_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR uint8_t fmav_msg_logging_data_get_field_length(const fmav_message_t* msg)
{
    uint8_t r; 
    memcpy(&r, &(msg->payload[4]), sizeof(uint8_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR uint8_t fmav_msg_logging_data_get_field_first_message_offset(const fmav_message_t* msg)
{
    uint8_t r; 
    memcpy(&r, &(msg->payload[5]), sizeof(uint8_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR uint8_t* fmav_msg_logging_data_get_field_data_ptr(const fmav_message_t* msg)
{
    return (uint8_t*)&(msg->payload[6]);
}


FASTMAVLINK_FUNCTION_DECORATOR uint8_t fmav_msg_logging_data_get_field_data(uint16_t index, const fmav_message_t* msg)
{
    if (index >= FASTMAVLINK_MSG_LOGGING_DATA_FIELD_DATA_NUM) return 0;
    return ((uint8_t*)&(msg->payload[6]))[index];     
}


//----------------------------------------
//-- Pymavlink wrappers
//----------------------------------------
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED

#define MAVLINK_MSG_ID_LOGGING_DATA  266

#define mavlink_logging_data_t  fmav_logging_data_t

#define MAVLINK_MSG_ID_LOGGING_DATA_LEN  255
#define MAVLINK_MSG_ID_LOGGING_DATA_MIN_LEN  255
#define MAVLINK_MSG_ID_266_LEN  255
#define MAVLINK_MSG_ID_266_MIN_LEN  255

#define MAVLINK_MSG_ID_LOGGING_DATA_CRC  193
#define MAVLINK_MSG_ID_266_CRC  193

#define MAVLINK_MSG_LOGGING_DATA_FIELD_DATA_LEN 249


#if MAVLINK_COMM_NUM_BUFFERS > 0

FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_logging_data_pack(
    uint8_t sysid,
    uint8_t compid,
    mavlink_message_t* msg,
    uint8_t target_system, uint8_t target_component, uint16_t sequence, uint8_t length, uint8_t first_message_offset, const uint8_t* data)
{
    fmav_status_t* _status = mavlink_get_channel_status(MAVLINK_COMM_0);
    return fmav_msg_logging_data_pack(
        msg, sysid, compid,
        target_system, target_component, sequence, length, first_message_offset, data,
        _status);
}

#endif


FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_logging_data_pack_txbuf(
    char* buf,
    fmav_status_t* _status,
    uint8_t sysid,
    uint8_t compid,
    uint8_t target_system, uint8_t target_component, uint16_t sequence, uint8_t length, uint8_t first_message_offset, const uint8_t* data)
{
    return fmav_msg_logging_data_pack_to_frame_buf(
        (uint8_t*)buf,
        sysid,
        compid,
        target_system, target_component, sequence, length, first_message_offset, data,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR void mavlink_msg_logging_data_decode(const mavlink_message_t* msg, mavlink_logging_data_t* payload)
{
    fmav_msg_logging_data_decode(payload, msg);
}

#endif // FASTMAVLINK_PYMAVLINK_ENABLED


#endif // FASTMAVLINK_MSG_LOGGING_DATA_H
