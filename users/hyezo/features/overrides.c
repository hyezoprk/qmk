#include "overrides.h"

const key_override_t up_key    = ko_make_basic(MOD_MASK_CTRL, KC_W, KC_UP);
const key_override_t down_key  = ko_make_basic(MOD_MASK_CTRL, KC_S, KC_DOWN);
const key_override_t left_key  = ko_make_basic(MOD_MASK_CTRL, KC_A, KC_LEFT);
const key_override_t right_key = ko_make_basic(MOD_MASK_CTRL, KC_D, KC_RIGHT);
const key_override_t drag_up_key        = ko_make_basic(MOD_MASK_CTRL, KC_I, LSFT(KC_UP));
const key_override_t drag_down_key      = ko_make_basic(MOD_MASK_CTRL, KC_K, LSFT(KC_DOWN));
const key_override_t drag_left_key      = ko_make_basic(MOD_MASK_CTRL, KC_J, LSFT(KC_LEFT));
const key_override_t drag_right_key     = ko_make_basic(MOD_MASK_CTRL, KC_L, LSFT(KC_RIGHT));
const key_override_t opt_up_key         = ko_make_basic(MOD_MASK_ALT, KC_I, LOPT(KC_UP));
const key_override_t opt_down_key       = ko_make_basic(MOD_MASK_ALT, KC_K, LOPT(KC_DOWN));
const key_override_t opt_left_key       = ko_make_basic(MOD_MASK_ALT, KC_J, LOPT(KC_LEFT));
const key_override_t opt_right_key      = ko_make_basic(MOD_MASK_ALT, KC_L, LOPT(KC_RIGHT));
const key_override_t cmd_up_key         = ko_make_basic(MOD_MASK_GUI, KC_I, LCMD(KC_UP));
const key_override_t cmd_down_key       = ko_make_basic(MOD_MASK_GUI, KC_K, LCMD(KC_DOWN));
const key_override_t cmd_left_key       = ko_make_basic(MOD_MASK_GUI, KC_J, LCMD(KC_LEFT));
const key_override_t cmd_right_key      = ko_make_basic(MOD_MASK_GUI, KC_L, LCMD(KC_RIGHT));
const key_override_t reverse_ac_key      = ko_make_basic(MOD_MASK_ALT, KC_Q, LOPT(KC_1));

const key_override_t *key_overrides[] = {
   [OVR_0] = &up_key,
   [OVR_1] = &down_key,
   [OVR_2] = &left_key,
   [OVR_3] = &right_key,
   [OVR_4] = &drag_up_key,
   [OVR_5] = &drag_down_key,
   [OVR_6] = &drag_left_key,
   [OVR_7] = &drag_right_key,
   [OVR_8] = &opt_up_key,
   [OVR_9] = &opt_down_key,
   [OVR_10] = &opt_left_key,
   [OVR_11] = &opt_right_key,
   [OVR_12] = &cmd_up_key,
   [OVR_13] = &cmd_down_key,
   [OVR_14] = &cmd_left_key,
   [OVR_15] = &cmd_right_key,
   [OVR_16] = &reverse_ac_key,
};
