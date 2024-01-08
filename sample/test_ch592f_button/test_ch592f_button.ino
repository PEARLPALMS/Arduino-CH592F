/**
 * CH592F Button test
 * 2024/01/06 Sat pearlpalms@gmail.com
 * $Id:$
 *
 * GND <-> Switch <-> GPIO
 */

void setup(){

  // GPIO_ModeIN_Floating
  // GPIO_ModeIN_PU
  // GPIO_ModeIN_PD
  // GPIO_ModeOut_PP_5mA
  // GPIO_ModeOut_PP_20mA

  GPIOA_SetBits(GPIO_Pin_8);
  GPIOA_ModeCfg(GPIO_Pin_8, GPIO_ModeOut_PP_5mA);

  GPIOA_ModeCfg(GPIO_Pin_4, GPIO_ModeIN_PU);
  GPIOA_ModeCfg(GPIO_Pin_5, GPIO_ModeIN_PU);
  // GPIOA_ModeCfg(GPIO_Pin_8, GPIO_ModeIN_PU);
  GPIOA_ModeCfg(GPIO_Pin_9, GPIO_ModeIN_PU);
  GPIOA_ModeCfg(GPIO_Pin_10, GPIO_ModeIN_PU);
  GPIOA_ModeCfg(GPIO_Pin_11, GPIO_ModeIN_PU);
  GPIOA_ModeCfg(GPIO_Pin_12, GPIO_ModeIN_PU);
  GPIOA_ModeCfg(GPIO_Pin_13, GPIO_ModeIN_PU);
  GPIOA_ModeCfg(GPIO_Pin_14, GPIO_ModeIN_PU);
  GPIOA_ModeCfg(GPIO_Pin_15, GPIO_ModeIN_PU);

  GPIOB_ModeCfg(GPIO_Pin_4, GPIO_ModeIN_PU);
  GPIOB_ModeCfg(GPIO_Pin_7, GPIO_ModeIN_PU);
  GPIOB_ModeCfg(GPIO_Pin_10, GPIO_ModeIN_PU);
  GPIOB_ModeCfg(GPIO_Pin_11, GPIO_ModeIN_PU);
  GPIOB_ModeCfg(GPIO_Pin_12, GPIO_ModeIN_PU);
  GPIOB_ModeCfg(GPIO_Pin_13, GPIO_ModeIN_PU);
  GPIOB_ModeCfg(GPIO_Pin_14, GPIO_ModeIN_PU);
  GPIOB_ModeCfg(GPIO_Pin_15, GPIO_ModeIN_PU);
  // GPIOB_ModeCfg(GPIO_Pin_22, GPIO_ModeIN_PU);
  // GPIOB_ModeCfg(GPIO_Pin_23, GPIO_ModeIN_PU);

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

  // Input Pin A
  if(GPIOA_ReadPortPin(GPIO_Pin_4) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else if(GPIOA_ReadPortPin(GPIO_Pin_5) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else if(GPIOA_ReadPortPin(GPIO_Pin_9) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else if(GPIOA_ReadPortPin(GPIO_Pin_10) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else if(GPIOA_ReadPortPin(GPIO_Pin_11) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else if(GPIOA_ReadPortPin(GPIO_Pin_12) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else if(GPIOA_ReadPortPin(GPIO_Pin_13) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else if(GPIOA_ReadPortPin(GPIO_Pin_14) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else if(GPIOA_ReadPortPin(GPIO_Pin_15) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);

  // Input Pin B
  else if(GPIOB_ReadPortPin(GPIO_Pin_4) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else if(GPIOB_ReadPortPin(GPIO_Pin_7) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else if(GPIOB_ReadPortPin(GPIO_Pin_10) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else if(GPIOB_ReadPortPin(GPIO_Pin_11) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else if(GPIOB_ReadPortPin(GPIO_Pin_12) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else if(GPIOB_ReadPortPin(GPIO_Pin_13) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else if(GPIOB_ReadPortPin(GPIO_Pin_14) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  else if(GPIOB_ReadPortPin(GPIO_Pin_15) == 0)
    GPIOA_ResetBits(GPIO_Pin_8);
  // else if(GPIOB_ReadPortPin(GPIO_Pin_22) == 0)
  //   GPIOA_ResetBits(GPIO_Pin_8);
  // else if(GPIOB_ReadPortPin(GPIO_Pin_23) == 0)
  //   GPIOA_ResetBits(GPIO_Pin_8);
  else
    GPIOA_SetBits(GPIO_Pin_8);
}