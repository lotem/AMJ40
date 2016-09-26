#include "keymap_common.h"

// increase readability 
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// function keys
#define MO_1    KC_FN0  // momentary layer 1
#define LT_2SPC KC_FN1  // momentary layer 2, tap space
#define LT_3SPC KC_FN2  // momentary layer 3, tap space
#define MO_4    KC_FN3  // momentary layer 4
#define BL_DEC  KC_FN4  // decrese backlight
#define BL_INC  KC_FN5  // increase backlight
#define BL_TOGG KC_FN6  // toggle backlight
#define BL_STEP KC_FN7

#define KC_EXLM KC_FN16 // !
#define KC_AT   KC_FN17 // @
#define KC_HASH KC_FN18 // #
#define KC_DLR  KC_FN19 // $
#define KC_PERC KC_FN20 // %
#define KC_CIRC KC_FN21 // ^
#define KC_AMPR KC_FN22 // &
#define KC_ASTR KC_FN23 // *
#define KC_LPRN KC_FN24 // (
#define KC_RPRN KC_FN25 // )
#define KC_UNDS KC_FN26 // _
#define KC_PLUS KC_FN27 // +
#define KC_PIPE KC_FN28 // |
#define KC_TILD KC_FN29 // ~

#define RESET   KC_FN31 // ~

// Default
#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[KEYMAPS_COUNT][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Default Layer
     * ,-----------------------------------------------------------.
     * | Tab|  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P | BS |
     * |-----------------------------------------------------------|
     * | Ctrl |  A |  S |  D |  F |  G |  H |  J |  K |  L | Ent   |
     * |-----------------------------------------------------------|
     * | LSft   |  Z |  X |  C |  V |  B |  N |  M | /? | RSft| fn1|
     * |-----------------------------------------------------------|
     * | fn1 | ALt| LGui|  spc fn2  |  spc fn3    | RGui| Alt| fn4 |
     * `-----------------------------------------------------------'
     */
    [0] = KEYMAP_LAYOUT_1(
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P,    KC_BSPC, \
        KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   ,          KC_ENT , \
        KC_LSFT,          KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_SLSH, KC_RSFT, MO_1   , \
        MO_1   , KC_LALT, KC_LGUI, LT_2SPC,                   LT_3SPC,                   KC_RGUI, KC_RALT, MO_4   ),

    /* Function Layer 1 HHKB style
     * ,-----------------------------------------------------------.
     * |Caps|    |MSel| ⏮ | ⏯ | ⏭ |PSCR|SkLk|Paus|  ↑ | Ins| Del|
     * |-----------------------------------------------------------|
     * |      | 🔇 | ⏏ |    |  * |  / |Hone|PgUp|  ← |  → |       |
     * |-----------------------------------------------------------|
     * |        | 🔉 | 🔊 |    |  + |  - | End|PgDn| ↓ |     |    |
     * |-----------------------------------------------------------|
     * |     |    |     |           |             | Stop| App|     |
     * `-----------------------------------------------------------'
     */
    [1] = KEYMAP_LAYOUT_1(
        KC_CAPS, _______, KC_MSEL, KC_MPRV, KC_MPLY, KC_MNXT, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   KC_INS,  KC_DEL, \
        _______, KC_MUTE, KC_EJCT, _______, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT,          _______, \
        _______,          KC_VOLD, KC_VOLU, _______, KC_PPLS, KC_PMNS, KC_END,  KC_PGDN, KC_DOWN, _______, _______, \
        _______, _______, _______,          _______,                   _______,          KC_STOP, KC_APP , _______),

    /* Function Layer 2 Left Thumb Shift Layer
     * ,-----------------------------------------------------------.
     * |    |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |    |
     * |-----------------------------------------------------------|
     * |      |  ! |  @ |  # |  $ |  % |  ^ |  & |  * |  ( |       |
     * |-----------------------------------------------------------|
     * |        |    |    |    |    |    |    |    |  ) |     |    |
     * |-----------------------------------------------------------|
     * |     |    |     |           |             |     |    |     |
     * `-----------------------------------------------------------'
     */
    [2] = KEYMAP_LAYOUT_1(
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______, \
        _______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN,          _______, \
        _______,          _______, _______, _______, _______, _______, _______, _______, KC_RPRN, _______, _______, \
        _______, _______, _______,          _______,                   _______,          _______, _______, _______),

    /* Function Layer 3 Right Thumb Shift Layer
     * ,-----------------------------------------------------------.
     * |    |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = |  \ |  ` |
     * |-----------------------------------------------------------|
     * |      |  $ |  % |  ^ |  & |  * |  ( |  ) |  [ |  ] |       |
     * |-----------------------------------------------------------|
     * |        |    |    |    |    |  ; |  ' |  , |  . |     |    |
     * |-----------------------------------------------------------|
     * |     |    |     |           |             |     |    |     |
     * `-----------------------------------------------------------'
     */
    [3] = KEYMAP_LAYOUT_1(
        _______, KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL,  KC_BSLS, KC_GRV, \
        _______, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC,          _______, \
        _______,          _______, _______, _______, KC_SCLN, KC_QUOT, KC_COMM, KC_DOT , _______, _______, _______, \
        _______, _______, _______,          _______,                   _______,          _______, _______, _______),

    /* Function Layer 4 F-Key, LED, MISC Control Layer
     * ,-----------------------------------------------------------.
     * | F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10| F11| F12|
     * |-----------------------------------------------------------|
     * |      |    |    |    |    |    |    |    |LED |LED+|       |
     * |-----------------------------------------------------------|
     * |        |    |    |    |    |    |    |LED |LED-|     |    |
     * |-----------------------------------------------------------|
     * |RESET|    |     |           |             |     |    |     |
     * `-----------------------------------------------------------'
     */
    [4] = KEYMAP_LAYOUT_1(
        KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , \
        _______, _______, _______, _______, _______, _______, _______, _______, BL_TOGG, BL_INC ,          _______, \
        _______,          _______, _______, _______, _______, _______, _______, BL_STEP, BL_DEC , _______, _______, \
        RESET  , _______, _______,          _______,                   _______,          _______, _______, _______),

};

