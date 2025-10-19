#include "charcount.ih"

void CharCount::addChar(size_t idx, unsigned char character, bool shift)
{
    if (d_info.nCharUni == d_capacity)
        enlarge();
    
    if (shift)
    {
        for (size_t index = d_info.nCharUni; index != idx; --index)
            d_info.ptr[index] = d_info.ptr[index - 1];
    }
    d_info.ptr[idx].ch = character;
    d_info.ptr[idx].count = 1;
    ++d_info.nCharUni;
}
