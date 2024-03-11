// PFM

#pragma once

#define MATRIX_ROWS 10
#define MATRIX_COLS 6

#define DIRECT_PINS { \
    { NO_PIN, GP3,    GP29,    GP2,     GP0,    NO_PIN }, \
    { GP23,   GP6,    GP26,    GP27,    GP4,    GP28   }, \
    { NO_PIN, GP9,    GP8,     GP20,    GP7,    GP22   }, \
    { NO_PIN, NO_PIN, NO_PIN,  GP14,    NO_PIN, NO_PIN }, \
    { NO_PIN, NO_PIN, NO_PIN,  GP15,    GP16,   GP21   }  \
}

#define DIRECT_PINS_RIGHT {  \
    { NO_PIN, GP0,    GP29,  GP2,     GP28,   NO_PIN }, \
    { GP3,    GP27,   GP4,   GP26,    GP5,    GP23   }, \
    { GP22,   GP6,    GP20,  GP7,     GP8,    NO_PIN }, \
    { NO_PIN, NO_PIN, GP21,  NO_PIN,  NO_PIN, NO_PIN }, \
    { GP9,    GP12,   GP13,  NO_PIN,  NO_PIN, NO_PIN }  \
}


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Serial Config */
#define USE_SERIAL
#define SERIAL_USART_TX_PIN GP1
#define MASTER_LEFT

/* I2C Pin mapping */
#define I2C1_SDA_PIN GP12
#define I2C1_SCL_PIN GP13
#define I2C1_CLOCK_SPEED 400000
#define I2C_DRIVER I2CD0


#define MK_COMBINED
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MAX_SPEED 8
#define MOUSEKEY_TIME_TO_MAX 80
// The default is 300. Let's try and make this as low as possible while keeping the cursor responsive
// #define MOUSEKEY_DELAY 100
// It makes sense to use the same delay for the mouseweel
// #define MOUSEKEY_WHEEL_DELAY 100
// The default is 100
// #define MOUSEKEY_WHEEL_INTERVAL 16
// The default is 40
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100

// 1 	Cursor offset per movement (KC_ACL0)
#define MK_C_OFFSET_0 	    2
// 32 	Time between cursor movements (KC_ACL0)
#define MK_C_INTERVAL_0 	  90
// 4 	Cursor offset per movement (KC_ACL1)
#define MK_C_OFFSET_1 	    2
// 16 	Time between cursor movements (KC_ACL1)
#define MK_C_INTERVAL_1 	  180
// 32 	Cursor offset per movement (KC_ACL2)
#define MK_C_OFFSET_2 	    4
// 16 	Time between cursor movements (KC_ACL2)
#define MK_C_INTERVAL_2 	  180

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200
// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0
// Allow nested taps to trigger hold before tapping term has expired
#define PERMISSIVE_HOLD

// increase delay to fix symbol layer issues with shifted keys not being recognised
#define TAP_CODE_DELAY 20

// #define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_FORCE_HOLD
#define USB_VBUS_PIN 19
#define AUDIO_PWM_DRIVER PWMD2
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_B
#define AUDIO_STATE_TIMER GPTD4
#define AUDIO_PIN GP5
#ifdef AUDIO_ENABLE
    #define AUDIO_INIT_DELAY
    // #define AUDIO_CLICKY
    // #define AUDIO_CLICKY_FREQ_RANDOMNESS 1.0f
    // #define STARTUP_SONG SONG(ODE_TO_JOY)
    #define STARTUP_SONG SONG(STARTUP_SOUND)
#endif


#define STARTUP_SOUND E__NOTE(_E6), E__NOTE(_A6), ED_NOTE(_E7),
// ODE_TO_JOY
#define UNICODE_SELECTED_MODES  UNICODE_MODE_LINUX


