#include "calculator.h"

Value Calculator::expr()
{
    Value ret = term();
    while ((this->*s_term[charTokens("+-")])(ret))
        ;
    return ret;
}
