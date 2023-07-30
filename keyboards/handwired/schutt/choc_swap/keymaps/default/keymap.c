// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_extras/keymap_dvorak.h"


enum layer_names {
	L_BASE,
	L_NUM,
	L_NAV
};


#define LT_SPC LT(L_NUM, KC_SPC)
#define LT_ENT LT(L_NAV, KC_ENT)


#define TAB_PRV G(S(DV_LBRC))
#define TAB_NXT G(S(DV_RBRC))
#define APP_MAN G(S(KC_ESC))
#define APP_WIN G(KC_GRV)
#define LK_SCRN G(C(DV_Q))
#define SCRNCAP G(S(KC_4))


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[L_BASE] = LAYOUT_ortho_4x10(
		DV_QUOT, DV_COMM, DV_DOT,  DV_P,    DV_Y,    DV_F,    DV_G,    DV_C,    DV_R,    DV_L,
		DV_A,    DV_O,    DV_E,    DV_U,    DV_I,    DV_D,    DV_H,    DV_T,    DV_N,    DV_S,
		DV_SCLN, DV_Q,    DV_J,    DV_K,    DV_X,    DV_B,    DV_M,    DV_W,    DV_V,    DV_Z,
		KC_ESC,  KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, LT_SPC,  LT_ENT,  KC_TAB,  KC_DEL,  KC_BSPC
	),
	[L_NUM] = LAYOUT_ortho_4x10(
		KC_GRV,  DV_QUES, DV_EXLM, DV_LCBR, DV_RCBR, KC_ASTR, KC_7,    KC_8,    KC_9,    DV_BSLS,
		DV_TILD, DV_LABK, DV_RABK, DV_LPRN, DV_RPRN, DV_EQL,  KC_4,    KC_5,    KC_6,    DV_MINS,
		DV_PIPE, DV_HASH, DV_AMPR, DV_LBRC, DV_RBRC, DV_SLSH, KC_1,    KC_2,    KC_3,    DV_PLUS,
		_______, _______, _______, _______, _______, _______, KC_0,    _______, _______, KC_DEL
	),
	[L_NAV] = LAYOUT_ortho_4x10(
		LK_SCRN, XXXXXXX, XXXXXXX, SCRNCAP, KC_VOLU, KC_PGUP, KC_HOME, KC_UP,   KC_END,  XXXXXXX,
		APP_WIN, XXXXXXX, TAB_PRV, TAB_NXT, KC_VOLD, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,
		XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		APP_MAN, _______, _______, _______, _______, _______, _______, _______, _______, _______
	)
};
