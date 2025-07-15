// 20250711 CS:BF2E V01
// 初版只有遠燈
//  D5 bit5 行車
//  D2 bit0 晝行
//  D1 bit3 近燈
//  D1 bit6 遠燈
//  D1 bit4 左方向
//  D1 bit5 右方向

//20250715 CS:858A V02
//add UART auto baud,power on 最多做10次.

//20250715 CS:97D3 V03
//modify LIN auto baud 在每次接收同步信號時.

//20250715 CS:67DB V04
//modify LIN auto baud 在每次接收同步信號時,如果沒有接收到同步信號,則會重置UART,重新開始接收同步信號.
//timer out 41ms
//做auto baud時,不會卡死程式，會回到主程式執行，等到auto baud完成時(BAUDCONbits.ABDEN = 0)
//才開始接收程式。


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