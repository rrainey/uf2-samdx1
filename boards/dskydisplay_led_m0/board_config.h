#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define CRYSTALLESS    1

#define VENDOR_NAME "Riley Rainey"
#define PRODUCT_NAME "DSKY-matic LED Display"
#define VOLUME_LABEL "DSKYBOOT"
#define INDEX_URL "https://github.com/rrainey"
#define BOARD_ID "SAMD21E18A-DSKY-LED-v3"

#define USB_VID 0x1209
#define USB_PID 0x2022

#define LED_PIN PIN_PA10
//#define LED_TX_PIN PIN_PA27
//#define LED_RX_PIN PIN_PB03

// RGB LED not present on this board
//#define BOARD_RGBLED_CLOCK_PIN            PIN_PA01
//#define BOARD_RGBLED_DATA_PIN             PIN_PA00

#endif
