// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_extras/keymap_dvorak.h"


enum layer_names {
	L_BASE,
	L_NUM,
	L_SYM,
	L_NAV
};


#define LT_TAB LT(L_NUM, KC_TAB)
#define LT_SPC LT(L_SYM, KC_SPC)
#define LT_RET LT(L_NAV, KC_ENT)


#define TAB_PRV G(S(DV_LBRC))
#define TAB_NXT G(S(DV_RBRC))
#define APP_MAN G(A(KC_ESC))
#define APP_WIN G(KC_GRV)
#define SCRNCAP G(S(KC_4))


#define OM_LSFT OSM(MOD_LSFT)
#define OM_LCTL OSM(MOD_LCTL)
#define OM_LOPT OSM(MOD_LALT)
#define OM_LCMD OSM(MOD_LGUI)
#define OM_RSFT OSM(MOD_RSFT)
#define OM_RCTL OSM(MOD_RCTL)
#define OM_ROPT OSM(MOD_RALT)
#define OM_RCMD OSM(MOD_RGUI)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[L_BASE] = LAYOUT_ortho_4x10(
		DV_QUOT, DV_COMM, DV_DOT,  DV_P,    DV_Y,    DV_F,    DV_G,    DV_C,    DV_R,    DV_L,
		DV_A,    DV_O,    DV_E,    DV_U,    DV_I,    DV_D,    DV_H,    DV_T,    DV_N,    DV_S,
		DV_SCLN, DV_Q,    DV_J,    DV_K,    DV_X,    DV_B,    DV_M,    DV_W,    DV_V,    DV_Z,
		XXXXXXX, XXXXXXX, XXXXXXX, LT_TAB,  KC_LSFT, LT_SPC,  LT_RET,  XXXXXXX, XXXXXXX, XXXXXXX
	),
	[L_NUM] = LAYOUT_ortho_4x10(
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ASTR, KC_7,    KC_8,    KC_9,    DV_BSLS,
		OM_LSFT, OM_LCTL, OM_LOPT, OM_LCMD, XXXXXXX, DV_AT,   KC_4,    KC_5,    KC_6,    DV_MINS,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DV_SLSH, KC_1,    KC_2,    KC_3,    DV_EQL,
		_______, _______, _______, XXXXXXX, _______, KC_SPC,  KC_0,    _______, _______, _______
	),
	[L_SYM] = LAYOUT_ortho_4x10(
    KC_GRV,  _______, _______, DV_LCBR, DV_RCBR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_TILD, DV_QUES, KC_EXLM, DV_LPRN, DV_RPRN, XXXXXXX, OM_RCMD, OM_ROPT, OM_RCTL, OM_RSFT,
    _______, KC_PIPE, KC_AMPR, DV_LBRC, DV_RBRC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		_______, _______, _______, KC_ESC,  KC_BSPC, XXXXXXX, KC_ENT,  _______, _______, _______
	),
	[L_NAV] = LAYOUT_ortho_4x10(
		APP_WIN, XXXXXXX, XXXXXXX, SCRNCAP, XXXXXXX, KC_VOLU, KC_HOME, KC_UP,   KC_END,  KC_PGUP,
		KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX, KC_VOLD, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,
		XXXXXXX, XXXXXXX, TAB_PRV, TAB_NXT, XXXXXXX, KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX,
		_______, _______, _______, APP_MAN, _______, KC_SPC,  XXXXXXX, _______, _______, _______
	)
};
