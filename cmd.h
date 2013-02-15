#ifndef __CMD_H
#define __CMD_H


#include "mac_packet.h"
#include "cmd_const.h"

#define CMD_TEST_RADIO				0x00
#define CMD_SET_THRUST_OPENLOOP     0x80
#define CMD_PID_START_MOTORS		0x81
#define CMD_SET_PID_GAINS  			0x82
#define CMD_SET_VEL_PROFILE			0x8C
#define CMD_WHO_AM_I 				0x8D

void cmdSetup(void);
void cmdPushFunc(MacPacket rx_packet);


#endif // __CMD_H