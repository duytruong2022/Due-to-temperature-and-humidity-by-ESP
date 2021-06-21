#ifndef _ALL_INFOR_H_
#define _ALL_INFOR_H_
#include "Arduino.h"
#define BASE_URL "soict-core-01.herokuapp.com"
#define PATH_GET_VERSION ""
#define URI_CHECK_COMMUNICATION "/communication"
#define URI_GET_VERSION "/version"
#define URI_GET_BOARD_ID "/boardId"
#define URI_GET_FIRMWARE "http://soict-core-01.herokuapp.com/updateFirmware" 
#define STATUS_CODE_OKE 200
#define SSID_DEFAULT "SOICT_CORE_BOARD"

#define KEY "Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfaWQiOiI3ZTQ5YmNkZi0xOTA4LTQzMzctOTFjYi0zZThkMzVmNDhjZDUiLCJpYXQiOjE2MTQ5NTcxNTJ9.XIpOhdrGBvv1hXCPBfC65wsS7u-j_U6EFe8z14b6uIE"
#define CONTENT_TYPE "application/json"
#define Platform "key123"

#define URL_TEMP "http://siot.soict.ai/api/devices/esp8266-br4ts/attributes/nhiet-djo-ag6qx"
#define URL_H "http://siot.soict.ai/api/devices/esp8266-br4ts/attributes/djo-am-2wcug"
#define URL_L "http://siot.soict.ai/api/devices/esp8266-br4ts/attributes/djo-am-djat-0so90"
#define URL_CHECK "http://siot.soict.ai/api/platforms/test-v6s6s/verify"
#define URL_DOWN  "http://siot.soict.ai/api/platforms/test-v6s6s/download"

#define MAX_WIDTH 128
#define MAX_HIGHT 64
#endif