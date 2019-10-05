#include "debug.h"
#include <iostream>

int read_num()
{
#ifdef DEBUG_TRUE
    std::cerr << "---> read_num()\n";           // debug
#endif // DEBUG_TRUE

    std::cout << "number= ";
    int z{};
    std::cin  >> z;
    return z;
}

void write_answer(int answer)
{
#ifdef DEBUG_TRUE
    std::cerr << "---> write_answer()\n";       // debug
#endif // DEBUG_TRUE

    std::cout << "Result is: " << answer << std::endl;
}
