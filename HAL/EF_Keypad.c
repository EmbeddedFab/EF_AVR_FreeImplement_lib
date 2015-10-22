/***************************************************************
 *  Source File: EF_KeyPad.c
 *
 *  Description: This simple driver for keypad 3X3
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
#include "EF_KeyPad.h"
#include "../MCAL/EF_DIO.h"

/*************************************************************
 * Global Definitions
**************************************************************/


/*************************************************************
 * API Functions
**************************************************************/
/*********************************************************************
* Function    : void EF_void_KeyPad_Init (void);
*
* DESCRIPTION : This function used to Initialize keypad
*
* PARAMETERS  : Void.
*            
*
* Return Value: Void.
***********************************************************************/
void EF_void_KeyPad_Init (void)
{

}
/*********************************************************************
* Function    : U8_t EF_u8_KeyPad_Scan (void);
*
* DESCRIPTION : This function used to scan the input if it existed
*
* PARAMETERS  : void
*            
*
* Return Value: U8_t : Return number from (1 to 9) if user press any
                       key or 0 if user not press.
***********************************************************************/
U8_t EF_u8_KeyPad_Scan (void)
{

}



