#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QWERTY,
    _COLEMAK_DH,
    _LOWER,
    _RAISE,
    _NAV,
    _ABLETON
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_CLMKDH,
    KC_LOWER,
    KC_RAISE,
    KC_NAV,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE,
    KC_ABTN,
    KC_SAVE, //ctrl + s
    KC_NUAUD, //ctrl + t
    KC_NUMIDT, //ctrl + shift +t
    KC_NUMIDC, //ctrl + shift + m
    KC_LOOP, //ctrl + l
    KC_LOOPDUB, //ctrl + up
    KC_LOOPHLV, //ctrl + down
    KC_UNDO, //ctrl + z
    KC_REDO, //ctrl + y
    KC_TOGALT, // toggle alt
    KC_TOGCTRL, //toggle ctrl
    KC_FIND, //ctrl + f
    KC_TGBR, //ctrl + alt + b
    KC_FRMSTP, //shift + space
    KC_INST, //ctrl + i
    KC_RMTM, //ctrl + shift +del
    KC_UPOCT, //shift + up
    KC_DWNOCT, //shift + down
    KC_CONS, //ctrl + j
    KC_COPY, //ctrl + c
    KC_RNM, //ctrl + r
    KC_SPLT, // ctrl + e
    KC_DUPE, // ctrl + d
    KC_GRP, //ctrl + g
    KC_MIMA, //ctrl + m
    KC_EXAU, //ctrl + shift + r
    KC_EXMD, //ctrl + Shift + e

};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |ablton|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  `   |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  | ;(:) | '(") |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  | /()  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_ABTN,
  KC_GRV,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSPC,
  KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,    XXXXXXX,KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
                 KC_LGUI,KC_LALT,KC_LCTRL, TT(_LOWER), KC_ENT,     KC_SPC,  TT(_RAISE), KC_RCTRL, KC_RALT, KC_RGUI
),
/*
 * COLEMAK_DH
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |de(ab)|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   ;  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_COLEMAK_DH] = LAYOUT(
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  LT(_ABLETON, KC_DEL),
  KC_ESC,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                      KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN,  KC_BSPC,
  KC_TAB,   KC_A,   KC_R,    KC_S,    KC_T,    KC_G,                      KC_M,    KC_N,    KC_E,    KC_I,    KC_O,  KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_D,    KC_V, KC_MUTE,     XXXXXXX,KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
                 KC_LGUI,KC_LALT,KC_LCTRL,TT(_LOWER), KC_ENT,      KC_SPC,  TT(_RAISE), KC_RCTRL, KC_RALT, KC_RGUI
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |   :  |   $  |  ;   |   (  |   )  |                    |   ^  |   7  |   8  |   9  |   \  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   !  |   @  |   #  |   [  |   ]  |-------.    ,-------|   *  |   4  |   5  |   6  |   %  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | Shift|  =   |  -   |  +   |   {  |   }  |-------|    |-------|   &  |   1  |   2  |   3  | RGUI |Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE |  0   | RAlt | rCTRL |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_LOWER] = LAYOUT(
  KC_GRV,  KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                       KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  KC_F1,   KC_COLN, KC_DLR,  KC_SCLN, KC_LPRN, KC_RPRN,                     KC_CIRC, KC_7,    KC_8,    KC_9,    KC_BSLS, KC_BSPC,
  _______, KC_EXLM, KC_AT,   KC_HASH, KC_LBRC, KC_RBRC,                     KC_ASTR, KC_4,    KC_5,    KC_6,    KC_PERC, KC_PIPE,
  _______, KC_EQL,  KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, _______,   _______, KC_AMPR, KC_1,    KC_2,    KC_3,    KC_RGUI, _______,
                  _______, _______, _______, _______, _______,      _______, _______,    KC_0, _______, KC_RCTRL
),
/* RAISE
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Ins  | Pscr | Menu |      |      |                    |      | PWrd |  Up  | NWrd | DLine| Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | LAt  | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
 * |------+------+------+------+------+------|  MUTE  |    |       |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_RAISE] = LAYOUT(
  _______,  _______ , _______ , _______ , _______ , _______,                        _______, _______  , _______, _______ , _______ , _______,
  _______,  KC_INS,   KC_PSCR,  KC_APP,   XXXXXXX,  XXXXXXX,                        KC_PGUP, KC_PRVWD,  KC_UP,   KC_NXTWD, KC_DLINE, KC_BSPC,
  _______,  KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX,  KC_CAPS,                        KC_PGDN, KC_LEFT,   KC_DOWN, KC_RGHT,  KC_DEL,   KC_BSPC,
  _______,  KC_UNDO,  KC_CUT,   KC_COPY,  KC_PASTE, KC_REDO, _______,      _______, XXXXXXX, KC_LSTRT,  XXXXXXX, KC_LEND,  XXXXXXX,  _______,
                         _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______ 
),
/* NAVIGATION/BROWSING
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | RESET|QWERTY|COLEMAK|MACWIN|     |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    | PLAY | PREV |VOLUP | VOLDO| NEXT |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |MOUSEl|MOUSEU|MOUSED|MOUSER|      |-------.    ,-------|      | left |  up  | down | right|      |
 * |------+------+------+------+------+------|  MUTE |    |mouse3 |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|mouse1|      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_NAV] = LAYOUT(
  XXXXXXX, KC_QWERTY,KC_CLMKDH,CG_TOGG, XXXXXXX,  XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  RESET  , XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,  XXXXXXX,                    KC_MPLY, KC_MPRV, KC_VOLU, KC_VOLD, KC_MNXT, XXXXXXX,
  XXXXXXX, KC_MS_L, KC_MS_U, KC_MS_D,   KC_MS_R,  XXXXXXX,                    XXXXXXX, KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT,XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,  XXXXXXX, _______,  KC_BTN3, XXXXXXX, KC_WH_L, KC_BTN1, KC_BTN2, KC_WH_R, XXXXXXX,
                   _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______
  ),
 /* ABLETON
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | mima | clip |exmidi| exaud| inst | RMTM |                    |   0  |   1  |   2  |   3  |   4  |  del |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | dupe | save | W(c#)| E(d#)|  RNM | T(f#)|                    | Y(g#)|U(a#) | cons | O(c#)|      | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | A(c) | S(d) | D(e) | F(fy) | G(g)|-------.    ,-------| H(a) | J(b) | K(c) | L(d) |      |Enter |
 * |------+------+------+------+------+------|  mute |    |       |------+------+------+------+------+------|
 * | grp  |ud(rd)| cut  | copy | paste|      |-------|    |-------|nuaud|numidt |numidc| loop |RShift|        
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI |togAlt|togCTR|LOWER | /Frmstop/       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_ABLETON] = LAYOUT(
  KC_MIMA, KC_F12,   KC_EXMD,  KC_EXAU,  KC_ISNT,    KC_RMTM,                     KC_0,    KC_1,      KC_2,      KC_3,    KC_4,   KC_TRNS
  KC_DUPE, KC_SAVE,  KC_W,     KC_E,     KC_RNM,     KC_,                         KC_Y,    KC_U,      KC_CONS,   KC_O,    KC_NO,  KC_BSPC,
  KC_TAB,  KC_A,     KC_S,     KC_D,     KC_F,       KC_G,                        KC_H,    KC_J,      KC_K,      KC_L,    KC_NO,   KC_ENT,
  KC_GRP,  C(KC_Z),  KC_CUT    KC_COPY,  KC_PASTE,   KC_REDO, KC_MUTE,    XXXXXXX,KC_NUAUD,C(S(KC_T)),KC_NUMIDC, KC_LOOP, KC_RSFT, KC_DEL,  
                   _______, _______, _______, _______, KC_FRMSTP,        _______, _______, _______, _______, _______
                KC_LGUI,KC_TOGALT,KC_TOGCTRL, TT(_LOWER),         KC_SPC,  KC_RAISE, KC_RCTRL, KC_RALT, KC_RGUI 
),
};

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("MODE"), false);
    oled_write_ln_P(PSTR(""), false);
    if (keymap_config.swap_lctl_lgui) {
        oled_write_ln_P(PSTR("MAC"), false);
    } else {
        oled_write_ln_P(PSTR("WIN"), false);
    }

    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("Qwrt"), false);
            break;
        case _COLEMAK_DH:
            oled_write_ln_P(PSTR("ClmkDH"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _COLEMAK_DH:
        case _QWERTY:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower"), false);
            break;
        case _NAV:
            oled_write_P(PSTR("Nav\n"), false);
            break;
        case _ABLETON:
            oled_write_P(PSTR("Ableton\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        case KC_CLMKDH:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK_DH);
            }
            return false;
        case KC_LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _NAV);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _NAV);
            }
            return false;
        case KC_RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _NAV);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _NAV);
            }
            return false;
        case KC_NAV:
            if (record->event.pressed) {
                layer_on(_NAV);
            } else {
                layer_off(_NAV);
            }
            return false;
        case KC_ABTN:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_ABLETON);
            }
            return false;
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
             if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                     //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;
        case KC_COPY:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("c"));
            }
            break;
        case KC_PASTE:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("v"));
            }
            break;
        case KC_CUT:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("x"));
            }
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("z"));
            }
            break;
        case KC_REDO:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("y"));
            }
            break;
        case KC_NUAUD:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("t"));
            }
            break;
        case KC_NUMIDT:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LSFT) SS_TAP(X_T));
            } else {
                SEND_STRING(SS_UP(X_LCTL) SS_UP(X_LSFT));
            }
            break;
        case KC_NUMIDC:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LSFT) SS_TAP(X_M));
            } else {
                SEND_STRING(SS_UP(X_LCTL) SS_UP(X_LSFT));
            }
            break;   
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_WH_D);
        } else {
            tap_code(KC_WH_U);
        }
    }
    return true;
}

#endif
