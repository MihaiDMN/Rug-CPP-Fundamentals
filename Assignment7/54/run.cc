#include "fch.ih"

int Fch::run()
{
    if (!d_input.is_open())
        return 1;
    process();
    return 0;
}
