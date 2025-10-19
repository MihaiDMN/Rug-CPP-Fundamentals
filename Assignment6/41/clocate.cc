#include "charcount.ih"

using namespace std;
size_t CharCount::locate(unsigned char character) const
{
    size_t index = 0;
    
    while (index < d_info.nCharUni && d_info.ptr[index].ch < character)
        ++index;

    return index;
}
