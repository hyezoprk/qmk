#include "tapdances.h"

td_state_t cur_dance(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (!state->pressed)
            return ST;
        else
            return SH;
    } else if (state->count == 2) {
        if (state->interrupted)
            return STT;
        else if (state->pressed)
            return DH;
        else
            return DT;
    }
    else
        return UNKNOWN;
}

static td_tap_t TD_ESC    = {.is_press_action = true, .state = NONE};
static td_tap_t TD_SPACE  = {.is_press_action = true, .state = NONE};

void esc_finished(tap_dance_state_t *state, void *user_data) {
    TD_ESC.state = cur_dance(state);
    switch (TD_ESC.state) {
        case ST:
            tap_code(KC_ESC);
            break;
        case SH:
            layer_on(3);
            break;
        case DT:
            tap_code(KC_F16); // 바탕화면 보기
            break;
        case DH:
            break;
        case STT:
            tap_code(KC_ESC);
            tap_code(KC_ESC);
            break;
        default:
            break;
    }
}

void esc_reset(tap_dance_state_t *state, void *user_data) {
    switch (TD_ESC.state) {
        case ST:
            break;
        case SH:
            layer_off(3);
            break;
        case DT:
            break;
        case DH:
            break;
        case STT:
            break;
        default:
            break;
    }
    TD_ESC.state = NONE;
}


void space_finished(tap_dance_state_t *state, void *user_data) {
    TD_SPACE.state = cur_dance(state);
    switch (TD_SPACE.state) {
        case ST:
            tap_code(KC_SPACE);
            break;
        case SH:
            layer_on(1);
            register_code(KC_LSFT);
            break;
        case DT:
            tap_code(KC_SPACE);
            tap_code(KC_SPACE);
            break;
        case DH:
            break;
        case STT:
            tap_code(KC_SPACE);
            tap_code(KC_SPACE);
            break;
        default:
            break;
    }
}

void space_reset(tap_dance_state_t *state, void *user_data) {
    switch (TD_SPACE.state) {
        case ST:
            break;
        case SH:
            unregister_code(KC_LSFT);
            layer_off(1);
            break;
        case DT:
            break;
        case DH:
            break;
        case STT:
            break;
        default:
            break;
    }
    TD_SPACE.state = NONE;
}

tap_dance_action_t tap_dance_actions[] = {
    [ESC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, esc_finished, esc_reset),
    [SPACE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, space_finished, space_reset),
};

// Set a long-ish tapping term for tap-dance keys
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(SPACE):
            return 130;
        default:
            return TAPPING_TERM;
    }
}
