#include "fch.h"

bool Fch::findTarget(size_t &pos)
{
    size_t found = d_line.find(d_target, pos);
    if (found == std::string::npos)
        return false;
    pos = found;
    return true;
}
