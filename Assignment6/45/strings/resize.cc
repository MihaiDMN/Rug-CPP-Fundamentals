#include "strings.ih"

void Strings::resize(size_t newSize)
{
    
    if (newSize < d_size)
    {
        for (size_t idx = d_size; idx != newSize; ++idx)
            d_str[idx].~basic_string();
    }
    else if (newSize > d_capacity)
        reserve(newSize);
    
    for (size_t idx = d_size; idx != newSize; ++idx)
        new (d_str + idx) string();

    d_size = newSize;
}
