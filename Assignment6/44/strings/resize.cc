#include "strings.ih"

void Strings::resize(size_t newSize)
{
    if (newSize > d_capacity)
        reserve(newSize);

    if (newSize > d_size)
    {
        for (size_t idx = d_size; idx != newSize; ++idx)
            d_str[idx] = new string;
    }
    else
    {
        for (size_t idx = newSize; idx != d_size; ++idx)
            delete d_str[idx];
    }

    d_size = newSize;
}
