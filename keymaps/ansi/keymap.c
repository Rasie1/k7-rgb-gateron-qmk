/*
Copyright 2020 Dimitris Mantzouranis

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

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _BASE,
    _FN1,
    _FN2,
    _FN3,
};

//       [_BASE] = { {   KC_GESC,   KC_1,      KC_2,      KC_3,    KC_4,     KC_5,     KC_6,     KC_7,    KC_8,    KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC },
//                   {   KC_TAB,    KC_Q,      KC_W,      KC_E,    KC_R,     KC_T,     KC_Y,     KC_U,    KC_I,    KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLASH },
//                   {   KC_CAPS,   KC_A,      KC_S,      KC_D,    KC_F,     KC_G,     KC_H,     KC_J,    KC_K,    KC_L,      KC_SCLN,   KC_QUOT,   KC_NO,     KC_ENT },
//                   {   KC_LSFT,   KC_NO,     KC_Z,      KC_X,    KC_C,     KC_V,     KC_B,     KC_N,    KC_M,    KC_COMM,   KC_DOT,    KC_SLSH,   KC_RSFT,   KC_UP },
//                   {   KC_LCTL,   KC_LGUI,   KC_LALT,   KC_SPC,  KC_RCTRL, MO(_FN1), MO(_FN2), KC_LEFT, KC_DOWN, KC_RIGHT,  KC_PGDN,   KC_PGUP,   KC_HOME,   KC_DEL }
//                 },

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

      [_BASE] = { {   KC_ESC,    KC_1,      KC_2,      KC_3,    KC_4,     KC_5,     KC_6,     KC_7,    KC_8,    KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC },
                  {   KC_TAB,    KC_Q,      KC_W,      KC_E,    KC_R,     KC_T,     KC_Y,     KC_U,    KC_I,    KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLASH },
                  {   KC_CAPS,   KC_A,      KC_S,      KC_D,    KC_F,     KC_G,     KC_H,     KC_J,    KC_K,    KC_L,      KC_SCLN,   KC_QUOT,   KC_NO,     KC_ENT },
                  {   KC_LSFT,   KC_NO,     KC_Z,      KC_X,    KC_C,     KC_V,     KC_B,     KC_N,    KC_M,    KC_COMM,   KC_DOT,    KC_SLSH,   KC_RSFT,   KC_UP },
                  {   KC_LCTL,   KC_LGUI,   KC_LALT,   KC_SPC,  KC_RALT,  KC_RGUI,  KC_RCTRL, KC_LEFT, KC_DOWN, KC_RIGHT,  MO(_FN1),  MO(_FN2),  MO(_FN3),   KC_DEL }
                },
      [_FN1] = {  {   KC_GRV,    KC_F1,     KC_F2,     KC_F3,   KC_F4,    KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,     KC_F10,    KC_F11,    KC_F12,    KC_NO    },
                  {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_SLCK, KC_PAUS,   KC_INSERT, KC_PSCREEN,KC_NO,     KC_NO    },
                  {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_SLEP,   KC_NO,     KC_NO,     KC_NO,     KC_NO    },
                  {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_PGUP  },
                  {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   RESET,    KC_HOME, KC_PGDN, KC_END,    KC_NO,     KC_NO,     KC_NO,     KC_NO    }
               },
      [_FN2] = {  {   KC_GRV,    KC_BRID,   KC_BRIU,   KC_APP,  KC_NO,    RGB_VAD, RGB_VAI,  KC_MPRV, KC_MPLY, KC_MNXT,   KC_MUTE,   KC_VOLD,   KC_VOLU,   KC_NO    },
                  {   RESET,     KC_NO,     KC_NO,     KC_NO,   RGB_M_R,  KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     RGB_SPD,   RGB_SPI,   KC_NO     },
                  {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO    },
                  {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   RGB_RMOD,  RGB_MOD,   KC_NO,     KC_NO,     RGB_HUI  },
                  {   KC_GRV,    KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   RESET,    RGB_SAD, RGB_HUD, RGB_SAI,   KC_NO,     KC_NO,     KC_NO,     RGB_TOG  }
               },
      [_FN3] = {  {   KC_GRV,    KC_F12,    KC_F11,    KC_F10,  KC_F9,    KC_F8,   KC_F7,    KC_F6,   KC_F5,   KC_F4,     KC_F3,     KC_F2,     KC_F1,     KC_BTN2  },
                  {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_BTN1  },
                  {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO    },
                  {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_MS_U  },
                  {   KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   RESET,    KC_MS_L, KC_MS_D, KC_MS_R,   KC_NO,     KC_NO,     KC_NO,     KC_NO    }
               },
};

bool dip_switch_update_user(uint8_t index, bool active){
  switch(index){
    case 0:
      if(active){ //BT mode
// do stuff
      }
      else{ //Cable mode
// do stuff
      }
      break;
    case 1:
      if(active){ // Win/Android mode
// do stuff
      }
      else{ // Mac/iOS mode
// do stuff
      }
      break;
  }
  return true;
}
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  //debug_enable=true;
  //debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}