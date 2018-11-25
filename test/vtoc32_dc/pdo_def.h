/* 
 * SOEM EtherCAT exmaple
 * Ported to raspberry pi by Ho Tam - thanhtam.h[at]gmail.com 
 */

#ifndef _PDO_DEF_
#define _PDO_DEF_

#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>
#include <pthread.h>
#include <math.h>


typedef struct PACKED
{
		//clpham:
		uint8		Valves1To8;
		uint8		Valves9To16;
		uint8		Valves17To24;
		uint8		Valves25To32;
} out_XMC4800_t;

typedef struct PACKED
{
		uint8		Valves1To8;
		uint8		Valves9To16;
		uint8		Valves17To24;
		uint8		Valves25To32;
		uint32		TimeStamp;
} in_XMC4800_t;

typedef struct
{
	out_XMC4800_t 	out_data;
	in_XMC4800_t 	in_data;
} slave_XMC4800_t;

typedef struct
{
	out_XMC4800_t 	*ptout_data;
	in_XMC4800_t 	*ptin_data;
} slave_XMC4800_pt;



#endif //_PDO_DEF_

