#include "strings.ih"

void Strings::reserve(size_t newCapacity)
{
    if (newCapacity <= d_capacity)
        return;
    
    string **newBlock = rawPointers(newCapacity);
    // copy old pointers to new block
    for (size_t idx = 0; idx < d_size; ++idx)
        newBlock[idx] = d_str[idx];

    delete[] d_str;
    d_str = newBlock;
    d_capacity = newCapacity;
}
