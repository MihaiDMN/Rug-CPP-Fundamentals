#include "symbol.h"

Token Symbol::type() const
{
    return d_value.token();
}
