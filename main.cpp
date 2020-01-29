#include "z80.h"
#include <stdio.h>

int main()
{

    z80::initMemory();
    //z80::loadTest();
    z80::loadFirst();
    z80::cpuPower = true;
    for(;;) {
        z80::cpuStep();
    }
}