/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[FN_ACTIONS_COUNT] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_TAP_KEY(2, KC_SPC),
    [2] = ACTION_LAYER_TAP_KEY(3, KC_SPC),
    [3] = ACTION_LAYER_MOMENTARY(4),
    [4] = ACTION_BACKLIGHT_DECREASE(),
    [5] = ACTION_BACKLIGHT_INCREASE(),
    [6] = ACTION_BACKLIGHT_TOGGLE(),
    [7] = ACTION_BACKLIGHT_STEP(),

    // Row 1 Shift code
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_1),    // KC_EXLM !
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_2),    // KC_AT @
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_3),    // KC_HASH #
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_4),    // KC_DLR $
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_5),    // KC_PERC %
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_6),    // KC_CIRC ^
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_7),    // KC_AMPR &
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_8),    // KC_ASTR *
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_9),    // KC_LPRN (
    [25] = ACTION_MODS_KEY(MOD_LSFT, KC_0),    // KC_RPRN )
    [26] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS), // KC_UNDS _
    [27] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),  // KC_PLUS +
    [28] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS), // KC_PIPE |
    [29] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),  // KC_TILD ~

    // bootloader
    [31] = ACTION_FUNCTION(BOOTLOADER)         // RESET
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  if (id == BOOTLOADER) {
    bootloader();
  }
}

#ifdef KEYMAP_IN_EEPROM_ENABLE
uint16_t keys_count(void) {
    return sizeof(keymaps) / sizeof(keymaps[0]) * MATRIX_ROWS * MATRIX_COLS;
}

uint16_t fn_actions_count(void) {
    return sizeof(fn_actions) / sizeof(fn_actions[0]);
}
#endif
