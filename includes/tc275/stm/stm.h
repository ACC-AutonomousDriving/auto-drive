#ifndef DRIVER_STM_H_
#define DRIVER_STM_H_

/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include "Ifx_Types.h"
#include "IfxStm.h"
#include "IfxCpu_Irq.h"
/*********************************************************************************************************************/
/*-------------------------------------------------Data Structures---------------------------------------------------*/
/*********************************************************************************************************************/
typedef struct
{
        uint8 f_1ms;
        uint8 f_10ms;
        uint8 f_100ms;
} schedulingFlag;

/*********************************************************************************************************************/
/*-------------------------------------------------Global variables--------------------------------------------------*/
/*********************************************************************************************************************/
extern schedulingFlag schedulingInfo;

/*********************************************************************************************************************/
/*------------------------------------------------Function Prototypes------------------------------------------------*/
/*********************************************************************************************************************/
extern void initStm(void);

#endif /* DRIVER_STM_H_ */
