#include "charcount.h"

using namespace std;
CharCount::Action CharCount::locate(unsigned char character, size_t &idx)
{
    size_t index = 0;
    
    while (index < d_info.nCharUni && d_info.ptr[index].ch < character)
        ++index;

    if (index < d_info.nCharUni && d_info.ptr[index].ch == character)
    {
        idx = index;
        return INCREMENT;
    }
       
    if (index == d_info.nCharUni)
        return APPEND;

    idx = index;
    return INSERT;
}
