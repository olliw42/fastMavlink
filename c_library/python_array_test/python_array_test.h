//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_PYTHON_ARRAY_TEST_H
#define FASTMAVLINK_PYTHON_ARRAY_TEST_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef FASTMAVLINK_BUILD_DATE
#define FASTMAVLINK_BUILD_DATE  "Sat Feb 27 2021"
#endif

#ifdef FASTMAVLINK_DIALECT_VERSION
#define FASTMAVLINK_DIALECT_VERSION  3  // version as specified in xml file
#endif


//------------------------------
//-- Message credentials
//-- crc, min length, max length, flag, target sysid offset, target compid offset
//------------------------------

#include "python_array_test_msg_entries.h"

#ifndef FASTMAVLINK_MESSAGE_CRCS
#define FASTMAVLINK_MESSAGE_CRCS  FASTMAVLINK_MSG_ENTRIES
#endif


#include "../fastmavlink.h"
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED
#include "../fastmavlink_pymavlink.h"
#endif


//------------------------------
//-- Enum definitons
//------------------------------




//------------------------------
//-- Message definitions
//------------------------------

#include "./mavlink_msg_array_test_0.h"
#include "./mavlink_msg_array_test_1.h"
#include "./mavlink_msg_array_test_3.h"
#include "./mavlink_msg_array_test_4.h"
#include "./mavlink_msg_array_test_5.h"
#include "./mavlink_msg_array_test_6.h"
#include "./mavlink_msg_array_test_7.h"
#include "./mavlink_msg_array_test_8.h"


//------------------------------
//-- Dialect includes
//------------------------------

#include "../common/common.h"


#ifdef __cplusplus
}
#endif

#endif // FASTMAVLINK_PYTHON_ARRAY_TEST_H
