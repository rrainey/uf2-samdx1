#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

/* WIP: not tested */

#define VENDOR_NAME "Riley Rainey"
#define PRODUCT_NAME "Tempo M4 Skydive Logger"
#define VOLUME_LABEL "TEMPOBOOT"
#define INDEX_URL "https://github.com/rrainey/tempo"
#define BOARD_ID "SAMD51J20A-Tempo_M4-v1"

#define USB_VID 0x1029
#define USB_PID 0x2026

#define LED_PIN PIN_PA17

#define BOOT_USART_MODULE                 SERCOM2
#define BOOT_USART_MASK                   APBBMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBBMASK_SERCOM2
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PA13C_SERCOM2_PAD1
#define BOOT_USART_PAD0                   PINMUX_PA12C_SERCOM2_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM2_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM2_GCLK_ID_SLOW

#endif