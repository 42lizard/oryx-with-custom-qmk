#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
};

#define DUAL_FUNC_0 LT(10, KC_R)
#define DUAL_FUNC_1 LT(5, KC_U)
#define DUAL_FUNC_2 LT(1, KC_F20)
#define DUAL_FUNC_3 LT(12, KC_9)
#define DUAL_FUNC_4 LT(5, KC_F18)
#define DUAL_FUNC_5 LT(13, KC_A)
#define DUAL_FUNC_6 LT(4, KC_R)
#define DUAL_FUNC_7 LT(12, KC_Q)
#define DUAL_FUNC_8 LT(14, KC_0)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TD(DANCE_0),    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TD(DANCE_1),    
    LT(1, KC_TAB),  KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           DE_Z,           KC_U,           KC_I,           KC_O,           DUAL_FUNC_3,    TD(DANCE_2),    
    KC_LEFT_SHIFT,  MT(MOD_LALT | MOD_LCTL | MOD_LGUI, KC_A),DUAL_FUNC_0,    MT(MOD_LCTL, KC_D),MT(MOD_LALT, KC_F),MT(MOD_LGUI, KC_G),                                MT(MOD_RGUI, KC_H),MT(MOD_RALT, KC_J),MT(MOD_RCTL, KC_K),DUAL_FUNC_4,    MT(MOD_RALT | MOD_RCTL | MOD_RGUI, DE_OE),MT(MOD_RSFT, DE_AE),
    KC_NUBS,        DE_Y,           KC_X,           KC_C,           DUAL_FUNC_1,    DUAL_FUNC_2,                                    DUAL_FUNC_5,    KC_M,           KC_COMMA,       KC_DOT,         DE_MINS,        MT(MOD_LSFT, KC_BSLS),
                                                    LT(6, KC_ENTER),LT(2, KC_TAB),                                  LT(2, KC_BSPC), LT(1, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    LGUI(RCTL(KC_Q)),KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT,                                 RGUI(DE_Z),     RGUI(KC_V),     RGUI(KC_C),     RGUI(KC_X),     LGUI(LSFT(KC_4)),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RALT(RSFT(KC_7)),
    KC_TRANSPARENT, DE_GRV,         DE_LESS,        DE_MORE,        DE_MINS,        LALT(KC_7),                                     DE_CIRC,        RALT(KC_8),     RALT(KC_9),     DE_DLR,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_EXLM,        DE_ASTR,        DE_SLSH,        DE_EQL,         DE_AMPR,                                        DE_HASH,        DE_LPRN,        DE_RPRN,        DE_SCLN,        DE_DQOT,        KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_N),     DE_PLUS,        RALT(KC_5),     LALT(KC_6),     DE_PERC,                                        RALT(KC_L),     DE_COLN,        KC_COMMA,       KC_DOT,         DE_QUOT,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    TD(DANCE_3),    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TD(DANCE_4),    
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           DE_Z,           KC_U,           KC_I,           KC_O,           KC_P,           DE_UE,          
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           DE_OE,          MT(MOD_RSFT, DE_AE),
    KC_NUBS,        ALL_T(DE_Y),    DUAL_FUNC_6,    MT(MOD_LCTL, KC_C),MT(MOD_LGUI, KC_V),MT(MOD_LALT, KC_B),                                MT(MOD_RALT, KC_N),MT(MOD_RGUI, KC_M),MT(MOD_RCTL, KC_COMMA),DUAL_FUNC_7,    MEH_T(DE_MINS), KC_NONUS_HASH,  
                                                    LT(6, KC_ENTER),LT(5, KC_TAB),                                  MT(MOD_LSFT, KC_BSPC),LT(4, KC_SPACE)
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DE_BSLS,        
    KC_TRANSPARENT, DE_GRV,         DE_LESS,        DE_MORE,        DE_MINS,        DE_PIPE,                                        DE_CIRC,        DE_LCBR,        DE_RCBR,        DE_DLR,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_EXLM,        DE_ASTR,        DE_SLSH,        DE_EQL,         DE_AMPR,                                        DE_HASH,        DE_LPRN,        DE_RPRN,        DE_SCLN,        DE_DQOT,        KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_TILD,        DE_PLUS,        DE_LBRC,        DE_RBRC,        DE_PERC,                                        DE_AT,          DE_COLN,        KC_COMMA,       KC_DOT,         DE_QUOT,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,DUAL_FUNC_8,    KC_AUDIO_VOL_UP,RGB_VAD,        RGB_VAI,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          TO(3),          KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,                                KC_7,           KC_8,           KC_9,           DE_MINS,        DE_SLSH,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_4,           KC_5,           KC_6,           DE_PLUS,        DE_ASTR,        KC_BSPC,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_1,           KC_2,           KC_3,           KC_DOT,         DE_EQL,         KC_ENTER,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { MT(MOD_RALT, KC_J), MT(MOD_RCTL, KC_K), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ESCAPE),
};



extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,255}, {0,0,255}, {74,255,255}, {0,0,255}, {74,255,255}, {74,255,255}, {131,255,255}, {0,0,255}, {74,255,255}, {0,0,255}, {74,255,255}, {74,255,255}, {0,0,255}, {0,0,255}, {74,255,255}, {0,0,255}, {74,255,255}, {74,255,255}, {0,0,255}, {131,255,255}, {74,255,255}, {0,0,255}, {74,255,255}, {74,255,255}, {20,241,250}, {20,241,250}, {74,255,255}, {74,255,255}, {0,0,255}, {74,255,255}, {0,0,255}, {0,0,255}, {74,255,255}, {74,255,255}, {0,0,255}, {74,255,255}, {0,0,255}, {0,0,255}, {74,255,255}, {74,255,255}, {0,0,255}, {74,255,255}, {0,0,255}, {0,0,255}, {74,255,255}, {74,255,255}, {0,0,255}, {74,255,255}, {131,255,255}, {0,0,255}, {20,241,250}, {20,241,250} },

    [1] = { {0,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {41,255,255}, {152,255,255}, {0,245,245}, {152,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,245,245}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {41,255,255}, {41,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {41,255,255}, {41,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255} },

    [2] = { {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {219,255,255}, {219,255,255}, {74,255,255}, {131,255,255}, {131,255,255}, {219,255,255}, {74,255,255}, {74,255,255}, {219,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {74,255,255}, {20,241,250}, {20,241,250}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {20,241,250}, {20,241,250}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {20,241,250}, {20,241,250}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {152,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255} },

    [3] = { {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {41,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {20,241,250}, {20,241,250}, {20,241,250}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {20,241,250}, {20,241,250}, {20,241,250}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245} },

    [4] = { {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203}, {65,90,203} },

    [5] = { {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {219,255,255}, {219,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {219,255,255}, {74,255,255}, {74,255,255}, {219,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {20,241,250}, {20,241,250}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {20,241,250}, {20,241,250}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {20,241,250}, {20,241,250}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {152,255,255}, {152,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255} },

    [6] = { {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {131,255,255}, {74,255,255}, {74,255,255}, {0,255,255}, {74,255,255}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {20,241,250}, {0,245,245}, {152,255,255}, {152,255,255}, {152,255,255}, {219,255,255}, {219,255,255}, {20,241,250}, {152,255,255}, {152,255,255}, {152,255,255}, {219,255,255}, {219,255,255}, {0,245,245}, {152,255,255}, {152,255,255}, {152,255,255}, {219,255,255}, {74,255,255}, {74,255,255}, {20,241,250}, {152,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[5];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: register_code16(DE_CIRC); break;
        case DOUBLE_TAP: register_code16(DE_CIRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: unregister_code16(DE_CIRC); break;
        case DOUBLE_TAP: unregister_code16(DE_CIRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(DE_SS);
        tap_code16(DE_SS);
        tap_code16(DE_SS);
    }
    if(state->count > 3) {
        tap_code16(DE_SS);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(DE_SS); break;
        case DOUBLE_TAP: register_code16(DE_ACUT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(DE_SS); register_code16(DE_SS);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(DE_SS); break;
        case DOUBLE_TAP: unregister_code16(DE_ACUT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(DE_SS); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(DE_UE);
        tap_code16(DE_UE);
        tap_code16(DE_UE);
    }
    if(state->count > 3) {
        tap_code16(DE_UE);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(DE_UE); break;
        case DOUBLE_TAP: register_code16(DE_PLUS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(DE_UE); register_code16(DE_UE);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(DE_UE); break;
        case DOUBLE_TAP: unregister_code16(DE_PLUS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(DE_UE); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(DE_CIRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(DE_CIRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(DE_SS);
        tap_code16(DE_SS);
        tap_code16(DE_SS);
    }
    if(state->count > 3) {
        tap_code16(DE_SS);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(DE_SS); break;
        case DOUBLE_TAP: register_code16(DE_ACUT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(DE_SS); register_code16(DE_SS);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(DE_SS); break;
        case DOUBLE_TAP: unregister_code16(DE_ACUT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(DE_SS); break;
    }
    dance_state[4].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_S);
        } else {
          unregister_code16(KC_S);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_SPACE));
        } else {
          unregister_code16(LCTL(KC_SPACE));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_V);
        } else {
          unregister_code16(KC_V);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_P));
        } else {
          unregister_code16(LGUI(KC_P));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_B);
        } else {
          unregister_code16(KC_B);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_SPACE));
        } else {
          unregister_code16(LGUI(KC_SPACE));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_P);
        } else {
          unregister_code16(KC_P);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(LSFT(KC_L)));
        } else {
          unregister_code16(LGUI(LSFT(KC_L)));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_L);
        } else {
          unregister_code16(KC_L);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RCTL(KC_SPACE));
        } else {
          unregister_code16(RCTL(KC_SPACE));
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_N);
        } else {
          unregister_code16(KC_N);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RGUI(KC_SPACE));
        } else {
          unregister_code16(RGUI(KC_SPACE));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_X);
        } else {
          unregister_code16(KC_X);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_SPACE));
        } else {
          unregister_code16(LCTL(KC_SPACE));
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RCTL(KC_SPACE));
        } else {
          unregister_code16(RCTL(KC_SPACE));
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_AUDIO_VOL_DOWN);
        } else {
          unregister_code16(KC_AUDIO_VOL_DOWN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_AUDIO_MUTE);
        } else {
          unregister_code16(KC_AUDIO_MUTE);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
