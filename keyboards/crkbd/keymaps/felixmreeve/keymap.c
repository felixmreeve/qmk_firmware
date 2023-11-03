/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// fancy keys
// gui - super/windows/command
#define F_GUI(x) MT(MOD_LGUI, x)
// left alt
#define F_ALT(x) MT(MOD_LALT, x)
// left ctrl
#define F_CTL(x) MT(MOD_LCTL, x)
// left shift
#define F_SFT(x) MT(MOD_LSFT, x)

// media layer
#define F_MED(x) LT(1, x)
// navigation layer
#define F_NAV(x) LT(2, x)
// mouse layer
#define F_MOU(x) LT(3, x)
// symbol layer
#define F_SYM(x) LT(4, x)
// number layer
#define F_NUM(x) LT(5, x)
// function layer
#define F_FUN(x) LT(6, x)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // BASE layer
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------.  ,-----------------------------------------------------------------------.
         XXXXXXX,       KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,          KC_J,       KC_L,       KC_U,       KC_Y,      KC_P,     XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,F_SUP(KC_A),F_ALT(KC_R),F_CTL(KC_S),F_SFT(KC_T),       KC_G,          KC_M,F_SFT(KC_N),F_CTL(KC_E),F_ALT(KC_I),F_GUI(KC_O),    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,       KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,          KC_K,       KC_H,    KC_COMM,     KC_DOT,    KC_SLSH,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
                                   F_MED(KC_ESC),F_NAV(TL_SPC),F_MOU(KC_TAB),  F_SYM(KC_ENT),F_NUM(KC_BSPC),F_FUN(KC_DEL)
                                      //`-----------------------------------'  `-----------------------------------'
  ),
  // MEDIA layer
  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------.  ,-----------------------------------------------------------------------.
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,       RGB_TOG,    RGB_MOD,    RGB_HUI,    RGB_SAI,    RGB_VAI,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    XXXXXXX,       QK_BOOT,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_MSTP,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
                                               KC_NO,    XXXXXXX,    XXXXXXX,       KC_MUTE,    KC_VOLD,    KC_VOLU
                                      //`-----------------------------------'  `-----------------------------------'
  ),

  // NAVIGATION layer
  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------.  ,-----------------------------------------------------------------------.
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX,   KC_PASTE,    KC_COPY,     KC_CUT,    KC_UNDO,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    XXXXXXX,       KC_CAPS,    KC_LEFT,    KC_DOWN,      KC_UP,   KC_RIGHT,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,        KC_INS,    KC_HOME,    KC_PGDN,    KC_PGUP,     KC_END,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
                                             XXXXXXX,      KC_NO,    XXXXXXX,       KC_ENT,    KC_BSPC,    KC_DEL
                                      //`-----------------------------------'  `-----------------------------------'
  ),

  // MOUSE layer
  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------.  ,-----------------------------------------------------------------------.
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX,   KC_PASTE,    KC_COPY,     KC_CUT,    KC_UNDO,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    XXXXXXX,       XXXXXXX,    KC_MS_L,    KC_MS_D,    KC_MS_U,    KC_MS_R,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX,    KC_WH_L,    KC_WH_D,    KC_WH_U,    KC_WH_R,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
                                             XXXXXXX,    XXXXXXX,      KC_NO,       KC_BTN2,    KC_BTN1,    KC_BTN3
                                      //`-----------------------------------'  `-----------------------------------'
  ),
  // SYMBOL layer
  [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------.  ,-----------------------------------------------------------------------.
         XXXXXXX,    KC_LCBR,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RCBR,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    KC_COLN,     KC_DLR,    KC_PERC,    KC_CIRC,    KC_PLUS,       XXXXXXX,    KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LGUI,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    KC_TILD,    KC_EXLM,      KC_AT,    KC_HASH,    KC_PIPE,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
                                             KC_LPRN,    KC_RPRN,    KC_UNDS,         KC_NO,    XXXXXXX,    XXXXXXX
                                      //`-----------------------------------'  `-----------------------------------'
  ),
  // NUMBER layer
  [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------.  ,-----------------------------------------------------------------------.
         XXXXXXX,    KC_LBRC,       KC_7,       KC_8,       KC_9,    KC_RBRC,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    KC_SCLN,       KC_4,       KC_5,       KC_6,     KC_EQL,       XXXXXXX,    KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LGUI,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,     KC_GRV,       KC_1,       KC_2,       KC_3,    KC_BSLS,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
                                              KC_DOT,       KC_0,   KC_MINUS,       XXXXXXX,      KC_NO,    XXXXXXX
                                      //`-----------------------------------'  `-----------------------------------'
  ),
  // FUNCTION layer
  [6] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------.  ,-----------------------------------------------------------------------.
         XXXXXXX,     KC_F12,      KC_F7,      KC_F8,      KC_F9,    KC_PSCR,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,     KC_F11,      KC_F4,      KC_F5,      KC_F6,    KC_SCRL,       XXXXXXX,    KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LGUI,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,     KC_F10,      KC_F1,      KC_F2,      KC_F3,    KC_PAUS,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
                                              KC_APP,      TL_SPC,    KC_TAB,       XXXXXXX,    XXXXXXX,      KC_NO
                                      //`-----------------------------------'  `-----------------------------------'
  ),
  // GAMING/Valorant layer
  [7] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.  ,-----------------------------------------------------.
       KC_ESC,  KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,       KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,       KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_LCTL, KC_BSLS,    KC_Z,    KC_B,    KC_N,       KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                    KC_C ,   KC_V,    KC_X,     KC_ENT, XXXXXXX, KC_RALT
                             //`--------------------------'  `--------------------------'
  )
};


/*
  // TEMPLATE layer
  [***LAYER_INDEX***] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------------.  ,-----------------------------------------------------------------------.
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    XXXXXXX,       XXXXXXX,    KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LGUI,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|  |-----------+-----------+-----------+-----------+-----------+-----------|
                                             XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX,    XXXXXXX,    XXXXXXX
                                      //`-----------------------------------'  `-----------------------------------'
  )
*/
