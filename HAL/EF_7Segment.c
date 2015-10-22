/***************************************************************
 *  Source File: EF_7Segment.c
 *
 *  Description: This simple driver for 7-Segment
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

#include "EF_7Segment.h"

#include <avr/io.h>
#include "../MCAL/EF_DIO.h"
#include <util/delay.h>


/*********************************************************************
* Function    : void Segment_Init (void);
*
* DESCRIPTION : This function used to Initialize 7-Segment
*
* PARAMETERS  : void
*
*
* Return Value: Void
***********************************************************************/
void EF_void_Segment_Init (void)
{

}


/*********************************************************************
* Function    : Segment_Display(U8_t SegmentNumber);
*
* DESCRIPTION : This function used to display 7-Segment
*
* PARAMETERS  : U8_t SegmentNumber : Number in range 0 to 9999
*
*
* Return Value: Void
***********************************************************************/
void EF_void_Segment_Display(U16_t SegmentNumber)
{

}
