#include "symbol.h"

CompareResult Symbol::compare(std::string const &rhs) const
{
    if (d_ident < rhs)
        return LHS_FIRST;
    if (d_ident > rhs)
        return RHS_FIRST;
    return EQUAL;
}
