#include "calculator.h"

Value (Calculator::*Calculator::s_unit[])() = 
{
    &Calculator::notOK,
    &Calculator::charUnit,
    &Calculator::intDouble,
    &Calculator::ident,
    &Calculator::parenthesized,
    &Calculator::unaryMinus,    
};
