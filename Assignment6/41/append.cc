#include "charcount.h"

void CharCount::append(size_t idx, unsigned char character)
{
    if (d_info.nCharUni == d_capacity)
        enlarge();
    
    d_info.ptr[d_info.nCharUni].ch = character;
    d_info.ptr[d_info.nCharUni].count = 1;
    ++d_info.nCharUni;
}
