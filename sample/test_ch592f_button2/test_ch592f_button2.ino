/**
 * CH592F Button2 test
 * 2024/01/09 Sat pearlpalms@gmail.com
 * $Id:$
 *
 * B14 <-> Switch <-> B12
 * B11 <-> Switch <->  B7
 *  B4 <-> Switch <-> B22
 */

void setup(){

  // Internal LED
  GPIOA_SetBits(GPIO_Pin_8);
  GPIOA_ModeCfg(GPIO_Pin_8, GPIO_ModeOut_PP_5mA);

  // Button 1
  GPIOA_SetBits(GPIO_Pin_14);
  GPIOB_ModeCfg(GPIO_Pin_14, GPIO_ModeOut_PP_5mA);
  GPIOB_ModeCfg(GPIO_Pin_12, GPIO_ModeIN_PU);

  // Button 2
  GPIOA_SetBits(GPIO_Pin_11);
  GPIOB_ModeCfg(GPIO_Pin_11, GPIO_ModeOut_PP_5mA);
  GPIOB_ModeCfg(GPIO_Pin_7, GPIO_ModeIN_PU);

  // Button 3
  GPIOA_SetBits(GPIO_Pin_4);
  GPIOB_ModeCfg(GPIO_Pin_4, GPIO_ModeOut_PP_5mA);
  GPIOB_ModeCfg(GPIO_Pin_22, GPIO_ModeIN_PU);

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

  // Button 1
  if(GPIOB_ReadPortPin(GPIO_Pin_7) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  // Button 2
  else if(GPIOB_ReadPortPin(GPIO_Pin_12) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  // Button 3
  else if(GPIOB_ReadPortPin(GPIO_Pin_22) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else
    GPIOA_SetBits(GPIO_Pin_8);
}