// PFM

#include QMK_KEYBOARD_H

enum pfm_layers {
  _ALPHA,
  _LANG,
  _NUM,
  _SYMBOLS,
  _GREEK,
  _BUTTONS,
  _NAV,
  _MEDIA,
  _MOUSE
};

enum custom_keycodes {
    XX_UMLAUT_U = SAFE_RANGE,
    XX_UMLAUT_A,
    XX_UMLAUT_O,
    XX_ESZETT,
    XX_WS_LEFT,
    XX_WS_RIGHT,
    XX_BOX_DR,

    XX_GR_ALPHA,
    XX_GR_BETA,
    XX_GR_GAMMA,
    XX_GR_DELTA,
    XX_GR_EPSILON,
    XX_GR_ZETA,
    XX_GR_ETA,
    XX_GR_THETA,
    XX_GR_IOTA,
    XX_GR_KAPPA,
    XX_GR_LAMDA,
    XX_GR_MU,
    XX_GR_NU,
    XX_GR_XI,
    XX_GR_OMICRON,
    XX_GR_PI,
    XX_GR_RHO,
    XX_GR_SIGMA,
    XX_GR_TAU,
    XX_GR_UPSILON,
    XX_GR_PHI,
    XX_GR_CHI,
    XX_GR_PSI,
    XX_GR_OMEGA,
};

#define XX_EURO           RSFT_T(KC_LANGUAGE_1)

#define XX_CTLW           LGUI_T(KC_INTERNATIONAL_1)
#define XX_CTLA           LALT_T(KC_INTERNATIONAL_1)
#define XX_TAB            LCTL_T(KC_INTERNATIONAL_1)
#define XX_PI             RGUI_T(KC_INTERNATIONAL_1)

#define XX_AMPERSAND            LGUI_T(KC_INTERNATIONAL_2)
#define XX_SLASH                LALT_T(KC_INTERNATIONAL_2)
#define XX_COLON                LCTL_T(KC_INTERNATIONAL_2)
#define XX_LEFT_PAREN           RCTL_T(KC_INTERNATIONAL_2)
#define XX_DOUBLE_QUOTE         RALT_T(KC_INTERNATIONAL_2)
#define XX_LEFT_ANGLE_BRACKET   RGUI_T(KC_INTERNATIONAL_2)

#define XX_WS1           RCTL_T(KC_INTERNATIONAL_5)
#define XX_WS2           RSFT_T(KC_INTERNATIONAL_5)
#define XX_WS3           LALT_T(KC_INTERNATIONAL_5)
#define XX_WS4           RGUI_T(KC_INTERNATIONAL_5)

