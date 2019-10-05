#include "debug.h"
#include "io.h"
#include "operations.h"

#include <iostream>
//#include <plog/Log.h>

int main()
{
#ifdef DEBUG_TRUE
    std::cerr << "---> main()\n";                   // debug
#endif // DEBUG_TRUE

    int result { add(read_num(), read_num()) };

    write_answer(result);

    return 0;
}
