#include "calculator.h"

bool Calculator::mul(Value &lhs)
{
    nextToken();
    Value rhs = term();
    equalize(lhs, rhs);
    if (lhs.token() == INT)
        lhs.intValue(lhs.intValue() * rhs.intValue());
    else
        lhs.doubleValue(lhs.doubleValue() * rhs.doubleValue());
    return true;
}
