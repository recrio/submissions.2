/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-B06
 */

#include <xdc/std.h>

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle ADC3Sem;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle getADC3Task;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle UARTSem;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle UARTdisplayADCTask;

#include <ti/sysbios/hal/Hwi.h>
extern const ti_sysbios_hal_Hwi_Handle Timer_2A_int;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle SW_Read;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle SW_ReadSem;

extern int xdc_runtime_Startup__EXECFXN__C;

extern int xdc_runtime_Startup__RESETFXN__C;

