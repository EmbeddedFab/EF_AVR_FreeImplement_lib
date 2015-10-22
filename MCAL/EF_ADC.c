/***************************************************************
 *  Source File: EF_ADC.c
 *
 *  Description: ADC driver For ATMEGA32
 *
 *  History:     Version 1.0  - INIT Version
 *  Date   :     25/08/2014
 *  -------------------------------------------------------
 *  Author :     EmbeddedFab.
 *
 *  Copyright (C) <2014>  <EmbeddedFab>
 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 
 **************************************************************/

#include <avr/io.h>
#include <avr/interrupt.h>
#include "../ServiceLayer/std_types.h"
#include "EF_ADC.h"
#include "EF_DIO.h"
/*************************************************************
 * Global Definitions
**************************************************************/

/*************************************************************
 * API
**************************************************************/
/*********************************************************************
* Function    : EF_u16_ADC_read
*
* DESCRIPTION : this function initializes the timer module with the configuration data
*
* PARAMETERS  :  None
*
* Return Value: None
***********************************************************************/
 void EF_void_ADC_init(void)
{

}

/*********************************************************************
 * Function    : DIO_WritePort(U8_t PortName, U8_t Value);
 *
 * DESCRIPTION : this function is used to read ADC value from the o/p
 *
 * PARAMETERS  : ADC_PIN define which Single Ended Input channel, Enter
 * 				number from (0 to 7)
 *
 * Return Value: ADC value ratio (from 0 to 2^n ) , n: bit resolution
 *
 * NOTE: to read input voltage value use ( vin =ADC*(vref/2^n)), n: bit resolution
 ***********************************************************************/
 U16_t EF_u16_ADC_read(U8_t ADC_PIN)
{

}





/*ADC Conversion Complete Interrupt Service Routine (ISR)*/
//ISR(ADC_vect)
//{
	// set the a2d conversion flag to indicate "complete"
	//adcCompleteFlag = TRUE;
//}

