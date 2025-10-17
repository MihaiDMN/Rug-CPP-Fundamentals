#include "fch.h"

void Fch::modify(size_t pos)
{
    d_line.replace(pos, d_target.size(), d_replacement);
}
