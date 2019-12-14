#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"

uint8_t ui8PinData=2;

int main(void)
{
    SysCtlClockSet(SYSCTL_SYSDIV_10|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_OSC_MAIN);

    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3);

    while(1)
    {

        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3, ui8PinData);
        SysCtlDelay(0.5*(SysCtlClockGet() / 3));
        GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3, 0x00);
        SysCtlDelay(0.5*(SysCtlClockGet() / 3));
        if(ui8PinData==2){ui8PinData=8;}
        else if(ui8PinData==4){ui8PinData=10;}
        else if(ui8PinData==10){ui8PinData=6;}
        else if (ui8PinData==6){ui8PinData=12;}
        else if (ui8PinData==12){ui8PinData=14;}
        else if (ui8PinData==14){ui8PinData=2;}
        else{ui8PinData=ui8PinData/2;}
    }
}
