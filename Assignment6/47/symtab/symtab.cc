#include "symtab.h"

Symtab::Symtab()
:
    d_data(new Symbol*[8]),
    d_size(0),
    d_capacity(8)
{}
