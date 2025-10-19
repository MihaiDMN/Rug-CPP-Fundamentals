#include "strings.ih"

void Strings::destroy()
{
    for (size_t idx = 0; idx != d_size; ++idx)
        d_str[idx].~basic_string();
    
    operator delete[](d_str);
    d_str = nullptr;
    d_capacity = 0;
}
