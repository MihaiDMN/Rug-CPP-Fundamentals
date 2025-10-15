#include "calculator.h"

Value Calculator::ident()
{
    std::string name = d_tokenizer.ident();
    nextToken();
    Symbol &sym = d_symtab.find(name);
    return sym.value();
}
