#include "charcount.ih"

CharCount::Action CharCount::actionForIndex(unsigned char character, size_t &idx) const
{
    idx = locate(character);   
    if (idx < d_info.nCharUni && d_info.ptr[idx].ch == character)
        return INCREMENT;
    else if (idx == d_info.nCharUni)
        return APPEND;
    else
        return INSERT;
}
