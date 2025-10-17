#include "fch.h"

void Fch::changeAll(size_t pos)
{
    modify(pos);
    pos += d_replacement.size();
}
