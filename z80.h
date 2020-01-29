#pragma once

#include <stdint.h>

class z80
{
    public:
        static volatile bool cpuPower;
        static volatile uint64_t totalClockCycles;
	static void initMemory();
	static void loadTest();
	static void loadFirst();
        static void cpuStep();
    protected:
    private:
};
