#include "calculator.h"

Value Calculator::intDouble()
{
    if (d_tokenizer.token() == INT)
    {
        int val = d_tokenizer.intValue();
        nextToken();
        return Value(val);
    }
    else
    {
        double val = d_tokenizer.doubleValue();
        nextToken();
        return Value(val);
    }
}
