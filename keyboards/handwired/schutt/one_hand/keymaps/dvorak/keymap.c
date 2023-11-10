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

#define TAB_PRV G(S(DV_LBRC))
#define TAB_NXT G(S(DV_RBRC))
#define APP_MAN G(A(KC_ESC))
#define APP_WIN G(KC_GRV)
#define LK_SCRN G(C(DV_Q))
#define SCRNCAP G(S(KC_4))


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[L_BASE] = LAYOUT(
		KC_TAB,  DV_A,    DV_T,    DV_H,    DV_S,    DV_D,    KC_UP,
		KC_ESC,  DV_O,    DV_N,    DV_R,    DV_E,    DV_I,    KC_LEFT,
		KC_LSFT, DV_U,    DV_M,    DV_L,    DV_F,    DV_C,    KC_DOWN,
		    KC_LCTL, KC_LALT, KC_LGUI, LT_ENT,  LT_SPC,       KC_RGHT
	),
	[L_2] = LAYOUT(
		KC_GRV,  DV_X,    DV_W,    DV_P,    DV_V,    DV_J,    _______,
		KC_BSPC, DV_QUOT, DV_B,    DV_G,    DV_Y,    DV_K,    _______,
		_______, DV_COMM, DV_DOT,  DV_SLSH, DV_Z,    DV_Q,    _______,
    		_______, _______, _______, LT2_ENT, _______,      _______
	),
	[L_NUM] = LAYOUT(
		_______, DV_EQL,  KC_7,    KC_8,    KC_9,    DV_LBRC, KC_PGUP,
		KC_DEL,  DV_MINS, KC_4,    KC_5,    KC_6,    DV_RBRC, KC_HOME,
		_______, DV_BSLS, KC_1,    KC_2,    KC_3,    KC_0,    KC_PGDN,
    		_______, _______, _______, _______, LT2_SPC,      KC_END
	),
	[L_SYS] = LAYOUT(
		APP_WIN, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_VOLU,
		APP_MAN, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_MPRV,
		SCRNCAP, KC_F11,  KC_F12,  TAB_PRV, TAB_NXT, KC_MPLY, KC_VOLD,
    		_______, _______, _______, _______, _______,      KC_MNXT
	)
};
