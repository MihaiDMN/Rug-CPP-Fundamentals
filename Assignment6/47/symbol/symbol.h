#ifndef INCLUDED_SYMBOL_H
#define INCLUDED_SYMBOL_H

#include <string>
#include "../value/value.h"

enum CompareResult
{
    LHS_FIRST,
    RHS_FIRST,
    EQUAL
};

class Symbol
{
    std::string d_ident;
    Value d_value;

    public:
        Symbol();
        Symbol(std::string const &ident);
        Symbol(std::string const &ident, int val);
        Symbol(std::string const &ident, double val);
        
        std::string const &ident() const;
        
        Value const &value() const;

        Token type() const;
        int intValue() const;
        double doubleValue() const;
        
        void assign(Value const &value);

        CompareResult compare(std::string const &rhs) const;
        
};

#endif
