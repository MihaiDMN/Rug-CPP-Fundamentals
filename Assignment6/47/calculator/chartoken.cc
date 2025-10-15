#include "calculator.h"

bool Calculator::charToken(int ch)
{
    return (d_tokenizer.token() == CHAR && d_tokenizer.charValue() == ch);
}
