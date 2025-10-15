#include "symtab.h"

Symbol &Symtab::find(std::string const &ident)
{
    return *d_data[findIdx(ident)];
}
