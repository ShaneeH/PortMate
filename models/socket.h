#ifndef SOCKET_H
#define SOCKET_H

#include <string>
#include <vector>
#include <cstdint>
#include "process.h"

struct Socket
{
    std::string protocol;
    std::string localAddress;
    std::string state;
    uint64_t inode;

    std::vector<Process> processes;
};

#endif // SOCKET_H