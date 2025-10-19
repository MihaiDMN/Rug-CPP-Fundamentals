#include "strings.ih"

void Strings::reserve(size_t newCapacity)
{
    if (newCapacity <= d_capacity)
        return;
    
    string *newRaw = newStorage(newCapacity);

    destroy();
    d_str = newRaw;
    d_capacity = newCapacity;
}
