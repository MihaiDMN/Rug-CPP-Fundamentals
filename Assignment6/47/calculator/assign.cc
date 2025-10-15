#include "calculator.h"

void Calculator::assign(Value &lhs, Value const &rhs)
{
    if (lhs.token() != IDENT)
    {
        std::cout << "lhs of = must be a symbol\n";
        d_ok = false;
        return;
    }
    auto &symbol = d_symtab.at(lhs.intValue());
    symbol.assign(rhs);
}
