 /**
 * @file wirish.h
 * @brief Definitions wirish class for Fireduino
 * @author jiang<jdz@t-chip.com.cn> 
 * @version V1.0
 * @date 2016.02
 * 
 * @par Copyright:
 * Copyright (c) 2016 T-CHIP INTELLIGENCE TECHNOLOGY CO.,LTD. \n\n
 *
 * For more information, please visit website <http://www.t-firefly.com/>, \n\n
 * or email to <service@t-firefly.com>.
 */ 
#ifndef _WIRISH_WIRISH_H_
#define _WIRISH_WIRISH_H_

/* 
 * 20141030. Roger Clark
   Added the block of includes up to avr/interrupt so that stdlib functions like memcpy would be included and could be used.
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <WString.h>
#include <avr/dtostrf.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>


#include <io.h>
#include <bit_constants.h>

#include <HardwareSerial.h>
#include "wiring.h"

#include <stdint.h>
#include "wirish_constants.h"

#include "wirish_math.h"
#include "wirish_analog.h"
#include "wirish_digital.h"
#include "wirish_pulse.h"
#include "wirish_shift.h"
#include "wirish_tone.h"
#include "WInterrupts.h"

typedef unsigned int word;
// typedef uint16 word;// definition from Arduino website, now appears to be incorrect for 32 bit devices

/* Wiring macros and bit defines */

#define true 0x1
#define false 0x0

#define lowByte(w)                     ((w) & 0xFF)
#define highByte(w)                    (((w) >> 8) & 0xFF)
#define bitRead(value, bit)            (((value) >> (bit)) & 0x01)
#define bitSet(value, bit)             ((value) |= (1UL << (bit)))
#define bitClear(value, bit)           ((value) &= ~(1UL << (bit)))
#define bitWrite(value, bit, bitvalue) (bitvalue ? bitSet(value, bit) : \
                                                   bitClear(value, bit))
#define bit(b)                         (1UL << (b))

// Roger Clark. Added _BV macro for AVR compatibility. As requested by @sweetlilmre and @stevestrong
#ifndef _BV
#define _BV(bit) (1 << (bit))
#endif 
#endif

