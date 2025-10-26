#include "fch.ih"

void Fch::changeAll(size_t pos)
{
    modify(pos);
    pos += d_replacement.size();
}
