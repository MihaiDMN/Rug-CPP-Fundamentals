#include "charcount.h"

using namespace std;
CharCount::CharCount()
{
    d_info.ptr = nullptr;
    d_info.nCharUni = 0;
}

size_t CharCount::count(istream &in)
{
    char c;
    size_t total = 0;
    while (in.get(c))
    {
        locate(static_cast<unsigned char>(c));
        ++total;
    }
    return total;
}

CharCount::CharInfo const &CharCount::info() const
{
    return d_info;
}

void CharCount::locate(unsigned char c)
{
    size_t i = 0;
    
    while (i < d_info.nCharUni && d_info.ptr[i].ch < c)
        ++i;

    if (i < d_info.nCharUni && d_info.ptr[i].ch == c)
    {
        ++d_info.ptr[i].count;
        return;
    }
       
    Char *newPtr = new Char[d_info.nCharUni + 1];
    
    for (size_t j = 0; j < i; ++j)
        newPtr[j] = d_info.ptr[j];
    
    newPtr[i].ch = c;
    newPtr[i].count = 1;

    for (size_t j = i; j < d_info.nCharUni; ++j)
        newPtr[j + 1] = d_info.ptr[j];
    
    d_info.ptr = newPtr;
    ++d_info.nCharUni;
}
