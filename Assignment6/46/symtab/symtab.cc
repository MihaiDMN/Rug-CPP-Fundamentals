#include "symtab.h"

Symtab::Symtab()
:
    d_data(new Symbol*[2]),
    d_size(0),
    d_capacity(8)
{}
