#include "calculator.h"

Value Calculator::parenthesized()
{
    nextToken();
    Value val = evaluate();
    
    if (d_tokenizer.token() != CHAR || d_tokenizer.charValue() != ')')
    {
        std::cout << "paranthesis mismatch\n";
        d_ok = false;
        return val;
    }
    nextToken();
    return val;
}
