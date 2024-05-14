#ifndef INCLUDES_PINSETTINGS_H_
#define INCLUDES_PINSETTINGS_H_

/*********************************************************************************************************************/
/*------------------------------------------------------Macros-------------------------------------------------------*/
/*********************************************************************************************************************/
#define PIN_ENC1_CHA        P15_0
#define PIN_ENC1_CHB        P15_1

#define PIN_ENC2_CHA        P33_9
#define PIN_ENC2_CHB        P33_8

#define PIN_UART_RX         IfxAsclin3_RXD_P32_2_IN
#define PIN_UART_TX         IfxAsclin3_TX_P15_7_OUT

#define PIN_MOTOR1_POWER    P02_1_TOM1_9
#define PIN_MOTOR1_DIR      P10_1
#define PIN_MOTOR1_BRAKE    P02_7

#define PIN_MOTOR2_POWER    P10_3_TOM0_3
#define PIN_MOTOR2_DIR      P10_2
#define PIN_MOTOR2_BRAKE    P02_6

#define PIN_US_TRIG         P14_0
#define PIN_US_ECHO_R       P14_1_IRQ
#define PIN_US_ECHO_F       P00_4_IRQ

#define PIN_BUZZER          P02_3

#endif /* INCLUDES_PINSETTINGS_H_ */
