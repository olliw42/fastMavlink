//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_H
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_H


//----------------------------------------
//-- Message TRAJECTORY_REPRESENTATION_WAYPOINTS
//----------------------------------------

// fields are ordered, as they are on the wire
FASTMAVLINK_PACK(
typedef struct _fmav_trajectory_representation_waypoints_t {
    uint64_t time_usec;
    float pos_x[5];
    float pos_y[5];
    float pos_z[5];
    float vel_x[5];
    float vel_y[5];
    float vel_z[5];
    float acc_x[5];
    float acc_y[5];
    float acc_z[5];
    float pos_yaw[5];
    float vel_yaw[5];
    uint16_t command[5];
    uint8_t valid_points;
}) fmav_trajectory_representation_waypoints_t;


#define FASTMAVLINK_MSG_ID_TRAJECTORY_REPRESENTATION_WAYPOINTS  332

#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_PAYLOAD_LEN_MIN  239
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_PAYLOAD_LEN_MAX  239
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_CRCEXTRA  236

#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FLAGS  0
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_TARGET_SYSTEM_OFS  0
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_TARGET_COMPONENT_OFS  0

#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FRAME_LEN_MAX  264

#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_X_NUM  5 // number of elements in array
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_X_LEN  20 // length of array = number of bytes
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_Y_NUM  5 // number of elements in array
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_Y_LEN  20 // length of array = number of bytes
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_Z_NUM  5 // number of elements in array
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_Z_LEN  20 // length of array = number of bytes
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_X_NUM  5 // number of elements in array
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_X_LEN  20 // length of array = number of bytes
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_Y_NUM  5 // number of elements in array
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_Y_LEN  20 // length of array = number of bytes
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_Z_NUM  5 // number of elements in array
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_Z_LEN  20 // length of array = number of bytes
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_ACC_X_NUM  5 // number of elements in array
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_ACC_X_LEN  20 // length of array = number of bytes
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_ACC_Y_NUM  5 // number of elements in array
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_ACC_Y_LEN  20 // length of array = number of bytes
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_ACC_Z_NUM  5 // number of elements in array
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_ACC_Z_LEN  20 // length of array = number of bytes
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_YAW_NUM  5 // number of elements in array
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_YAW_LEN  20 // length of array = number of bytes
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_YAW_NUM  5 // number of elements in array
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_YAW_LEN  20 // length of array = number of bytes
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_COMMAND_NUM  5 // number of elements in array
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_COMMAND_LEN  10 // length of array = number of bytes

#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_TIME_USEC_OFS  0
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_X_OFS  8
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_Y_OFS  28
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_Z_OFS  48
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_X_OFS  68
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_Y_OFS  88
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_Z_OFS  108
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_ACC_X_OFS  128
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_ACC_Y_OFS  148
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_ACC_Z_OFS  168
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_YAW_OFS  188
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_YAW_OFS  208
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_COMMAND_OFS  228
#define FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VALID_POINTS_OFS  238


