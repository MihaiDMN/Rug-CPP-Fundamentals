#include "strings.ih"

void Strings::reserve(size_t newCapacity)
{
    if (newCapacity <= d_capacity)
        return;
    
    string *newStorage = rawStrings(newCapacity);
    for (size_t idx = 0; idx < d_size; ++idx)
        new (newStorage + idx) string(move(d_str[idx]));

    destroy();
    d_str = newStorage;
    d_capacity = newCapacity;
}
