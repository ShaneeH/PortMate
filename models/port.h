#ifndef PORT_H
#define PORT_H

#include <vector>
#include "process.h"
#include "socket.h"

// Process → Socket → Port (How a computer networks)
// Port → Socket → Process (PortMate UI)

struct Port
{
    int number;
    std::vector<Socket> sockets;
};

#endif // PORT_H
