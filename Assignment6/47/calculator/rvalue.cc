#include "calculator.h"

Value Calculator::rvalue(Value const &value) const
{
    if (value.token() == IDENT)
    {
        auto symbol = d_symtab.at(value.intValue());
        return symbol.value();
    }
    return value;
}
