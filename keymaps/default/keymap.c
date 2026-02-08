#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT(
       

        LCTL(KC_F),         LCTL(KC_T),        LCTL(KC_PGUP),       LCTL(KC_L),
        LCTL(KC_B),         LALT(KC_LEFT),     LCTL(KC_PGDN),       LALT(KC_RGHT),
        LCTL(KC_R),         KC_LEFT,           LSFT(KC_SPC),        KC_RGHT,
        LCTL(LSFT(KC_T)),   KC_F,              KC_SPC,              LCTL(KC_J),
        LCTL(KC_W),         LCTL(KC_H),        LCTL(LSFT(KC_N)),    LCTL(KC_1)

    )
};

// to compile- qmk compile -kb browser_5x4 -km default


// arranged accordiengly
// LCTL(KC_F),         LCTL(KC_T),        LCTL(KC_PGUP),       LCTL(KC_L),
// LCTL(KC_B),         LALT(KC_LEFT),     LCTL(KC_PGDN),       LALT(KC_RGHT),
// LCTL(KC_R),         KC_LEFT,           LSFT(KC_SPC),        KC_RGHT,
// LCTL(LSFT(KC_T)),   KC_F,              KC_SPC,              LCTL(KC_J),
// LCTL(KC_W),         LCTL(KC_H),        LCTL(LSFT(KC_N)),    LCTL(KC_1)

 // top row starts from bottom

        // LCTL(KC_W),         LCTL(KC_H),        LCTL(LSFT(KC_N)),    LCTL(KC_1),
        // LCTL(LSFT(KC_T)),   KC_F,              KC_SPC,              LCTL(KC_J),
        // LCTL(KC_R),         KC_LEFT,           LSFT(KC_SPC),        KC_RGHT,
        // LCTL(KC_B),         LALT(KC_LEFT),     LCTL(KC_PGDN),       LALT(KC_RGHT),
        // LCTL(KC_F),         LCTL(KC_T),        LCTL(KC_PGUP),       LCTL(KC_L)
