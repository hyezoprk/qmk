#include "quantum.h"

void leader_end_user(void) {
    if (leader_sequence_one_key(KC_F)) {
        tap_code16(HYPR(KC_F));
    } else if (leader_sequence_one_key(KC_C)) {
        tap_code16(HYPR(KC_C));
        // SEND_STRING("console.log()"SS_TAP(X_LEFT));
    } else if (leader_sequence_one_key(KC_G)) {
        tap_code16(HYPR(KC_G));
    } else if (leader_sequence_one_key(KC_H)) {
        tap_code16(HYPR(KC_H));
    } else if (leader_sequence_one_key(KC_J)) {
        tap_code16(HYPR(KC_J));
    } else if (leader_sequence_one_key(KC_K)) {
        tap_code16(HYPR(KC_K));
    } else if (leader_sequence_one_key(KC_A)) {
        tap_code16(HYPR(KC_A));
    } else if (leader_sequence_one_key(KC_S)) {
        tap_code16(HYPR(KC_S));
    } else if (leader_sequence_one_key(KC_D)) {
        tap_code16(HYPR(KC_D));
    } else if (leader_sequence_one_key(KC_L)) {
        tap_code16(HYPR(KC_L));
    } else if (leader_sequence_one_key(KC_Q)) {
        tap_code16(HYPR(KC_Q));
    } else if (leader_sequence_one_key(KC_W)) {
        tap_code16(HYPR(KC_W));
    } else if (leader_sequence_one_key(KC_E)) {
        tap_code16(HYPR(KC_E));
    } else if (leader_sequence_one_key(KC_R)) {
        tap_code16(HYPR(KC_R));
    } else if (leader_sequence_one_key(KC_T)) {
        tap_code16(HYPR(KC_T));
    } else if (leader_sequence_one_key(KC_Z)) {
        tap_code16(HYPR(KC_Z));
    } else if (leader_sequence_one_key(KC_X)) {
        tap_code16(HYPR(KC_X));
    } else if (leader_sequence_one_key(KC_V)) {
        tap_code16(HYPR(KC_V));
    } else if (leader_sequence_one_key(KC_B)) {
        tap_code16(HYPR(KC_B));
    } else if (leader_sequence_two_keys(KC_G, KC_Q)) {
        tap_code16(LSA(KC_Q));
    } else if (leader_sequence_two_keys(KC_G, KC_W)) {
        tap_code16(LSA(KC_W));
    } else if (leader_sequence_two_keys(KC_G, KC_E)) {
        tap_code16(LSA(KC_E));
    } else if (leader_sequence_two_keys(KC_G, KC_R)) {
        tap_code16(LSA(KC_R));
    } else if (leader_sequence_two_keys(KC_G, KC_T)) {
        tap_code16(LSA(KC_T));
    } else if (leader_sequence_two_keys(KC_G, KC_Y)) {
        tap_code16(LSA(KC_Y));
    } else if (leader_sequence_two_keys(KC_G, KC_U)) {
        tap_code16(LSA(KC_U));
    } else if (leader_sequence_two_keys(KC_G, KC_I)) {
        tap_code16(LSA(KC_I));
    } else if (leader_sequence_two_keys(KC_G, KC_O)) {
        tap_code16(LSA(KC_O));
    } else if (leader_sequence_two_keys(KC_G, KC_P)) {
        tap_code16(LSA(KC_P));
    } else if (leader_sequence_two_keys(KC_G, KC_A)) {
        tap_code16(LSA(KC_A));
    } else if (leader_sequence_two_keys(KC_G, KC_S)) {
        tap_code16(LSA(KC_S));
    } else if (leader_sequence_two_keys(KC_G, KC_D)) {
        tap_code16(LSA(KC_D));
    } else if (leader_sequence_two_keys(KC_G, KC_F)) {
        tap_code16(LSA(KC_F));
    } else if (leader_sequence_two_keys(KC_G, KC_G)) {
        tap_code16(LSA(KC_G));
    } else if (leader_sequence_two_keys(KC_G, KC_H)) {
        tap_code16(LSA(KC_H));
    } else if (leader_sequence_two_keys(KC_G, KC_J)) {
        tap_code16(LSA(KC_J));
    } else if (leader_sequence_two_keys(KC_G, KC_K)) {
        tap_code16(LSA(KC_K));
    } else if (leader_sequence_two_keys(KC_G, KC_L)) {
        tap_code16(LSA(KC_L));
    } else if (leader_sequence_two_keys(KC_G, KC_Z)) {
        tap_code16(LSA(KC_Z));
    } else if (leader_sequence_two_keys(KC_G, KC_X)) {
        tap_code16(LSA(KC_X));
    } else if (leader_sequence_two_keys(KC_G, KC_C)) {
        tap_code16(LSA(KC_C));
    } else if (leader_sequence_two_keys(KC_G, KC_V)) {
        tap_code16(LSA(KC_V));
    } else if (leader_sequence_two_keys(KC_G, KC_B)) {
        tap_code16(LSA(KC_B));
    } else if (leader_sequence_two_keys(KC_G, KC_N)) {
        tap_code16(LSA(KC_N));
    } else if (leader_sequence_two_keys(KC_G, KC_M)) {
        tap_code16(LSA(KC_M));
    }
}
