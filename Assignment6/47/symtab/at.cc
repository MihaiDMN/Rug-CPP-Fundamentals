#include "symtab.h"

Symbol &Symtab::at(size_t idx)
{
    return *d_data[idx];
}
