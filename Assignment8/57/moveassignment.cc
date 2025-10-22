#include "strings.h"

Strings &Strings::operator=(Strings &&tmp)
{
    if (this != &tmp)
    {
        destroy();
        d_szie = tmp.d_size;
        d_capacity = tmp.d_capacity;
        d_str = tmp.d_str;
        
        tmp.d_str = nullptr;
        tmp.d_size = 0;
        tmp.d_capacity = 0;
    }
    return *this;
}
