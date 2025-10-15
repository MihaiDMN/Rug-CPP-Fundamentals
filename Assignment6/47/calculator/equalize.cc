#include "calculator.h"

Token Calculator::equalize(Value &lhs, Value &rhs)
{
    if (lhs.token() == INT && rhs.token() == DOUBLE)
        toDouble(lhs);
    else if (lhs.token() == DOUBLE && rhs.token() == INT)
        toDouble(rhs);
    return lhs.token();
}
