#include "calculator.h"

Value Calculator::evaluate()
{
    Value lhs = expr();
    if (d_tokenizer.token() == CHAR && d_tokenizer.charValue() == '=')
    {
        nextToken();
        Value rhs = evaluate();
        
        if (lhs.token() != IDENT)
        {
            std::cout << "lhs of = must be a symbol\n";
            d_ok = false;
            return lhs;
        }
        assign(lhs, rhs);
        return lhs;
    }
    return lhs;
}
