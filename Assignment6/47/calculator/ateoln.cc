#include "calculator.h"

bool Calculator::atEoln()           // eolns end expressions
{
    if (d_tokenizer.token() == CHAR && d_tokenizer.charValue() == '\n')
    {
        d_tokenizer.nextToken();
        return true;
     }

    return false;
}
