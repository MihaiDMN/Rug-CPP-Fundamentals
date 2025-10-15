#include "symtab.h"

void Symtab::expand()
{
    d_capacity *= 2;
    Symbol **newData = new Symbol*[d_capacity];
    
    for (size_t idx = 0; idx != d_size; ++idx)
        newData[idx] = d_data[idx];
    
    delete[] d_data;
    d_data = newData;
}
