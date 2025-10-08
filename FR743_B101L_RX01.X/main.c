// 20250711 CS:BF2E V01
// 初版只有遠燈
//  D2 bit3 行車
//  D2 bit6 晝行
//  D1 bit7 超車
//  D1 bit6 遠燈
//  D1 bit5 右方向
//  D1 bit4 左方向
// D0    D1    D2    D3    D4    D5    D6    D7
// 0x24  0x00  0x00  0x00  0x00  0x00  0x00  0x00

// D0
// 0x01 UNLOCK
// 0x11 LOCK
// 0x24 引擎啟動

// D1
// 0x80 超車 bit7
// 0x40 遠燈 bit6
// 0x20 右方向 bit5
// 0x10 左方向 bit4

// D2
// 0x51 OFF mode 晝行
// 0x14 POS mode 位置燈(行車)
// 0x4C AUTO mode 白天 晝行
// 0x94 AUTO mode 夜間 近燈+行車
// 0x13 近燈 mode 近燈
// bit6 晝行
// bit3 行車

//20250715 CS:858A V02
//add UART auto baud,power on 最多做10次.

//20250715 CS:97D3 V03
//modify LIN auto baud 在每次接收同步信號時.

//20250715 CS:67DB V04
//modify LIN auto baud 在每次接收同步信號時,如果沒有接收到同步信號,則會重置UART,重新開始接收同步信號.
//timer out 41ms
//做auto baud時,不會卡死程式，會回到主程式執行，等到auto baud完成時(BAUDCONbits.ABDEN = 0)
//才開始接收程式。

//20250908 V05 CS:E04B
//車輛實測 ford ranger 2023
// #define MODE_OFF_DRL 0x49
// #define MODE_POS 0x0A
// #define MODE_AUTO_DAY 0x4C
// #define MODE_AUTO_NIGHT 0x8C
// #define MODE_LOW_BEAM 0x0B
// #define MODE_OFF_DRL_24 0x51
// #define MODE_POS_24 0x14
// #define MODE_POS_24_2 0x12
// #define MODE_AUTO_NIGHT_24 0x94
// #define MODE_AUTO_NIGHT_24_2 0xAC
// #define MODE_LOW_BEAM_24 0x13
// // 超車
// #define OVER_TAKING 0B10000000 // 0x80 data[1]
// // 遠燈
// #define HIGH_BEAM 0B01000000 // 0x40 data[1]
// // 左方向
// #define LEFT_TURN_SIGNAL 0B00010000 // 0x10 data[1]
// // 右方向
// #define RIGHT_TURN_SIGNAL 0B00100000 // 0x20 data[1]
// //晝行
// #define DRL 0B01000000 // 0x40 data[2]
// //近燈
// #define LOBEAM 0B00001000 // 0x08 data[4]
// //行車
// #define POS 0B00000011 // 0x03 data[4]
// 收到LIN訊號後，設定燈號旗標


/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules
  selected in the GUI. Generation Information : Product Revision  :  PIC10 /
  PIC12 / PIC16 / PIC18 MCUs - 1.81.8 Device            :  PIC16F1936 Driver
  Version    :  2.00
 */

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip software
   and any derivatives exclusively with Microchip products. It is your
   responsibility to comply with third party license terms applicable to your
   use of third party software (including open source software) that may
   accompany Microchip software.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS
    FOR A PARTICULAR PURPOSE.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS
    SOFTWARE.
 */

#include "mcc_generated_files/mcc.h"
#include "LINDrivers/lin_slave.h"
#include <pic.h>
#include <pic16f1936.h>

/*
                         Main application
 */
void main(void) {
  // initialize the device
  SYSTEM_Initialize();

  // When using interrupts, you need to set the Global and Peripheral Interrupt
  // Enable bits Use the following macros to:

  // Enable the Global Interrupts
  INTERRUPT_GlobalInterruptEnable();

  // Enable the Peripheral Interrupts
  INTERRUPT_PeripheralInterruptEnable();

  // Disable the Global Interrupts
  // INTERRUPT_GlobalInterruptDisable();

  // Disable the Peripheral Interrupts
  // INTERRUPT_PeripheralInterruptDisable();

  while (1) {
    // Add your application code
    LIN_handler();
  }
}
/**
 End of File
 */