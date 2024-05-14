#ifndef SRC_TC275_DELAY_DELAY_H_
#define SRC_TC275_DELAY_DELAY_H_

/*********************************************************************************************************************/
/*-----------------------------------------------------Includes------------------------------------------------------*/
/*********************************************************************************************************************/
#include "Bsp.h"

/*********************************************************************************************************************/
/*-------------------------------------------Inline Function Implementation------------------------------------------*/
/*********************************************************************************************************************/
static inline sint32 getTicksForMs(uint32 time)
{
    return IfxStm_getTicksFromMilliseconds(BSP_DEFAULT_TIMER, time);
}

static inline sint32 getTicksForUs(uint32 time)
{
    return IfxStm_getTicksFromMicroseconds(BSP_DEFAULT_TIMER, time);
}

static inline void delayMs(uint32 delay)
{
    waitTime(getTicksForMs(delay));
}

static inline void delayUs(uint32 delay)
{
    waitTime(getTicksForUs(delay));
}

static inline void delaySec(uint32 delay)
{
    waitTime(getTicksForMs(delay) * 1000);
}

static inline uint64 getCurStmTicks(void) {
    return IfxStm_get(&MODULE_STM0);
//    / IfxStm_getFrequency(&MODULE_STM0) * 1000000
}
#endif /* SRC_TC275_DELAY_DELAY_H_ */
