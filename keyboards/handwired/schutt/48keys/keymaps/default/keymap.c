// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_extras/keymap_dvorak.h"

#define DV_TAB  KC_TAB
#define DV_SPC  KC_SPC
#define DV_RET  KC_ENT
#define DV_LSFT KC_LSFT
#define DV_RSFT KC_RSFT
#define DV_DELL KC_BSPC
#define DV_DELR KC_DEL
#define DV_ESC  KC_ESC
#define DV_LCTL KC_LCTL
#define DV_RCTL KC_RCTL
#define DV_LOPT KC_LALT
#define DV_ROPT KC_RALT
#define DV_LCMD KC_LGUI
#define DV_RCMD KC_RGUI

enum layer_names {
	L_BASE,
	L_NUM,
	L_SYM,
	L_NAV,
	L_SYS
};

#define HR_O LCTL_T(DV_O)
#define HR_E LALT_T(DV_E)
#define HR_U LGUI_T(DV_U)

#define HR_H RGUI_T(DV_H)
#define HR_T RALT_T(DV_T)
#define HR_N RCTL_T(DV_N)

#define LTC1 TT(L_NAV)
#define LTC2 TT(L_NUM)
#define LTC3 TT(L_SYM)

#define RTC3 LT(L_NAV, DV_DELR)
#define RTC2 LT(L_SYM, DV_SPC)
#define RTC1 LT(L_SYS, DV_RET)

#define TAB_PRV G(S(DV_LBRC))
#define TAB_NXT G(S(DV_RBRC))
#define APP_MAN G(S(KC_ESC))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[L_BASE] = LAYOUT_12X4(
		DV_TAB,  DV_QUOT, DV_COMM, DV_DOT,  DV_P,    DV_Y,    DV_F,    DV_G,    DV_C,    DV_R,    DV_L,    DV_DELL,
		DV_ESC,  DV_A,    HR_O,    HR_E,    HR_U,    DV_I,    DV_D,    HR_H,    HR_T,    HR_N,    DV_S,    DV_MINS,
		DV_LSFT, DV_SCLN, DV_Q,    DV_J,    DV_K,    DV_X,    DV_B,    DV_M,    DV_W,    DV_V,    DV_Z,    DV_RSFT,
		DV_GRV,  DV_LBRC, DV_RBRC, LTC1,    LTC2,    LTC3,    RTC3,    RTC2,    RTC1,    DV_SLSH, DV_EQL,  DV_BSLS
	),
	[L_NUM] = LAYOUT_12X4(
		_______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, DV_7,    DV_8,    DV_9,    DV_SLSH, _______,
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DV_4,    DV_5,    DV_6,    DV_DOT,  _______,
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DV_1,    DV_2,    DV_3,    DV_PLUS, _______,
		XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, DV_0,    _______, _______, _______, _______
	),
	[L_SYM] = LAYOUT_12X4(
		_______, _______, DV_AMPR, DV_LBRC, DV_RBRC, XXXXXXX, XXXXXXX, DV_AMPR, DV_COLN, DV_PIPE, DV_UNDS, _______,
		_______, DV_PIPE, DV_DLR,  DV_LCBR, DV_RCBR, XXXXXXX, XXXXXXX, DV_LPRN, DV_LCBR, DV_LBRC, DV_LABK, _______,
		_______, DV_COLN, KC_EXLM, DV_AMPR, DV_HASH, XXXXXXX, XXXXXXX, DV_RPRN, DV_RCBR, DV_RBRC, DV_RABK, _______,
		XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______, _______, _______
	),
	[L_NAV] = LAYOUT_12X4(
		_______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_UP,   KC_END,  KC_PGUP, _______,
		_______, XXXXXXX, XXXXXXX, TAB_PRV, TAB_NXT, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______,
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
		XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______
	),
	[L_SYS] = LAYOUT_12X4(
		APP_MAN, XXXXXXX, KC_MNXT, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, KC_F7,   KC_F8,   KC_F9,   KC_F12,  KC_PWR,
		_______, XXXXXXX, KC_MPLY, KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX, KC_F4,   KC_F5,   KC_F6,   KC_F11,  _______,
		_______, XXXXXXX, KC_MPRV, KC_VOLD, XXXXXXX, XXXXXXX, XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F10,  _______,
		XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______
	)
};
