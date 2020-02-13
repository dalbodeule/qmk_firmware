#include "rythm_keyboard.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
	KEYMAP(
		KC_A, KC_S, KC_SPC, KC_J, KC_L, KC_SPC,
		KC_D, KC_F, KC_K, KC_NO, KC_COLN, MO(2)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_V, KC_TRNS, KC_TRNS, KC_N,
		KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, DF(0), KC_TRNS, KC_TRNS,
		RGB_TOG, RGB_MOD, KC_NO, DF(1), RESET, KC_TRNS),

};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}