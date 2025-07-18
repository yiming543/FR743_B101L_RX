/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1936
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED6 aliases
#define LED6_TRIS                 TRISBbits.TRISB0
#define LED6_LAT                  LATBbits.LATB0
#define LED6_PORT                 PORTBbits.RB0
#define LED6_WPU                  WPUBbits.WPUB0
#define LED6_ANS                  ANSELBbits.ANSB0
#define LED6_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define LED6_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define LED6_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define LED6_GetValue()           PORTBbits.RB0
#define LED6_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define LED6_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define LED6_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define LED6_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define LED6_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define LED6_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set LED5 aliases
#define LED5_TRIS                 TRISBbits.TRISB1
#define LED5_LAT                  LATBbits.LATB1
#define LED5_PORT                 PORTBbits.RB1
#define LED5_WPU                  WPUBbits.WPUB1
#define LED5_ANS                  ANSELBbits.ANSB1
#define LED5_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define LED5_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define LED5_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define LED5_GetValue()           PORTBbits.RB1
#define LED5_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define LED5_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define LED5_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define LED5_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define LED5_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define LED5_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set LED4 aliases
#define LED4_TRIS                 TRISBbits.TRISB2
#define LED4_LAT                  LATBbits.LATB2
#define LED4_PORT                 PORTBbits.RB2
#define LED4_WPU                  WPUBbits.WPUB2
#define LED4_ANS                  ANSELBbits.ANSB2
#define LED4_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define LED4_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define LED4_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define LED4_GetValue()           PORTBbits.RB2
#define LED4_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define LED4_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define LED4_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define LED4_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define LED4_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS                 TRISBbits.TRISB3
#define LED3_LAT                  LATBbits.LATB3
#define LED3_PORT                 PORTBbits.RB3
#define LED3_WPU                  WPUBbits.WPUB3
#define LED3_ANS                  ANSELBbits.ANSB3
#define LED3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define LED3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define LED3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define LED3_GetValue()           PORTBbits.RB3
#define LED3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define LED3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define LED3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define LED3_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define LED3_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISBbits.TRISB4
#define LED2_LAT                  LATBbits.LATB4
#define LED2_PORT                 PORTBbits.RB4
#define LED2_WPU                  WPUBbits.WPUB4
#define LED2_ANS                  ANSELBbits.ANSB4
#define LED2_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LED2_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LED2_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LED2_GetValue()           PORTBbits.RB4
#define LED2_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LED2_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define LED2_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS                 TRISBbits.TRISB5
#define LED1_LAT                  LATBbits.LATB5
#define LED1_PORT                 PORTBbits.RB5
#define LED1_WPU                  WPUBbits.WPUB5
#define LED1_ANS                  ANSELBbits.ANSB5
#define LED1_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define LED1_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define LED1_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define LED1_GetValue()           PORTBbits.RB5
#define LED1_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define LED1_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define LED1_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/