#define XX_MS_BTN1       RCTL_T(KC_INTERNATIONAL_6)
#define XX_MS_BTN2       RSFT_T(KC_INTERNATIONAL_6)
#define XX_MS_BTN3       LALT_T(KC_INTERNATIONAL_6)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ALPHA] = LAYOUT_split_46513(
                 KC_ESC,        KC_F,          KC_R,              KC_M,                                                            KC_P,                  KC_U,                KC_B,          KC_BACKSPACE,
        KC_ESC,  LGUI_T(KC_W),  LALT_T(KC_A),  LSFT_T(KC_N),      LCTL_T(KC_T),         KC_V,                KC_J,                 RCTL_T(KC_S),          RSFT_T(KC_E),        LALT_T(KC_O),  RGUI_T(KC_K),   KC_ENTER,
                 KC_X,          KC_Y,          LT(_GREEK, KC_Z),  LT(_LANG, KC_L),      KC_C,                KC_G,                 LT(_LANG, KC_D),       LT(_GREEK, KC_I),    KC_H,          KC_Q,
                                               KC_COMMA,                                                                                                  KC_DOT,
                                               MO(_MOUSE),        MO(_NUM),             LT(_NAV, KC_ENTER),  LT(_BUTTONS, KC_SPC), MO(_SYMBOLS),          MO(_MEDIA)
    ),
    
    [_LANG] = LAYOUT_split_46513(
                 KC_TRNS,   XXXXXXX,      XXXXXXX,  XXXXXXX,                         XXXXXXX,      XX_UMLAUT_U,  XXXXXXX,      KC_TRNS,
        KC_TRNS, XXXXXXX,   XX_UMLAUT_A,  KC_LSFT,  XXXXXXX,  XXXXXXX,     XXXXXXX,  XX_ESZETT,    XX_EURO,      XX_UMLAUT_O,  XXXXXXX, KC_TRNS,
                 XXXXXXX,   XXXXXXX,      XXXXXXX,  XXXXXXX,  XXXXXXX,     XXXXXXX,  XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX, 
                                          XXXXXXX,                                                 XXXXXXX,
                                          KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS,      KC_TRNS
    ),

    [_NUM] = LAYOUT_split_46513(
                 KC_TRNS,  KC_BACKSPACE,  KC_SPC,        KC_DEL,                                KC_7,          KC_8,          KC_9,          KC_TRNS,
        KC_TRNS, KC_LGUI,  XX_CTLA,       KC_LSFT,       XX_TAB,   C(KC_V),        KC_PERCENT,  RCTL_T(KC_4),  RSFT_T(KC_5),  LALT_T(KC_6),  XX_PI,    KC_TRNS,
                 C(KC_X),  C(KC_Y),       C(KC_Z),       C(KC_S),  C(KC_C),        KC_0,        KC_1,          KC_2,          KC_3,          XXXXXXX,
                                          XXXXXXX,                                                             KC_0,
                                          KC_TRNS,       KC_TRNS,  KC_TRNS,        KC_COMMA,    KC_DOT,        KC_TRNS
    ),

   [_SYMBOLS] = LAYOUT_split_46513(
                 KC_TRNS,      KC_EQUAL,     KC_QUESTION,  KC_EXCLAIM,                                     KC_LEFT_BRACKET,      KC_RIGHT_BRACKET,      KC_GRAVE,         KC_TRNS,
        KC_TRNS, XX_AMPERSAND, XX_SLASH,     KC_MINUS,     XX_COLON,        KC_DOLLAR,     KC_CIRCUMFLEX,  XX_LEFT_PAREN,        KC_RIGHT_PAREN,        XX_DOUBLE_QUOTE,  XX_LEFT_ANGLE_BRACKET,   KC_TRNS,
                 KC_PIPE,      KC_ASTERISK,  KC_PLUS,      KC_SEMICOLON,    KC_BACKSLASH,  KC_TILDE,       KC_LEFT_CURLY_BRACE,  KC_RIGHT_CURLY_BRACE,  KC_QUOTE,         KC_RIGHT_ANGLE_BRACKET, 
                                             KC_TRNS,                                                                            KC_TRNS,
                                             KC_AT,        KC_UNDERSCORE,   KC_HASH,       KC_TRNS,        KC_TRNS,              KC_TRNS
     ),
    
   [_GREEK] = LAYOUT_split_46513(
                  KC_TRNS,      XX_GR_PHI,     XX_GR_RHO,   XX_GR_MU,                                   XX_GR_PI,       XX_GR_UPSILON,  XX_GR_BETA,     KC_TRNS,
        KC_TRNS,  XX_GR_OMEGA,  XX_GR_ALPHA,   XX_GR_NU,    XX_GR_TAU,      XXXXXXX,    XXXXXXX,        XX_GR_SIGMA,    XX_GR_EPSILON,  XX_GR_OMICRON,  XX_GR_KAPPA,   KC_TRNS,
                  XX_GR_XI,     XX_GR_PSI,     XX_GR_ZETA,  XX_GR_LAMDA,    XX_GR_CHI,  XX_GR_GAMMA,    XX_GR_DELTA,    XX_GR_IOTA,     XX_GR_ETA,      XX_GR_THETA,
                                               XXXXXXX,                                                                 XXXXXXX,
                                               KC_TRNS,     KC_TRNS,        KC_TRNS,     KC_TRNS,       KC_TRNS,        KC_TRNS
     ),
    
    [_BUTTONS] = LAYOUT_split_46513(
                 KC_TRNS,  KC_ESC,           QK_CAPS_WORD_TOGGLE,  KC_CAPS_LOCK,                        KC_F7,          KC_F8,          KC_F9,          KC_TRNS,
        KC_TRNS, KC_LGUI,  KC_LALT,          KC_LSFT,              KC_LCTL,       XXXXXXX,  KC_F11,    RCTL_T(KC_F4),  RSFT_T(KC_F5),  LALT_T(KC_F6),   XXXXXXX,   KC_TRNS,
                 XXXXXXX,  KC_PRINT_SCREEN,  KC_EXECUTE,           KC_HELP,       XXXXXXX,  KC_F10,     KC_F1,          KC_F2,          KC_F3,          KC_F12,
                                             XXXXXXX,                                                                   KC_F10,
                                             KC_TRNS,              KC_TRNS,       KC_TRNS,  KC_TRNS,    KC_TRNS,        KC_TRNS
    ),

    [_NAV] = LAYOUT_split_46513(
                 KC_TRNS,   XX_WS_LEFT,  XXXXXXX,         XX_WS_RIGHT,                         KC_HOME,     KC_UP,     KC_END ,      XXXXXXX,
        KC_TRNS, KC_LGUI,   KC_LALT,     LSFT_T(KC_ESC),  LCTL_T(KC_TAB),  XXXXXXX,  XXXXXXX,  KC_LEFT,     KC_DOWN,   KC_RIGHT,     KC_MENU,          KC_TRNS,
                 XXXXXXX,   XX_WS1,      XX_WS2,          XX_WS3,          XX_WS4,   XXXXXXX,  KC_PAGE_UP,  KC_INSERT, KC_PAGE_DOWN, KC_APPLICATION,
                                         XXXXXXX,                                                           XXXXXXX,
                                         KC_TRNS,         KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS
    ),

   [_MEDIA] = LAYOUT_split_46513(
                 KC_TRNS,    XX_BOX_DR,  PB_8,     PB_9,                        KC_KB_VOLUME_UP,             KC_KB_MUTE,                   KC_KB_VOLUME_DOWN,            XXXXXXX,
        KC_TRNS, XXXXXXX,    PB_4,       PB_5,     PB_6,    XXXXXXX,  XXXXXXX,  RCTL_T(KC_MEDIA_PREV_TRACK), RSFT_T(KC_MEDIA_PLAY_PAUSE),  LALT_T(KC_MEDIA_NEXT_TRACK),  RGUI_T(XXXXXXX),  KC_TRNS,
                 XXXXXXX,    PB_1,       PB_2,     PB_3,    XXXXXXX,  XXXXXXX,  XXXXXXX,                     XXXXXXX,                      XXXXXXX,                      XXXXXXX,
                                         XXXXXXX,                                                            XXXXXXX,
                                         KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,                     KC_TRNS
    ),
             
    [_MOUSE] = LAYOUT_split_46513(
                KC_TRNS,  XXXXXXX,        OSL(_SYMBOLS),  OSL(_BUTTONS),                          KC_MS_WH_UP,   KC_MS_UP,      KC_MS_WH_DOWN,  XXXXXXX,
       KC_TRNS, KC_LGUI,  KC_LALT,        KC_LSFT,        KC_LCTL,        XXXXXXX,  XXXXXXX,      KC_MS_LEFT,    KC_MS_DOWN,    KC_MS_RIGHT,    XXXXXXX,  KC_TRNS,
                XXXXXXX,  G(A(C(KC_W))),  G(A(C(KC_C))),  G(A(C(KC_F))),  XXXXXXX,  XXXXXXX,      XX_MS_BTN1,    XX_MS_BTN2,    XX_MS_BTN3,     KC_RGUI,
                                          XXXXXXX,                                                               XXXXXXX,
                                          KC_TRNS,        KC_TRNS,        KC_TRNS,  KC_MS_ACCEL0, KC_MS_ACCEL1,  KC_MS_ACCEL2
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
        // https://getreuer.info/posts/keyboards/triggers/index.htm
    switch (keycode) {
        case XX_UMLAUT_U:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"dc "); // Ü
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"fc "); // ü
                }
                return false;
            }
            return true;
        case XX_UMLAUT_A:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_RSFT("u"))"c4 "); // Ä
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"e4 "); // ä
                }
                return false;
            }
            return true;
        case XX_UMLAUT_O:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"d6 "); // Ö
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"f6 "); // ö
                }
                return false;
            }
            return true;
        case XX_ESZETT:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT("u"))"df "); // ß - Handle tap press event...
                return false;
            }
            return true;
        case XX_EURO:
            if (record->tap.count && record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT("u"))"20ac "); // € - Handle tap press event...
                return false;
            }
            return true;
        
        case XX_WS_LEFT:
            if (record->event.pressed) {
                tap_code16(G(KC_PAGE_UP));
                return false;
            }
            return true;
        case XX_WS_RIGHT:
            if (record->event.pressed) {
                tap_code16(G(KC_PAGE_DOWN));
                return false;
            }
            return true;

        case XX_WS1:
            if (record->tap.count && record->event.pressed) {
                tap_code16(G(C(KC_1)));
                return false;
            }
            return true;
        case XX_WS2:
            if (record->tap.count && record->event.pressed) {
                tap_code16(G(C(KC_2)));
                return false;
            }
            return true;
        case XX_WS3:
            if (record->tap.count && record->event.pressed) {
                tap_code16(G(C(KC_3)));
                return false;
            }
            return true;
        case XX_WS4:
            if (record->tap.count && record->event.pressed) {
                tap_code16(G(C(KC_4)));
                return false;
            }
            return true;
    
        case XX_CTLW:
            if (record->tap.count && record->event.pressed) {
                tap_code16(C(KC_W));
                return false;
            }
            return true;
        case XX_CTLA:
            if (record->tap.count && record->event.pressed) {
                tap_code16(C(KC_A));
                return false;
            }
            return true;
        case XX_TAB:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_TAB);
                return false;
            }
            return true;
        case XX_PI:
            if (record->tap.count && record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT("u"))"3c0 "); // π
                return false;
            }
            return true;

        case XX_AMPERSAND:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_AMPERSAND);
                return false;
            }
            return true;
        case XX_SLASH:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_SLASH);
                return false;
            }
            return true;
        case XX_COLON:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_COLON);
                return false;
            }
            return true;
        case XX_LEFT_PAREN:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LEFT_PAREN);
                return false;
            }
            return true;
        case XX_DOUBLE_QUOTE:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_DOUBLE_QUOTE);
                return false;
            }
            return true;
        case XX_LEFT_ANGLE_BRACKET:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LEFT_ANGLE_BRACKET);
                return false;
            }
            return true;


        case XX_MS_BTN1:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_MS_BTN1);
                return false;
            }
            return true;
        case XX_MS_BTN2:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_MS_BTN2);
                return false;
            }
            return true;
        case XX_MS_BTN3:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_MS_BTN3);
                return false;
            }
            return true;
        
        case XX_BOX_DR:
            if (record->tap.count && record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT("u"))"250c "); // ┌
                return false;
            }
            return true;


        // Greek            
        case XX_GR_ALPHA:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"0391 "); // GREEK CAPITAL LETTER ALPHA (U+0391)	Α	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03B1 "); // GREEK SMALL LETTER ALPHA (U+03B1)	α	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_BETA:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"0392 "); // GREEK CAPITAL LETTER BETA (U+0392)	Β	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03B2 "); // GREEK SMALL LETTER BETA (U+03B2)	β	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_GAMMA:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"0393 "); // GREEK CAPITAL LETTER GAMMA (U+0393)	Γ	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03B3 "); // GREEK SMALL LETTER GAMMA (U+03B3)	γ	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_DELTA:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"0394 "); // GREEK CAPITAL LETTER DELTA (U+0394)	Δ	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03B4 "); // GREEK SMALL LETTER DELTA (U+03B4)	δ	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_EPSILON:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"0395 "); // GREEK CAPITAL LETTER EPSILON (U+0395)	Ε	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03B5 "); // GREEK SMALL LETTER EPSILON (U+03B5)	ε	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_ZETA:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"0396 "); // GREEK CAPITAL LETTER ZETA (U+0396)	Ζ	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03B6 "); // GREEK SMALL LETTER ZETA (U+03B6)	ζ	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_ETA:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"0397 "); // GREEK CAPITAL LETTER ETA (U+0397)	Η	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03B7 "); // GREEK SMALL LETTER ETA (U+03B7)	η	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_THETA:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"0398 "); // GREEK CAPITAL LETTER THETA (U+0398)	Θ	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03B8 "); // GREEK SMALL LETTER THETA (U+03B8)	θ	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_IOTA:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"0399 "); // GREEK CAPITAL LETTER IOTA (U+0399)	Ι	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03B9 "); // GREEK SMALL LETTER IOTA (U+03B9)	ι	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_KAPPA:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"039A "); // GREEK CAPITAL LETTER KAPPA (U+039A)	Κ	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03BA "); // GREEK SMALL LETTER KAPPA (U+03BA)	κ	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_LAMDA:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"039B "); // GREEK CAPITAL LETTER LAMDA (U+039B)	Λ	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03BB "); // GREEK SMALL LETTER LAMDA (U+03BB)	λ	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_MU:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"039C "); // GREEK CAPITAL LETTER MU (U+039C)	Μ	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03BC "); // GREEK SMALL LETTER MU (U+03BC)	μ	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_NU:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"039D "); // GREEK CAPITAL LETTER NU (U+039D)	Ν	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03BD "); // GREEK SMALL LETTER NU (U+03BD)	ν	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_XI:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"039E "); // GREEK CAPITAL LETTER XI (U+039E)	Ξ	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03BE "); // GREEK SMALL LETTER XI (U+03BE)	ξ	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_OMICRON:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"039F "); // GREEK CAPITAL LETTER OMICRON (U+039F)	Ο	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03BF "); // GREEK SMALL LETTER OMICRON (U+03BF)	ο	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_PI:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03A0 "); // GREEK CAPITAL LETTER PI (U+03A0)	Π	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03C0 "); // GREEK SMALL LETTER PI (U+03C0)	π	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_RHO:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03A1 "); // GREEK CAPITAL LETTER RHO (U+03A1)	Ρ	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03C1 "); // GREEK SMALL LETTER RHO (U+03C1)	ρ	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_SIGMA:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03A3 "); // GREEK CAPITAL LETTER SIGMA (U+03A3)	Σ	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03C3 "); // GREEK SMALL LETTER SIGMA (U+03C3)	σ	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_TAU:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03A4 "); // GREEK CAPITAL LETTER TAU (U+03A4)	Τ	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03C4 "); // GREEK SMALL LETTER TAU (U+03C4)	τ	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_UPSILON:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03A5 "); // GREEK CAPITAL LETTER UPSILON (U+03A5)	Υ	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03C5 "); // GREEK SMALL LETTER UPSILON (U+03C5)	υ	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_PHI:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03A6 "); // GREEK CAPITAL LETTER PHI (U+03A6)	Φ	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03C6 "); // GREEK SMALL LETTER PHI (U+03C6)	φ	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_CHI:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03A7 "); // GREEK CAPITAL LETTER CHI (U+03A7)	Χ	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03C7 "); // GREEK SMALL LETTER CHI (U+03C7)	χ	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_PSI:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03A8 "); // GREEK CAPITAL LETTER PSI (U+03A8)	Ψ	arial_unicode_ms
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03C8 "); // GREEK SMALL LETTER PSI (U+03C8)	ψ	arial_unicode_ms
                }
                return false;
            }
            return true;
        case XX_GR_OMEGA:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03A9 "); // GREEK CAPITAL LETTER OMEGA (U+03A9)
                } else {
                    SEND_STRING(SS_LCTL(SS_LSFT("u"))"03C9 "); // GREEK SMALL LETTER OMEGA (U+03C9)
                }
                return false;
            }
            return true;
    }
    return true;
}

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_0; }
bool oled_task_user(void) {
    if (is_keyboard_master()) {
        led_t led_usb_state = host_keyboard_led_state();
        oled_set_cursor(0, 3);
        oled_write_P(led_usb_state.num_lock    ? PSTR("NUM ") : PSTR("    "),   false);
        oled_write_P(led_usb_state.caps_lock   ? PSTR("CAPS ") : PSTR("     "), false);
        oled_write_P(is_caps_word_on()         ? PSTR("W-CAPS ") : PSTR("       "),     false);
        oled_write_P(led_usb_state.scroll_lock ? PSTR("SCROLL") : PSTR(""),     false);
        
        oled_set_cursor(0, 0);
        oled_write_P(PSTR("PFM v.037"), false);

        oled_set_cursor(0, 1);
        oled_write_P(PSTR("Layer: "), false);

        switch (get_highest_layer(layer_state)) {
            case _ALPHA:
                oled_set_cursor(6, 1);
                oled_write_P(PSTR("Default\n"), false);
                break;
            case _LANG:
                oled_set_cursor(6, 1);
                oled_write_P(PSTR("Lang\n"), false);
                break;
            case _NUM:
                oled_set_cursor(6, 1);
                oled_write_P(PSTR("Num\n"), false);
                break;
            case _SYMBOLS:
                oled_set_cursor(6, 1);
                oled_write_P(PSTR("Symbols\n"), false);
                break;
            case _BUTTONS:
                oled_set_cursor(6, 1);
                oled_write_P(PSTR("Buttons\n"), false);
                break;
            case _NAV:
                oled_set_cursor(6, 1);
                oled_write_P(PSTR("Nav\n"), false);
                break;
            case _MEDIA:
                oled_set_cursor(6, 1);
                oled_write_P(PSTR("Media\n"), false);
                break;
            case _MOUSE:
                oled_set_cursor(6, 1);
                oled_write_P(PSTR("Mouse\n"), false);
                break;
            default:
                // Or use the write_ln shortcut over adding '\n' to the end of your string
                oled_set_cursor(0, 1);
                oled_write_ln_P(PSTR("???"), false);
        }
    }
    return false;
}
#endif

// Working sound on change to nav layer, but really annoying
// #define AAA_SOUND E__NOTE(_E6), ED_NOTE(_E7),
// float my_song[][2] = SONG(AAA_SOUND);

// layer_state_t layer_state_set_user(layer_state_t state) {
//     static bool nav_layer_on = false;
//     if (layer_state_cmp(state, _NAV) != nav_layer_on) {
//         nav_layer_on = layer_state_cmp(state, _NAV);
//         if (nav_layer_on) {
//             PLAY_SONG(my_song);
//         } else {
//             stop_all_notes();
//         }
//     }
//     return state;
// }
