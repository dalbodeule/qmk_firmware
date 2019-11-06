#pragma once

#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

#ifndef FLIP_HALF

#define KEYMAP( \
	L00, L01, L02,   R00, R01, R02, \
	L10, L11, KC_NO, R10, R11, R12  \
) { \
	{ L00,   L01,   L02   }, \
	{ L10,   L11,   KC_NO }, \
	{ R02,   R01,   R00   }, \
	{ R12,   R11,   R10   }  \
}

#else

#define KEYMAP( \
	L00, L01, L02,   R00, R01, R02, \
	L10, L11, KC_NO, R10, R11, R12  \
) { \
	{ L00,   L01,   L02   }, \
	{ L10,   L11,   KC_NO }, \
	{ R00,   R01,   R02   }, \
	{ R10,   R11,   R12   }  \
}

#endif