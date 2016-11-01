#include "keymap_common.h"

// increase readability
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// function keys
#define RESET   KC_FN0

#define TO_1    KC_FN1  // toggle layer 1
#define TO_2    KC_FN2
#define TO_3    KC_FN3
#define TO_4    KC_FN4

#define L_7_SPC KC_FN5  // momentary layer 7 tap space
#define L_8_ENT KC_FN6  // momentary layer 8 tap enter

#define MO_7    KC_FN7  // momentary layer symbols
#define MO_8    KC_FN8  // momentary layer shift symbols
#define MO_9    KC_FN9  // momentary layer functions

//#define BL_DEC  KC_FN6  // decrease backlight
//#define BL_INC  KC_FN7  // increase backlight
//#define BL_TOGG KC_FN8  // toggle backlight
//#define BL_STEP KC_FN9

#define KC_COLN KC_FN11 // :
#define KC_DBQT KC_FN12 // "

#define KC_LT   KC_FN13 // <
#define KC_GT   KC_FN14 // >
#define KC_QSTM KC_FN15 // ?

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

#define KC_LCBR KC_FN30 // {
#define KC_RCBR KC_FN31 // }

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
     * | fna  |  A |  S |  D |  F |  G |  H |  J |  K |  L | fna   |
     * |-----------------------------------------------------------|
     * | LSft   |  Z |  X |  C |  V |  B |  N |  M | /? | RSft| fnb|
     * |-----------------------------------------------------------|
     * | Ctrl| Alt| Gui |   spc     |  ent        | Gui | Alt| fnc |
     * `-----------------------------------------------------------'
     */
    [0] = KEYMAP_LAYOUT_1(
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P,    KC_BSPC, \
        MO_7   , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   ,          MO_7   , \
        KC_LSFT,          KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_SLSH, KC_RSFT, MO_8   , \
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,                    KC_ENT ,                   KC_RGUI, KC_RALT, MO_9   ),

    // Layer 1 HHKB
    [1] = KEYMAP_LAYOUT_1(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        KC_LCTL, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, \
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        MO_7   , _______, _______,          _______,                   _______,          _______, _______, _______),

    // Layer 2 thumb fn keys
    [2] = KEYMAP_LAYOUT_1(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, \
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______,          L_7_SPC,                   L_8_ENT,          _______, _______, _______),

    // Layer 3 enter
    [3] = KEYMAP_LAYOUT_1(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_ENT , \
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______,          _______,                   L_7_SPC,          _______, _______, _______),

    /* Symbols Layer
     * ,-----------------------------------------------------------.
     * | Esc|  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 | Del|
     * |-----------------------------------------------------------|
     * |      |  \ |  [ |  ] |  - |  = |  ← |  ↓ |  ↑ |  → |       |
     * |-----------------------------------------------------------|
     * |        |  ` |  ( |  ) |  ; |  ' |  , |  . |  / |     |    |
     * |-----------------------------------------------------------|
     * |     |    |     |           |             |     |    |     |
     * `-----------------------------------------------------------'
     */
    [7] = KEYMAP_LAYOUT_1(
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL , \
        _______, KC_BSLS, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT,          _______, \
        _______,          KC_GRV , KC_LPRN, KC_RPRN, KC_SCLN, KC_QUOT, KC_COMM, KC_DOT , KC_SLSH, _______, _______, \
        _______, _______, _______,          _______,                   _______,          _______, _______, _______),

    /* Symbols Layer Shifted
     * ,-----------------------------------------------------------.
     * | Esc|  ! |  @ |  # |  $ |  % |  ^ |  & |  * |  ( |  ) | Del|
     * |-----------------------------------------------------------|
     * |      |  | |  { |  } |  _ |  + |Home|PgDn|PgUp| End|       |
     * |-----------------------------------------------------------|
     * |        |  ~ |  ( |  ) |  : |  " |  < |  > |  ? |     |    |
     * |-----------------------------------------------------------|
     * |     |    |     |           |             |     |    |     |
     * `-----------------------------------------------------------'
     */
    [8] = KEYMAP_LAYOUT_1(
        KC_ESC , KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL , \
        _______, KC_PIPE, KC_LCBR, KC_RCBR, KC_UNDS, KC_PLUS, KC_HOME, KC_PGDN, KC_PGUP, KC_END ,          _______, \
        _______,          KC_TILD, KC_LPRN, KC_RPRN, KC_COLN, KC_DBQT, KC_LT,   KC_GT  , KC_QSTM, _______, _______, \
        _______, _______, _______,          _______,                   _______,          _______, _______, _______),

    /* Function Layer F-Key, MISC Control Layer
     * ,-----------------------------------------------------------.
     * | Esc| F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10| Del|
     * |-----------------------------------------------------------|
     * | Caps | F11| F12| 🔇 | 🔉 | 🔊 |Home|PgDn|PgUp| End|       |
     * |-----------------------------------------------------------|
     * |        |MSel| ⏮ | ⏯ | ⏭ | ⏏ |PSCR|SkLk|Paus| Ins |RSET|
     * |-----------------------------------------------------------|
     * |     |    |     |           |             | Stop| App|     |
     * `-----------------------------------------------------------'
     */
    [9] = KEYMAP_LAYOUT_1(
        KC_ESC , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_DEL , \
        KC_CAPS, KC_F11 , KC_F12 , KC_MUTE, KC_VOLD, KC_VOLU, KC_HOME, KC_PGDN, KC_PGUP, KC_END ,          TO_3   , \
        _______,          KC_EJCT, KC_MPRV, KC_MPLY, KC_MNXT, KC_MSEL, KC_PSCR, KC_SLCK, KC_PAUS, KC_INS,  RESET  , \
        _______, _______, _______,          TO_1   ,                   TO_2   ,          KC_STOP, KC_APP , _______),
};

/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[FN_ACTIONS_COUNT] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    // bootloader
    [0] = ACTION_FUNCTION(BOOTLOADER),         // RESET

    [1] = ACTION_LAYER_TOGGLE(1),
    [2] = ACTION_LAYER_TOGGLE(2),
    [3] = ACTION_LAYER_TOGGLE(3),
    [4] = ACTION_LAYER_TOGGLE(4),

    [5] = ACTION_LAYER_TAP_KEY(7, KC_SPC),
    [6] = ACTION_LAYER_TAP_KEY(8, KC_ENT),

    [7] = ACTION_LAYER_MOMENTARY(7),
    [8] = ACTION_LAYER_MOMENTARY(8),
    [9] = ACTION_LAYER_MOMENTARY(9),

    // backlight
    //[6] = ACTION_BACKLIGHT_DECREASE(),
    //[7] = ACTION_BACKLIGHT_INCREASE(),
    //[8] = ACTION_BACKLIGHT_TOGGLE(),
    //[9] = ACTION_BACKLIGHT_STEP(),

    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_SCLN), // KC_COLN :
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT), // KC_DBQT "

    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_COMM), // KC_LT <
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_DOT),  // KC_GT >
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_SLSH), // KC_QSTM ?

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

    [30] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC), // KC_LCBR {
    [31] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC), // KC_RCBR }
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