//----------------------------------------
//-- Message TRAJECTORY_REPRESENTATION_WAYPOINTS packing routines, for sending
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_trajectory_representation_waypoints_pack(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    uint64_t time_usec, uint8_t valid_points, const float* pos_x, const float* pos_y, const float* pos_z, const float* vel_x, const float* vel_y, const float* vel_z, const float* acc_x, const float* acc_y, const float* acc_z, const float* pos_yaw, const float* vel_yaw, const uint16_t* command,
    fmav_status_t* _status)
{
    fmav_trajectory_representation_waypoints_t* _payload = (fmav_trajectory_representation_waypoints_t*)msg->payload;

    _payload->time_usec = time_usec;
    _payload->valid_points = valid_points;
    memcpy(&(_payload->pos_x), pos_x, sizeof(float)*5);
    memcpy(&(_payload->pos_y), pos_y, sizeof(float)*5);
    memcpy(&(_payload->pos_z), pos_z, sizeof(float)*5);
    memcpy(&(_payload->vel_x), vel_x, sizeof(float)*5);
    memcpy(&(_payload->vel_y), vel_y, sizeof(float)*5);
    memcpy(&(_payload->vel_z), vel_z, sizeof(float)*5);
    memcpy(&(_payload->acc_x), acc_x, sizeof(float)*5);
    memcpy(&(_payload->acc_y), acc_y, sizeof(float)*5);
    memcpy(&(_payload->acc_z), acc_z, sizeof(float)*5);
    memcpy(&(_payload->pos_yaw), pos_yaw, sizeof(float)*5);
    memcpy(&(_payload->vel_yaw), vel_yaw, sizeof(float)*5);
    memcpy(&(_payload->command), command, sizeof(uint16_t)*5);

    msg->sysid = sysid;
    msg->compid = compid;
    msg->msgid = FASTMAVLINK_MSG_ID_TRAJECTORY_REPRESENTATION_WAYPOINTS;

    msg->target_sysid = 0;
    msg->target_compid = 0;
    msg->crc_extra = FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_CRCEXTRA;

    return fmav_finalize_msg(
        msg,
        FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_PAYLOAD_LEN_MAX,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_trajectory_representation_waypoints_encode(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    const fmav_trajectory_representation_waypoints_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_trajectory_representation_waypoints_pack(
        msg, sysid, compid,
        _payload->time_usec, _payload->valid_points, _payload->pos_x, _payload->pos_y, _payload->pos_z, _payload->vel_x, _payload->vel_y, _payload->vel_z, _payload->acc_x, _payload->acc_y, _payload->acc_z, _payload->pos_yaw, _payload->vel_yaw, _payload->command,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_trajectory_representation_waypoints_pack_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    uint64_t time_usec, uint8_t valid_points, const float* pos_x, const float* pos_y, const float* pos_z, const float* vel_x, const float* vel_y, const float* vel_z, const float* acc_x, const float* acc_y, const float* acc_z, const float* pos_yaw, const float* vel_yaw, const uint16_t* command,
    fmav_status_t* _status)
{
    fmav_trajectory_representation_waypoints_t* _payload = (fmav_trajectory_representation_waypoints_t*)(&buf[FASTMAVLINK_HEADER_V2_LEN]);

    _payload->time_usec = time_usec;
    _payload->valid_points = valid_points;
    memcpy(&(_payload->pos_x), pos_x, sizeof(float)*5);
    memcpy(&(_payload->pos_y), pos_y, sizeof(float)*5);
    memcpy(&(_payload->pos_z), pos_z, sizeof(float)*5);
    memcpy(&(_payload->vel_x), vel_x, sizeof(float)*5);
    memcpy(&(_payload->vel_y), vel_y, sizeof(float)*5);
    memcpy(&(_payload->vel_z), vel_z, sizeof(float)*5);
    memcpy(&(_payload->acc_x), acc_x, sizeof(float)*5);
    memcpy(&(_payload->acc_y), acc_y, sizeof(float)*5);
    memcpy(&(_payload->acc_z), acc_z, sizeof(float)*5);
    memcpy(&(_payload->pos_yaw), pos_yaw, sizeof(float)*5);
    memcpy(&(_payload->vel_yaw), vel_yaw, sizeof(float)*5);
    memcpy(&(_payload->command), command, sizeof(uint16_t)*5);

    buf[5] = sysid;
    buf[6] = compid;
    buf[7] = (uint8_t)FASTMAVLINK_MSG_ID_TRAJECTORY_REPRESENTATION_WAYPOINTS;
    buf[8] = ((uint32_t)FASTMAVLINK_MSG_ID_TRAJECTORY_REPRESENTATION_WAYPOINTS >> 8);
    buf[9] = ((uint32_t)FASTMAVLINK_MSG_ID_TRAJECTORY_REPRESENTATION_WAYPOINTS >> 16);

    return fmav_finalize_frame_buf(
        buf,
        FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_CRCEXTRA,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_trajectory_representation_waypoints_encode_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    const fmav_trajectory_representation_waypoints_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_trajectory_representation_waypoints_pack_to_frame_buf(
        buf, sysid, compid,
        _payload->time_usec, _payload->valid_points, _payload->pos_x, _payload->pos_y, _payload->pos_z, _payload->vel_x, _payload->vel_y, _payload->vel_z, _payload->acc_x, _payload->acc_y, _payload->acc_z, _payload->pos_yaw, _payload->vel_yaw, _payload->command,
        _status);
}


#ifdef FASTMAVLINK_SERIAL_WRITE_CHAR

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_trajectory_representation_waypoints_pack_to_serial(
    uint8_t sysid,
    uint8_t compid,
    uint64_t time_usec, uint8_t valid_points, const float* pos_x, const float* pos_y, const float* pos_z, const float* vel_x, const float* vel_y, const float* vel_z, const float* acc_x, const float* acc_y, const float* acc_z, const float* pos_yaw, const float* vel_yaw, const uint16_t* command,
    fmav_status_t* _status)
{
    fmav_trajectory_representation_waypoints_t _payload;

    _payload.time_usec = time_usec;
    _payload.valid_points = valid_points;
    memcpy(&(_payload.pos_x), pos_x, sizeof(float)*5);
    memcpy(&(_payload.pos_y), pos_y, sizeof(float)*5);
    memcpy(&(_payload.pos_z), pos_z, sizeof(float)*5);
    memcpy(&(_payload.vel_x), vel_x, sizeof(float)*5);
    memcpy(&(_payload.vel_y), vel_y, sizeof(float)*5);
    memcpy(&(_payload.vel_z), vel_z, sizeof(float)*5);
    memcpy(&(_payload.acc_x), acc_x, sizeof(float)*5);
    memcpy(&(_payload.acc_y), acc_y, sizeof(float)*5);
    memcpy(&(_payload.acc_z), acc_z, sizeof(float)*5);
    memcpy(&(_payload.pos_yaw), pos_yaw, sizeof(float)*5);
    memcpy(&(_payload.vel_yaw), vel_yaw, sizeof(float)*5);
    memcpy(&(_payload.command), command, sizeof(uint16_t)*5);

    return fmav_finalize_serial(
        sysid,
        compid,
        (uint8_t*)&_payload,
        FASTMAVLINK_MSG_ID_TRAJECTORY_REPRESENTATION_WAYPOINTS,
        FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_CRCEXTRA,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_trajectory_representation_waypoints_encode_to_serial(
    uint8_t sysid,
    uint8_t compid,
    const fmav_trajectory_representation_waypoints_t* _payload,
    fmav_status_t* _status)
{
    return fmav_finalize_serial(
        sysid,
        compid,
        (uint8_t*)_payload,
        FASTMAVLINK_MSG_ID_TRAJECTORY_REPRESENTATION_WAYPOINTS,
        FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_CRCEXTRA,
        _status);
}
#endif


//----------------------------------------
//-- Message TRAJECTORY_REPRESENTATION_WAYPOINTS unpacking routines, for receiving
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR void fmav_msg_trajectory_representation_waypoints_decode(fmav_trajectory_representation_waypoints_t* payload, const fmav_message_t* msg)
{
    uint8_t len = (msg->len < FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_PAYLOAD_LEN_MAX) ? msg->len : FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_PAYLOAD_LEN_MAX;

    memset(payload, 0, FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_PAYLOAD_LEN_MAX);
    memcpy(payload, msg->payload, len);
}


FASTMAVLINK_FUNCTION_DECORATOR uint64_t fmav_msg_trajectory_representation_waypoints_get_field_time_usec(const fmav_message_t* msg)
{
    uint64_t r; 
    memcpy(&r, &(msg->payload[0]), sizeof(uint64_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR uint8_t fmav_msg_trajectory_representation_waypoints_get_field_valid_points(const fmav_message_t* msg)
{
    uint8_t r; 
    memcpy(&r, &(msg->payload[238]), sizeof(uint8_t)); 
    return r;     
}


FASTMAVLINK_FUNCTION_DECORATOR float* fmav_msg_trajectory_representation_waypoints_get_field_pos_x_ptr(const fmav_message_t* msg)
{
    return (float*)&(msg->payload[8]);
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_trajectory_representation_waypoints_get_field_pos_x(uint16_t index, const fmav_message_t* msg)
{
    if (index >= FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_X_NUM) return 0;
    return ((float*)&(msg->payload[8]))[index];     
}


FASTMAVLINK_FUNCTION_DECORATOR float* fmav_msg_trajectory_representation_waypoints_get_field_pos_y_ptr(const fmav_message_t* msg)
{
    return (float*)&(msg->payload[28]);
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_trajectory_representation_waypoints_get_field_pos_y(uint16_t index, const fmav_message_t* msg)
{
    if (index >= FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_Y_NUM) return 0;
    return ((float*)&(msg->payload[28]))[index];     
}


FASTMAVLINK_FUNCTION_DECORATOR float* fmav_msg_trajectory_representation_waypoints_get_field_pos_z_ptr(const fmav_message_t* msg)
{
    return (float*)&(msg->payload[48]);
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_trajectory_representation_waypoints_get_field_pos_z(uint16_t index, const fmav_message_t* msg)
{
    if (index >= FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_Z_NUM) return 0;
    return ((float*)&(msg->payload[48]))[index];     
}


FASTMAVLINK_FUNCTION_DECORATOR float* fmav_msg_trajectory_representation_waypoints_get_field_vel_x_ptr(const fmav_message_t* msg)
{
    return (float*)&(msg->payload[68]);
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_trajectory_representation_waypoints_get_field_vel_x(uint16_t index, const fmav_message_t* msg)
{
    if (index >= FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_X_NUM) return 0;
    return ((float*)&(msg->payload[68]))[index];     
}


FASTMAVLINK_FUNCTION_DECORATOR float* fmav_msg_trajectory_representation_waypoints_get_field_vel_y_ptr(const fmav_message_t* msg)
{
    return (float*)&(msg->payload[88]);
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_trajectory_representation_waypoints_get_field_vel_y(uint16_t index, const fmav_message_t* msg)
{
    if (index >= FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_Y_NUM) return 0;
    return ((float*)&(msg->payload[88]))[index];     
}


FASTMAVLINK_FUNCTION_DECORATOR float* fmav_msg_trajectory_representation_waypoints_get_field_vel_z_ptr(const fmav_message_t* msg)
{
    return (float*)&(msg->payload[108]);
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_trajectory_representation_waypoints_get_field_vel_z(uint16_t index, const fmav_message_t* msg)
{
    if (index >= FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_Z_NUM) return 0;
    return ((float*)&(msg->payload[108]))[index];     
}


FASTMAVLINK_FUNCTION_DECORATOR float* fmav_msg_trajectory_representation_waypoints_get_field_acc_x_ptr(const fmav_message_t* msg)
{
    return (float*)&(msg->payload[128]);
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_trajectory_representation_waypoints_get_field_acc_x(uint16_t index, const fmav_message_t* msg)
{
    if (index >= FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_ACC_X_NUM) return 0;
    return ((float*)&(msg->payload[128]))[index];     
}


FASTMAVLINK_FUNCTION_DECORATOR float* fmav_msg_trajectory_representation_waypoints_get_field_acc_y_ptr(const fmav_message_t* msg)
{
    return (float*)&(msg->payload[148]);
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_trajectory_representation_waypoints_get_field_acc_y(uint16_t index, const fmav_message_t* msg)
{
    if (index >= FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_ACC_Y_NUM) return 0;
    return ((float*)&(msg->payload[148]))[index];     
}


FASTMAVLINK_FUNCTION_DECORATOR float* fmav_msg_trajectory_representation_waypoints_get_field_acc_z_ptr(const fmav_message_t* msg)
{
    return (float*)&(msg->payload[168]);
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_trajectory_representation_waypoints_get_field_acc_z(uint16_t index, const fmav_message_t* msg)
{
    if (index >= FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_ACC_Z_NUM) return 0;
    return ((float*)&(msg->payload[168]))[index];     
}


FASTMAVLINK_FUNCTION_DECORATOR float* fmav_msg_trajectory_representation_waypoints_get_field_pos_yaw_ptr(const fmav_message_t* msg)
{
    return (float*)&(msg->payload[188]);
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_trajectory_representation_waypoints_get_field_pos_yaw(uint16_t index, const fmav_message_t* msg)
{
    if (index >= FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_YAW_NUM) return 0;
    return ((float*)&(msg->payload[188]))[index];     
}


FASTMAVLINK_FUNCTION_DECORATOR float* fmav_msg_trajectory_representation_waypoints_get_field_vel_yaw_ptr(const fmav_message_t* msg)
{
    return (float*)&(msg->payload[208]);
}


FASTMAVLINK_FUNCTION_DECORATOR float fmav_msg_trajectory_representation_waypoints_get_field_vel_yaw(uint16_t index, const fmav_message_t* msg)
{
    if (index >= FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_YAW_NUM) return 0;
    return ((float*)&(msg->payload[208]))[index];     
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t* fmav_msg_trajectory_representation_waypoints_get_field_command_ptr(const fmav_message_t* msg)
{
    return (uint16_t*)&(msg->payload[228]);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_trajectory_representation_waypoints_get_field_command(uint16_t index, const fmav_message_t* msg)
{
    if (index >= FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_COMMAND_NUM) return 0;
    return ((uint16_t*)&(msg->payload[228]))[index];     
}


//----------------------------------------
//-- Pymavlink wrappers
//----------------------------------------
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED

#define MAVLINK_MSG_ID_TRAJECTORY_REPRESENTATION_WAYPOINTS  332

#define mavlink_trajectory_representation_waypoints_t  fmav_trajectory_representation_waypoints_t

#define MAVLINK_MSG_ID_TRAJECTORY_REPRESENTATION_WAYPOINTS_LEN  239
#define MAVLINK_MSG_ID_TRAJECTORY_REPRESENTATION_WAYPOINTS_MIN_LEN  239
#define MAVLINK_MSG_ID_332_LEN  239
#define MAVLINK_MSG_ID_332_MIN_LEN  239

#define MAVLINK_MSG_ID_TRAJECTORY_REPRESENTATION_WAYPOINTS_CRC  236
#define MAVLINK_MSG_ID_332_CRC  236

#define MAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_X_LEN 5
#define MAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_Y_LEN 5
#define MAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_Z_LEN 5
#define MAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_X_LEN 5
#define MAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_Y_LEN 5
#define MAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_Z_LEN 5
#define MAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_ACC_X_LEN 5
#define MAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_ACC_Y_LEN 5
#define MAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_ACC_Z_LEN 5
#define MAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_POS_YAW_LEN 5
#define MAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_VEL_YAW_LEN 5
#define MAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_FIELD_COMMAND_LEN 5


#if MAVLINK_COMM_NUM_BUFFERS > 0

FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_trajectory_representation_waypoints_pack(
    uint8_t sysid,
    uint8_t compid,
    mavlink_message_t* msg,
    uint64_t time_usec, uint8_t valid_points, const float* pos_x, const float* pos_y, const float* pos_z, const float* vel_x, const float* vel_y, const float* vel_z, const float* acc_x, const float* acc_y, const float* acc_z, const float* pos_yaw, const float* vel_yaw, const uint16_t* command)
{
    fmav_status_t* _status = mavlink_get_channel_status(MAVLINK_COMM_0);
    return fmav_msg_trajectory_representation_waypoints_pack(
        msg, sysid, compid,
        time_usec, valid_points, pos_x, pos_y, pos_z, vel_x, vel_y, vel_z, acc_x, acc_y, acc_z, pos_yaw, vel_yaw, command,
        _status);
}

#endif


FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_trajectory_representation_waypoints_pack_txbuf(
    char* buf,
    fmav_status_t* _status,
    uint8_t sysid,
    uint8_t compid,
    uint64_t time_usec, uint8_t valid_points, const float* pos_x, const float* pos_y, const float* pos_z, const float* vel_x, const float* vel_y, const float* vel_z, const float* acc_x, const float* acc_y, const float* acc_z, const float* pos_yaw, const float* vel_yaw, const uint16_t* command)
{
    return fmav_msg_trajectory_representation_waypoints_pack_to_frame_buf(
        (uint8_t*)buf,
        sysid,
        compid,
        time_usec, valid_points, pos_x, pos_y, pos_z, vel_x, vel_y, vel_z, acc_x, acc_y, acc_z, pos_yaw, vel_yaw, command,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR void mavlink_msg_trajectory_representation_waypoints_decode(const mavlink_message_t* msg, mavlink_trajectory_representation_waypoints_t* payload)
{
    fmav_msg_trajectory_representation_waypoints_decode(payload, msg);
}

#endif // FASTMAVLINK_PYMAVLINK_ENABLED


#endif // FASTMAVLINK_MSG_TRAJECTORY_REPRESENTATION_WAYPOINTS_H
