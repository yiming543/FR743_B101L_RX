/**
  LIN Slave Application

  Company:
    Microchip Technology Inc.

  File Name:
    lin_app.c

  Summary:
    LIN Slave Application

  Description:
    This source file provides the interface between the user and
    the LIN drivers.

 */

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
 */

#include "lin_app.h"
#include <xc.h>

// 行車
#define DRIVING 0B00100000 // 0x20 data[5]
// 晝行
#define DRL 0B00000001 // 0x01 data[2]
// 近燈
#define LOW_BEAM 0B00001000 // 0x08 data[1]
// 遠燈
#define HIGH_BEAM 0B01000000 // 0x40 data[1]
// 左方向
#define LEFT_TURN_SIGNAL 0B00010000 // 0x10 data[1]
// 右方向
#define RIGHT_TURN_SIGNAL 0B00100000 // 0x20 data[1]

//#include "..\build\mcc_generated_files\pin_manager.h"
 #include "..\pin_manager.h"

void LIN_Slave_Initialize(void) {

    LIN_init(TABLE_SIZE, scheduleTable, processLIN);
}

void processLIN(void) {
    uint8_t tempRxData[8];
    uint8_t cmd;

    cmd = LIN_getPacket(tempRxData);
    switch (cmd) {

        case SW_STATE:
            if ( (tempRxData[5] & DRIVING) == DRIVING) {//行車
                LED1_SetHigh();
            } else {
                LED1_SetLow();
            }

            if ( (tempRxData[2] & DRL) == DRL) {//晝行
                LED2_SetHigh();
            } else {
                LED2_SetLow();
            }

            if ( (tempRxData[1] & LOW_BEAM) == LOW_BEAM) {//近燈
                LED3_SetHigh();
            } else {
                LED3_SetLow();
            }

            if ( (tempRxData[1] & HIGH_BEAM) == HIGH_BEAM) {//遠燈
                LED4_SetHigh();
            } else {
                LED4_SetLow();
            }

            if ( (tempRxData[1] & LEFT_TURN_SIGNAL) == LEFT_TURN_SIGNAL) {//左方向
                LED5_SetHigh();
            } else {
                LED5_SetLow();
            }
            
            if ( (tempRxData[1] & RIGHT_TURN_SIGNAL) == RIGHT_TURN_SIGNAL) {//右方向
                LED6_SetHigh();
            } else {
                LED6_SetLow();
            }

            
            

            break;

        default:
            break;
    }
}
