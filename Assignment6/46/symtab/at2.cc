#include "symtab.h"

Symbol const &Symtab::at(size_t idx) const
{
    return *d_data[idx];
}
