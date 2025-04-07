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

/*
 qmk compile -kb crkbd/rev1 -km internetofsteve-corny-1
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
      // row 1
      KC_GRAVE, KC_Q, KC_W, KC_E, KC_R, KC_T, /*||*/ KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
      // row 2
      KC_TAB,  MT(MOD_LCTL, KC_A), MT(MOD_LALT, KC_S), MT(MOD_LGUI, KC_D), MT(MOD_LSFT, KC_F), KC_G, /*||*/ KC_H, MT(MOD_LSFT, KC_J), MT(MOD_LGUI, KC_K), MT(MOD_LALT, KC_L), MT(MOD_LCTL, KC_SCLN), KC_QUOT,
      // row 3
      XXXXXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, /*||*/ KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ESC,
      // thumbs
      MO(3), MO(1), LT(3, KC_SPC), /*||*/ KC_ENT, MO(2), KC_BSPC,
  ),

    [1] = LAYOUT_split_3x6_3(
  //|-------------------+-------------------+-------------------+-------------------+-------------------+-------------------|        |-------------------+---------------------+---------------------------+-----------------------+------------------------+-------------------|
           XXXXXXX,           XXXXXXX,             KC_7,               KC_8,               KC_9,               KC_0,                         KC_GRAVE,          KC_LBRC,                  KC_RBRC,                 KC_LPRN,                 KC_RPRN,             KC_BSPC,
  //|-------------------+-------------------+-------------------+-------------------+-------------------+-------------------|        |-------------------+---------------------+---------------------------+-----------------------+------------------------+-------------------|
           KC_TAB,            MOD_LCTL,      MT(MOD_LALT, KC_4), MT(MOD_LGUI, KC_5), MT(MOD_LSFT, KC_6),      XXXXXXX,                       KC_LCBR,     MT(MOD_LSFT, KC_MINS),    MT(MOD_LGUI, KC_PLUS),   MT(MOD_LALT, KC_EQL),    MT(MOD_LCTL, KC_BSLS),    KC_QUOT,
  //|-------------------+-------------------+-------------------+-------------------+-------------------+-------------------|        |-------------------+---------------------+---------------------------+-----------------------+------------------------+-------------------|
           XXXXXXX,           XXXXXXX,             KC_1,               KC_2,               KC_3,              XXXXXXX,                       KC_RCBR,        KC_UNDS,                  KC_LT,                      KC_GT,                   KC_SLSH,            KC_ESC,
  //|-------------------+-------------------+-------------------+-------------------+-------------------+-------------------|        |-------------------+---------------------+---------------------------+-----------------------+------------------------+-------------------|
                                                                       KC_0,            XXXXXXX,             KC_SPC,                       KC_ENT,             KC_DEL,             KC_BSPC
                                                              //|-------------------+-------------------+-------------------|        |-------------------+-------------------+-------------------|
  ),

    [2] = LAYOUT_split_3x6_3(
  //|-------------------+-------------------+-------------------+-------------------+-------------------+-------------------|        |-------------------+-------------------+-------------------+-------------------+----------------------+-------------------|
           XXXXXXX,           XXXXXXX,             KC_AMPERSAND,       KC_ASTERISK,        XXXXXXX,            XXXXXXX,                     XXXXXXX,            XXXXXXX,             XXXXXXX,            XXXXXXX,             XXXXXXX,            KC_BSPC,
  //|-------------------+-------------------+-------------------+-------------------+-------------------+-------------------|        |-------------------+-------------------+-------------------+-------------------+----------------------+-------------------|
           KC_TAB,           XXXXXXX,             KC_DOLLAR,          KC_PERCENT,     KC_CIRCUMFLEX,         XXXXXXX,                     XXXXXXX,            XXXXXXX,             XXXXXXX,            XXXXXXX,             XXXXXXX,            XXXXXXX,
  //|-------------------+-------------------+-------------------+-------------------+-------------------+-------------------|        |-------------------+-------------------+-------------------+-------------------+----------------------+-------------------|
           XXXXXXX,           XXXXXXX,             KC_EXCLAIM,          KC_AT,            KC_HASH,            XXXXXXX,                     XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,             XXXXXXX,             KC_ESC,
  //|-------------------+-------------------+-------------------+-------------------+-------------------+-------------------|        |-------------------+-------------------+-------------------+-------------------+----------------------+-------------------|
                                                                      XXXXXXX,            XXXXXXX,             KC_SPC,                       KC_ENT,             XXXXXXX,           XXXXXXX
                                                              //|-------------------+-------------------+-------------------|        |-------------------+-------------------+-------------------|
  ),

  [3] = LAYOUT_split_3x6_3(
    // row 1
    KC_GRAVE, XXXXXXX, KC_UP, XXXXXXX, XXXXXXX, KC_BRMU, /*||*/   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // row 2
    KC_TAB, MOD_LCTL, MOD_LALT, MOD_LGUI, MOD_LSFT, XXXXXXX, /*||*/ KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT, XXXXXXX, XXXXXXX,
    // row 3
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC, /*||*/   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, KC_ESC,
    // thumbs
    XXXXXXX, XXXXXXX, XXXXXXX, /*||*/ KC_ENT, KC_DEL, KC_BSPC
  ),
  
};
