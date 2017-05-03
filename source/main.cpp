#include <mbed.h>
#include "DS18B20.h"
#include "OneWireDefs.h"
#include "nrf_delay.h"

int main()
{
    // device( crcOn, useAddress, parasitic, mbed pin )
    DS18B20 device(true, false, false, D2);
    
    while (!device.initialize());    // keep calling until it works
    
    while (true)
    {
        float temp;
        device.setResolution(twelveBit);
        temp = device.readTemperature(); 
        printf("Temp=%f\n", temp);
        wait(1);
    }
     
    return EXIT_SUCCESS;
}
