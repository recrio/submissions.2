#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/fpu.h"
#include "driverlib/sysctl.h"
#include "driverlib/rom.h"
// If there is no previous definition of PI, Define it here.
#ifndef M_PI
#define M_PI                    3.14159265358979323846
#endif
// Define a series length of 100
#define SERIES_LENGTH 100
// A float array of length 100
float gSeriesData[SERIES_LENGTH];
// Counter i = 0;
int32_t i32DataCount = 0;

int main(void)
{
    float fRadians;
    // Faster speed for less accuracy
    ROM_FPULazyStackingEnable();
    ROM_FPUEnable();
    // Set Clock speed
    ROM_SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
    // 2pi/100
    fRadians = ((2 * M_PI) / SERIES_LENGTH);
    // for i < 100;
    while(i32DataCount < SERIES_LENGTH)
    {
        // Saving points in a sine wave in gSeries Data
        gSeriesData[i32DataCount] = sinf(fRadians * i32DataCount);
        // i++
        i32DataCount++;
    }

    while(1)
    {
    }
}
