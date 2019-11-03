// Lab8.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Lab8.h"


// This is an example of an exported variable
LAB8_API int nLab8=0;

// This is an example of an exported function.
LAB8_API int fnLab8(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CLab8::CLab8()
{
    return;
}
