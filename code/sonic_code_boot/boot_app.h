/*********************************************************************\
* Author:       Christian Walter
* ------------------------------------------------------------------
* Project:      UltraSonic
* Name:         boot_func.c
* ------------------------------------------------------------------
* µ-Controler:  AT90CAN128/32
* Compiler:     avr-gcc (WINAVR 2010)
* Description:
* ------------------------------------------------------------------
* Bootloader Functions Applications
* ------------------------------------------------------------------
* Date:         02.01.2016
* lastChanges:  15.08.2016
\**********************************************************************/


/* ===================================================================*
 *            FUNSCTION-API
 * ===================================================================*/

t_UScmd Boot_Program_App(void);
t_UScmd Boot_Read_App(void);
void Boot_Write4Words2CAN(unsigned char page, unsigned char word);
