#include "memoryservice.h"
#include <fstream>
#include <iostream>
#include <cstdint>

using namespace std;

memoryservice::memoryservice() {}

Ram memoryservice::getRam()
{
    double totalMemGB = 0.0;
    double availableMemGB = 0.0;
    double usedMemGB = 0.0;

    std::string word;
    std::ifstream file("/proc/meminfo");

    if (!file.is_open())
    {
        std::cerr << "Could not open /proc/meminfo\n";
        return Ram(0.0, 0.0, 0.0);
    }

    while (file >> word)
    {
        if (word == "MemTotal:")
        {
            uint64_t memTotalKB = 0;

            if (file >> memTotalKB)
            {
                totalMemGB = memTotalKB / 1024.0 / 1024.0;
            }
        }

        if (word == "MemAvailable:")
        {
            uint64_t memAvailableKB = 0;

            if (file >> memAvailableKB)
            {
                availableMemGB = memAvailableKB / 1024.0 / 1024.0;
            }
        }
    }

    usedMemGB = totalMemGB - availableMemGB;

    Ram systemRam(totalMemGB, availableMemGB, usedMemGB);


    return systemRam;
}