#include "symtab.h"

void Symtab::expand()
{
    size_t newCapacity = d_capacity * 2;
    Symbol **newData = new Symbol*[newCapacity];
    
    for (size_t idx = 0; idx != d_size; ++idx)
        newData[idx] = d_data[idx];
    
    delete[] d_data;
    d_data = newData;
    d_capacity = newCapacity;
}
