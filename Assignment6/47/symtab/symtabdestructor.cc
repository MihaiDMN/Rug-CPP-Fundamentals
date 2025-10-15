#include "symtab.h"

Symtab::~Symtab()
{
    for (size_t idx = 0; idx != d_size; ++idx)
        delete d_data[idx];
    delete[] d_data;
}
