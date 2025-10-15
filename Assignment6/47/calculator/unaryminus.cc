#include "calculator.h"

Value Calculator::unaryMinus()
{
    nextToken();
    Value val = factor();
    if (val.token() == INT)
        val.intValue(-val.intValue());
    else
        val.doubleValue(-val.doubleValue());
    return val;
}
