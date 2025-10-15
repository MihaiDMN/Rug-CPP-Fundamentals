#include "calculator.h"

Value Calculator::factor()
{
    return (this->*s_unit[d_tokenizer.token()])( );
}
