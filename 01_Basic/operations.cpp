#include "debug.h"
#include <iostream>

int add(int a, int b)
{
#ifdef DEBUG_TRUE
    std::cerr << "entering add()\n";
#endif // DEBUG_TRUE

    int c{a + b};
    return c;
}
