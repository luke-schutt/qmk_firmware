// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_extras/keymap_dvorak.h"


enum layer_names {
	L_BASE,
	L_2,
	L_NUM,
	L_SYS
};


#define LT_SPC LT(L_2, KC_SPC)
#define LT_ENT LT(L_NUM, KC_ENT)

#define LT2_SPC LT(L_SYS, KC_SPC)
#define LT2_ENT LT(L_SYS, KC_ENT)

#define TAB_PRV G(S(KC_LBRC))
#define TAB_NXT G(S(KC_RBRC))
#define APP_MAN G(A(KC_ESC))
#define APP_WIN G(KC_GRV)
#define LK_SCRN G(C(KC_Q))
#define SCRNCAP G(S(KC_4))


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[L_BASE] = LAYOUT(
		KC_TAB,  KC_A,    KC_T,    KC_H,    KC_S,    KC_D,    KC_UP,
		KC_ESC,  KC_O,    KC_N,    KC_R,    KC_E,    KC_I,    KC_LEFT,
		KC_LSFT, KC_U,    KC_M,    KC_L,    KC_F,    KC_C,    KC_DOWN,
		    KC_LCTL, KC_LALT, KC_LGUI, LT_ENT,  LT_SPC,       KC_RGHT
	),
	[L_2] = LAYOUT(
		KC_GRV,  KC_X,    KC_W,    KC_P,    KC_V,    KC_J,    _______,
		KC_BSPC, KC_QUOT, KC_B,    KC_G,    KC_Y,    KC_K,    _______,
		_______, KC_COMM, KC_DOT,  KC_SLSH, KC_Z,    KC_Q,    _______,
    		_______, _______, _______, LT2_ENT, _______,      _______
	),
	[L_NUM] = LAYOUT(
		_______, KC_EQL,  KC_7,    KC_8,    KC_9,    KC_LBRC, KC_PGUP,
		KC_DEL,  KC_MINS, KC_4,    KC_5,    KC_6,    KC_RBRC, KC_HOME,
		_______, KC_BSLS, KC_1,    KC_2,    KC_3,    KC_0,    KC_PGDN,
    		_______, _______, _______, _______, LT2_SPC,      KC_END
	),
	[L_SYS] = LAYOUT(
		APP_WIN, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_VOLU,
		APP_MAN, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_MPRV,
		SCRNCAP, KC_F11,  KC_F12,  TAB_PRV, TAB_NXT, KC_MPLY, KC_VOLD,
    		_______, _______, _______, _______, _______,      KC_MNXT
	)
};
