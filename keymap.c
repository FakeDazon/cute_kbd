#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_ESC,    KC_C,    KC_U,     KC_T,    KC_E,    KC_BSPC,
    KC_LSFT,   KC_K,    KC_B,     KC_D,    KC_ENT,
    KC_LCTL,   KC_ALT,  KC_SPC,   KC_TRNS, KC_RCTL
  ),
}
