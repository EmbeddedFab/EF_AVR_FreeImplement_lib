/***************************************************************
 *  Source File: EF_Wavecom.c
 *
 *  Description: This simple driver for Wavecom  Fastrack M1306B (GSM module)
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
#include "EF_Wavecom.h"
#include <string.h>

/***********************************************************************
 ********************** Global API Functions****************************
 ***********************************************************************/

/*********************************************************************
* Function    : EF_BOOLEAN_Wavecom_InitModule (void);
*
* DESCRIPTION : This function used to initialise GSM Module:
* 					disable Echo,
* 					Enable General Indication,
* 					Enable General Error Indication,
					no flow control,
* 					check for PIN code ready,
* 					check if the module is ready to receive or not,
* 					check the network registration.
*
* PARAMETERS  : none.
*
* Return Value: BOOLEAN to check for Errors
**********************************************************************/
BOOLEAN EF_BOOLEAN_Wavecom_InitModule (void)
{

}

/********************************************************************************
* Function    : EF_BOOLEAN_Wavecom_InitSms (Wavecom_Sms_cfg_str* Wavecom_Sms_cfg_ptr);
*
* DESCRIPTION : This function used to set the SMS Indication Commands
*
* PARAMETERS  : Wavecom_Sms_cfg_ptr is a pointer to Wavecom_Sms_cfg_str to
* 				configure the SMS Indication CMDs
*
* Return Value: BOOLEAN to check for Errors
********************************************************************************/
BOOLEAN EF_BOOLEAN_Wavecom_InitSms (Wavecom_Sms_cfg_str* Wavecom_Sms_cfg_ptr)
{
}

/*********************************************************************
* Function    : EF_BOOLEAN_Wavecom_SendSms  (U8_t* MobileNumber_ptr, U8_t NumberLength,
* 										 U8_t* SendData_ptr, U16_t DataLength);
*
* DESCRIPTION : This function used to check number and Data_ptr then Send SMS
*
* PARAMETERS  : U8_t* MobileNumber_ptr: pointer to Mobile Number in "ASCII"
* 				U8_t  NumberLength    : has the length of Mobile Number
* 			    U8_t* SendData_ptr    : pointer to the data which you want to send as SMS
*				U8_t  DataLength      : length of the data which you want to send as SMS
*
* Return Value: BOOLEAN to check for Errors
**********************************************************************/
BOOLEAN EF_BOOLEAN_Wavecom_SendSms (U8_t* MobileNumber_ptr, U8_t NumberLength, U8_t* SendData_ptr, U16_t DataLength)
{
}


/*********************************************************************
* Function    : EF_S16_Wavecom_ReadSms (Wavecom_ReadSms_cfg_str* Wavecom_ReadSms_cfg_ptr);
*
* DESCRIPTION : This function used to Read SMS
*
* PARAMETERS  : Wavecom_ReadSms_cfg_ptr is pointer to Wavecom_ReadSms_cfg_str
* 				to define what types of SMS which you want to read
*
*
* Return Value: -1		 : Error
* 				 0		 : SMS is not found
* 				 <number>: SMS length
**********************************************************************/
S16_t 	EF_S16_Wavecom_ReadSms (Wavecom_ReadSms_cfg_str* Wavecom_ReadSms_cfg_ptr)
{
}


/*********************************************************************
* Function    : EF_BOOLEAN_Wavecom_InitCall (Wavecom_Call_cfg_str* Wavecom_Call_cfg_ptr);
*
* DESCRIPTION : This function used to configure the indication for incoming Call
*
* PARAMETERS  : Wavecom_Call_cfg_ptr is pointer to Wavecom_Call_cfg_str to
* 				define which indication is wanted to be enabled
*
*
* Return Value: BOOLEAN to check for Errors
**********************************************************************/
BOOLEAN EF_BOOLEAN_Wavecom_InitCall (Wavecom_Call_cfg_str* Wavecom_Call_cfg_ptr)
{
}



/*********************************************************************
* Function    :  EF_BOOLEAN_Wavecom_Call (U8_t* MobileNumber_ptr ,U8_t NumberLength)
*
* DESCRIPTION : This function used to check number then call
*
* PARAMETERS  : U8_t* MobileNumber_ptr: pointer to Mobile Number in "ASCII"
* 				U8_t  NumberLength    : has the length of Mobile Number
*
*
* Return Value: -1: Communication error
* 				 0: MobileNumber is wrong
* 				 1: OK
**********************************************************************/
S8_t EF_BOOLEAN_Wavecom_Call (U8_t* MobileNumber_ptr ,U8_t NumberLength)
{

}


/*********************************************************************
* Function    : EF_BOOLEAN_Wavecom_CallAnswer (void);
*
* DESCRIPTION : This function used to answer to the incoming call.
*
* PARAMETERS  : none.
*
* Return Value: BOOLEAN to check for Errors
**********************************************************************/
BOOLEAN EF_BOOLEAN_Wavecom_CallAnswer (void)
{

}

/*********************************************************************
* Function    : EF_BOOLEAN_Wavecom_CallRelease (void);
*
* DESCRIPTION : This function used to end the call.
*
* PARAMETERS  : none.
*
* Return Value: BOOLEAN to check for Errors
**********************************************************************/
BOOLEAN EF_BOOLEAN_Wavecom_CallRelease (void)
{

}

