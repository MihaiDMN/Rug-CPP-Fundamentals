#include "fch.ih"

bool Fch::findTarget(size_t &pos)
{
    size_t found = d_line.find(d_target, pos);
    if (found == string::npos)
        return false;
    pos = found;
    return true;
}
