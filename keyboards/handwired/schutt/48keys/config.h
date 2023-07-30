// Copyright 2023 Luke Schutt (@luke-schutt)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

#define LAYOUT_12X4( \
		k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, \
		k12, k13, k14, k15, k16, k17, k18, k19, k20, k21, k22, k23, \
		k24, k25, k26, k27, k28, k29, k30, k31, k32, k33, k34, k35, \
		k36, k37, k38, k39, k40, k41, k42, k43, k44, k45, k46, k47 \
) { \
		{ k00, k01, k02, k03, k04, k05 }, \
		{ k12, k13, k14, k15, k16, k17 }, \
		{ k24, k25, k26, k27, k28, k29 }, \
		{ k36, k37, k38, k39, k40, k41 }, \
		{ k11, k10, k09, k08, k07, k06 }, \
		{ k23, k22, k21, k20, k19, k18 }, \
		{ k35, k34, k33, k32, k31, k30 }, \
		{ k47, k46, k45, k44, k43, k42 } \
}

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
