#include "quantum.h"
#include "hyezo.h"

// Keymap-specific process_record_user()
__attribute__((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    return true;
}

// 유저 인터페이스
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keymap(keycode, record)) return false;

    switch (keycode) {
        case LT(1, QK_LEAD):
            if (record->tap.count && record->event.pressed) {
                leader_start();
                return false;
            }
            return true;

        case LT(0, KC_NO):
            if (record->tap.count && record->event.pressed) {
                tap_code(KC_SPACE);
            } else if (record->event.pressed) {
                layer_on(1);
                register_mods(MOD_BIT(KC_RSFT));
            } else {
                unregister_mods(MOD_BIT(KC_RSFT));
                layer_off(1);
            }
            return false;
    }
    return true;
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LCTL_T(KC_TAB):
            // Immediately select the hold action when another key is pressed.
            return true;
        case LT(1, QK_LEAD):
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}
