#include "fch.h"

int Fch::run()
{
    if (!d_input.is_open())
        return 1;
    while (true)
    process();
    return 0;
}
