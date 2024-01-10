/********************************** (C) COPYRIGHT *******************************
 * File Name          : main.c
 * Author             : WCH
 * Version            : V1.0
 * Date               : 2020/08/06
 * Description        : ﾀｶﾑﾀｼ・ﾌﾓｦﾓﾃﾖｯﾊｼｰﾈﾎﾎｵﾍｳｳｼｻｯ
 *********************************************************************************
 * Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
 * Attention: This software (modified or not) and binary are used for 
 * microcontroller manufactured by Nanjing Qinheng Microelectronics.
 *******************************************************************************/

/******************************************************************************/
/* ﾍｷﾎﾄｼｰ・ｬ */
#include "CONFIG.h"
#include "HAL.h"
#include "hiddev.h"
#include "hidkbd.h"

/*********************************************************************
 * GLOBAL TYPEDEFS
 */
__attribute__((aligned(4))) uint32_t MEM_BUF[BLE_MEMHEAP_SIZE / 4];

#if(defined(BLE_MAC)) && (BLE_MAC == TRUE)
const uint8_t MacAddr[6] = {0x84, 0xC2, 0xE4, 0x03, 0x02, 0x02};
#endif

/*********************************************************************
 * @fn      Main_Circulation
 *
 * @brief   ﾖｭｻｷ
 *
 * @return  none
 */
__HIGH_CODE
__attribute__((noinline))
void Main_Circulation()
{
    while(1)
    {
        TMOS_SystemProcess();
    }
}

/*********************************************************************
 * @fn      main
 *
 * @brief   ﾖｯﾊ
 *
 * @return  none
 */
void setup()
{
#if(defined(DCDC_ENABLE)) && (DCDC_ENABLE == TRUE)
    // PWR_DCDCCfg(ENABLE);
#endif
    SetSysClock(CLK_SOURCE_PLL_60MHz);
#if(defined(HAL_SLEEP)) && (HAL_SLEEP == TRUE)
    // GPIOA_ModeCfg(GPIO_Pin_All, GPIO_ModeIN_PU);
    // GPIOB_ModeCfg(GPIO_Pin_All, GPIO_ModeIN_PU);
#endif
#ifdef DEBUG
    // GPIOA_SetBits(bTXD1);
    // GPIOA_ModeCfg(bTXD1, GPIO_ModeOut_PP_5mA);
    // UART1_DefInit();
#endif

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

    PRINT("%s\n", VER_LIB);
    CH59x_BLEInit();
    HAL_Init();
    GAPRole_PeripheralInit();
    HidDev_Init();
    HidEmu_Init();
    Main_Circulation();
}

void loop(){}

/******************************** endfile @ main ******************************/