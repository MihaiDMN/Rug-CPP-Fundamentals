#include "fch.ih"

void Fch::processLine()
{
    size_t pos = 0;
    while (findTarget(pos))
        handleAction(pos);
}
