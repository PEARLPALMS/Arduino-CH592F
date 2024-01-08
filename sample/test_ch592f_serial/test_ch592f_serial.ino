/**
 * CH592F Serial test
 * 2023/12/31 Sun pearlpalms@gmail.com
 * $Id:$
 *
 *  CH592F === UART
 *     GND <-> GND
 *     +5V <-> +5V
 * (TX0)B7 <-> RX
 * (RX0)B4 <-> TX
 */

#include <CH59x_uart.h>

// Send buffer
uint8_t TxBuff[1024];
// Receive buffer
uint8_t RxBuff[1024];

void setup(){

  // System Clock
  SetSysClock(CLK_SOURCE_PLL_60MHz);

  // Internal LED
  GPIOA_SetBits(GPIO_Pin_8);
  GPIOA_ModeCfg(GPIO_Pin_8, GPIO_ModeOut_PP_5mA);

  // B7 PIN is TXD0
  GPIOB_SetBits(GPIO_Pin_7);
  GPIOB_ModeCfg(GPIO_Pin_7, GPIO_ModeOut_PP_5mA);
  // B4 PIN is RXD0
  GPIOB_ModeCfg(GPIO_Pin_4, GPIO_ModeIN_PU);

  // UART0
  UART0_DefInit();

  // Ready Indicator
  for(int i = 0; i < 9; i++){
    // LED on
    GPIOA_ResetBits(GPIO_Pin_8);
    delay(40);
    // LED off
    GPIOA_SetBits(GPIO_Pin_8);
    delay(40);
  }
}

void loop(){

  // Send TXD0
  sprintf((char*)TxBuff, "This is a tx and rx example\n");
  UART0_SendString((uint8_t*)TxBuff, length(TxBuff));
  GPIOA_ResetBits(GPIO_Pin_8);
  delay(500);

  // Receive RXD0 and Send TXD0
  uint8_t len = UART0_RecvString(RxBuff);
  if(len){
    if(RxBuff[len - 1] == '\n')
      RxBuff[len - 1] = '\0';
    sprintf((char*)TxBuff, "> Received data is [%s]\n", RxBuff);
    UART0_SendString((uint8_t*)TxBuff, length(TxBuff));
  }
  GPIOA_SetBits(GPIO_Pin_8);
  delay(1000);
}

/**
 * calculate uint8_t array length
 */
int length(uint8_t *s){
  int i = 0;
  while(true){
    if(s[i] == '\0')
      return(i);
    i++;
  }
}