#pragma once
#include "quantum.h"

#ifdef KEY_OVERRIDE_ENABLE
#    include "features/overrides.h"
#endif
#ifdef TAP_DANCE_ENABLE
#    include "features/tapdances.h"
#endif

bool       process_record_keymap(uint16_t keycode, keyrecord_t *record);
