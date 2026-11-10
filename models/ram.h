#ifndef RAM_H
#define RAM_H

// This is what is returned to the Widget when the application is opened
// for the user to see

struct Ram{
    long int totalMem;
    long int freelMem;
    long int usedMem;
};

#endif // RAM_H
