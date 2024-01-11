// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _BASE = 0,
    _NUM,
    _SYM,
    _NAV,
    _MEDIA
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x5_2(
        KC_Q,           KC_W,           KC_E,           KC_R,               KC_T,               KC_Y,               KC_U,               KC_I,           KC_O,           KC_P,
        LGUI_T(KC_A),   LALT_T(KC_S),   LCTL_T(KC_D),   LSFT_T(KC_F),       KC_G,               KC_H,               LSFT_T(KC_J),       LCTL_T(KC_K),   LALT_T(KC_L),   LGUI_T(KC_QUOT),
        KC_Z,           KC_X,           KC_C,           KC_V,               KC_B,               KC_N,               KC_M,               KC_COMM,        KC_DOT,         KC_SLSH,
                                                        LT(_MEDIA,KC_TAB),  LT(_NAV,KC_SPC),    LT(_SYM,KC_ESC),    LT(_NUM,KC_BSPC)
    ),

    [_NUM] = LAYOUT_split_3x5_2(
        KC_SLSH,    KC_7,       KC_8,       KC_9,       KC_ASTR,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        KC_MINS,    KC_4,       KC_5,       KC_6,       KC_PLUS,    XXXXXXX,    KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LGUI,
        KC_PERC,    KC_1,       KC_2,       KC_3,       KC_PERC,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_ALGR,    XXXXXXX,
                                            KC_0,       KC_DOT,     XXXXXXX,    XXXXXXX
    ),

    [_SYM] = LAYOUT_split_3x5_2(
        KC_GRV,     KC_LABK,    KC_RABK,    KC_DQUO,    KC_AMPR,    KC_AT,      KC_LBRC,    KC_RBRC,    KC_DLR,     KC_PERC,
        KC_COLN,    KC_MINS,    KC_PLUS,    KC_EQL,     KC_SCLN,    KC_PIPE,    KC_LPRN,    KC_RPRN,    KC_EXLM,    KC_QUES,
        KC_TILD,    KC_SLASH,   KC_ASTR,    KC_HASH,    KC_BSLS,    XXXXXXX,    KC_LCBR,    KC_RCBR,    KC_DOT,     KC_CIRC,
                                            KC_UNDS,    KC_MINS,    XXXXXXX,    XXXXXXX
    ),

    [_NAV] = LAYOUT_split_3x5_2(
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    U_RDO,      U_PST,      U_CPY,      U_CUT,      U_UND,
        KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    XXXXXXX,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_ENT,
        XXXXXXX,    KC_ALGR,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     KC_ENT,
                                            XXXXXXX,    XXXXXXX,    CW_TOGG,     KC_DEL
    ),

    [_MEDIA] = LAYOUT_split_3x5_2(
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    XXXXXXX,    XXXXXXX,    KC_VOLD,    KC_VOLU,    XXXXXXX,    XXXXXXX,
        XXXXXXX,    KC_ALGR,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                            XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
    )
};
