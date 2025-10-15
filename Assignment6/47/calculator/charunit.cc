#include "calculator.h"

Value Calculator::charUnit()
{
    int ch = d_tokenizer.charValue();
    nextToken();
    return Value(ch);
}
