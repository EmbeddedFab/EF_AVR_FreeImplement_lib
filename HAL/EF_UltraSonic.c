 /***************************************************************
 *  Source File: EF_UltraSonic.c
 *
 *  Description: Simple driver for UltraSonic Sensor
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
/**************************************************
 * include files
 *************************************************/
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "EF_UltraSonic.h"
#include "../MCAL/EF_TIMER.h"
#include "EF_LCD.h"
#include "../ServiceLayer/std_types.h"
#include <string.h>
#include <stdlib.h>
#include "../MCAL/EF_DIO.h"


/************************************************************************
 ********************** Global API Functions ****************************
 ************************************************************************/

/*********************************************************************
 * Function    : void EF_UltraSonic_Init();
 *
 * DESCRIPTION : This function used to Initialise UltraSonic Sensor:
 * 				 	-Timer Initialise
 * 				 	-LCD Initialise
 * 				 	-Trigger Initialise
 * 				 	-Echo Initialise
 * 				 	-Test led Initialise
 *
 * PARAMETERS  : None
 *
 * Return Value: None
 ***********************************************************************/
void EF_UltraSonic_Init()
{

}

/**************************************************************************
 * Function    : U16_t EF_UltraSonic_GetDistance ();
 *
 * DESCRIPTION : This function used to trigger the sensor then get the distance
 * 				 between UltraSonic Sensor  and any barrier front of this Sensor
 *
 * PARAMETERS  : Void.
 *
 * Return Value: Distance_cm from any barrier front of UltraSonic Sensor
 * 				 if Interrupt based return 1 and ISR will calculate it and print in LCD
 ***************************************************************************/
U16_t EF_UltraSonic_GetDistance ()
{

}




