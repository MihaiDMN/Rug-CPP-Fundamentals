#include "calculator.h"

void Calculator::toDouble(Value &rvalue)
{
    if (rvalue.token() == INT)
    {
        double val = static_cast<double>(rvalue.intValue());
        rvalue = Value(val);
    }
}
