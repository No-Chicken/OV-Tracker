#ifndef __USER_TASKSINIT_H__
#define __USER_TASKSINIT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "FreeRTOS.h"
#include "cmsis_os.h"

#define SCRRENEW_DEPTH	5

extern osMessageQueueId_t Key_MessageQueue;

void User_Tasks_Init(void);

#ifdef __cplusplus
}
#endif

#endif

