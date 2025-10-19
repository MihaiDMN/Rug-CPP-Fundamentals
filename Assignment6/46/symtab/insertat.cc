#include "symtab.h"

void Symtab::insertAt(size_t pos, std::string const &ident)
{
    if (d_size == d_capacity)
        expand();

    for (size_t idx = d_size; idx > pos; --idx)
        d_data[idx] = d_data[idx - 1];
    
    d_data[pos] = new Symbol(ident);
    ++d_size;
}
