#include "calculator.h"

void Calculator::prompt()
{
    d_ok = true;
    std::cout << "? ";
    d_tokenizer.nextToken();
}
