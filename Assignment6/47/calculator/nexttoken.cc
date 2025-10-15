#include "calculator.h"

void Calculator::nextToken()
{
    if (d_ok)
        d_tokenizer.nextToken();
}
