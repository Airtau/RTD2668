/*==========================================================================
  * Copyright (c)      Realtek Semiconductor Corporation, 2006
  * All rights reserved.
  * ========================================================================*/

/*================= File Description =======================================*/
/**
 * @file
 * 	This file is process key and ir input related functions.
 *
 * @author 	$Author$
 * @date		$Date$
 * @version	$Revision$
 * @ingroup	input
 */

/**
 * @addtogroup input
 * @{
 */

/*============================ Module dependency  ===========================*/
#include "userinput.h"
#include "irrc\irrc.h"
#include "timer_event.h"
#include "pcb_sys.h"
#include "message.h"
#include "rosprintf.h"
#include "ui_ctrl.h"
#include "osdcore.h"
//#include "pcb\pcb_utility.h"

/*===================================  Types ================================*/
/*================================== Variables ==============================*/
/*================================ Definitions ==============================*/
/*================================== Function ===============================*/
/*============================================================================*/
extern void timerevent_ui_table_ReadPowerKey(void);



extern UINT8 xdata stUISignalSource;
#if CONFIG_ENABLE_USB
extern void Send_IR(UINT16 usCode);
#endif


static void apsys_key_check(void)
{

    UINT8 keystate = 0, ret, ActTimerEven=3;
	extern UINT8 ucVirtualkey;
	
    keystate = fw_ir_message_pop();
    //if(keystate)
    //	RTD_Log(LOGGER_INFO, "\n\nkeystate=%x\n",(UINT32)keystate);

    if (keystate)
    	{
        RTD_Log(LOGGER_INFO, "After KeyPad read keystate=%x\n\n",(UINT32)keystate);	
		
    	}
    else
        // Check key status as followed
        keystate = ui_ReadKeyPad(0);
    if (keystate)
        fw_ui_message_push(keystate);
    else
    {
    	if(ucVirtualkey!= 0)
    		fw_ui_message_push(ucVirtualkey);
    		ucVirtualkey = 0;
    }

    do
    {
        ret = fw_timer_event_ActiveTimerEvent(SEC(0.05)/*(0.02)*/, apsys_key_check);
        if (ret==_TRUE)
            break;
        else
            fw_timer_event_CancelTimerEvent(apsys_key_check);
        	RTD_Log(LOGGER_INFO, "push in queue fail\n");
        ActTimerEven--;
    }
    while (ActTimerEven!=0);
    //RTD_Log(LOGGER_INFO, "...ret=%x\n", (UINT32)ret);
}


#if(IR_DETECTMODE == _IR_DS_SW)

/*********************************************************************
** ��������: static void apsys_Irin_check(void)
** ��������: ���IR����
** �䡡  ��: ��
** �䡡  ��: �� 
**********************************************************************/

static void apsys_Irin_check(void)
{
	static UINT32 ir_lastRaw = 0;
	UINT32 irRaw = 0;
	UINT32 irdata = 0;
	UINT8 i;
	bit IRfirstcode;
	UINT8 keymessage = _NONE_KEY_MESSAGE;
	
	irRaw = IR_Raw_data;
	IRfirstcode = bIR_firstcode;
	
	if(bIR_Receive == 0 || IRfirstcode == 1)//bIR_Receive��ʾҪ���գ�IRfirstcode��ʾ��һ��IR��Ҫǿ�ƽ���
	{
		bIR_Receive = 1;//�ý��ձ�־λ
		for(i=0;i<32;i++) //IR��ֵ���ߵ�λ
		{
			if(irRaw & (1L<<i))
				irdata |= (_BIT31>>i);
		}
		if(ir_lastRaw != irRaw || IRfirstcode == 1)//����ǵ�һ��IR�룬�����Ǹ�ǰ���IR�벻һ��
		{
			bIR_firstcode = 0;//��һ��IR��λ����

			IRRC_Command_Mapping(irdata,&keymessage);
			if(keymessage != _NONE_KEY_MESSAGE)
				fw_IR_message_push(keymessage);
			//RTD_Log(LOGGER_INFO, "\n..........bIR_Repeat is %x",(UINT32)bIR_Repeat);
			//RTD_Log(LOGGER_INFO, "\n..........IR_Raw_data is %x",irRaw);
			//RTD_Log(LOGGER_INFO, "\n..........irdata is %x",irdata);
		}
		else //�ظ���
		{
			IRRC_Command_Mapping(irdata,&keymessage);
			if(keymessage != _NONE_KEY_MESSAGE)
				if(_TRUE == Repeatkey_en(keymessage))//�ж��Ƿ�����������������
					fw_IR_message_push(keymessage);
		}
		IR_Raw_data = 0;
		ir_lastRaw = irRaw;
	}
	else
	{
		ir_lastRaw = 0;
	}
	
	fw_timer_event_ActiveTimerEvent(SEC(0.1), apsys_Irin_check);
}
#endif//#if(IR_DETECTMODE == _IR_DS_SW)

void fw_UserInput_Init(void)
{
    fw_timer_event_ActiveTimerEvent(SEC(0.10), apsys_key_check);

    RTD_Log(LOGGER_INFO, "\nInitial Key Scan handler is completed\n");
#if(IR_DETECTMODE == _IR_DS_SW)
    fw_timer_event_ActiveTimerEvent(SEC(0.10), apsys_Irin_check);
#endif    
}

void fw_UserInput_PowerOff(void)
{
    fw_timer_event_ActiveTimerEvent(SEC(0.10), timerevent_ui_table_ReadPowerKey);

    RTD_Log(LOGGER_INFO, "\nInitial Key Scan handler is completed[power off]\n");
#if(IR_DETECTMODE == _IR_DS_SW)
    fw_timer_event_ActiveTimerEvent(SEC(0.10), apsys_Irin_check);
#endif    
}
/*======================== End of File =======================================*/
/**
*
* @}
*/



