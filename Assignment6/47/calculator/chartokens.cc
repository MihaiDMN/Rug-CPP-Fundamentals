#include "calculator.h"

size_t Calculator::charTokens(std::string const &chars)
{
    if (d_tokenizer.token() != CHAR)
        return chars.length();
    
    for (size_t idx = 0; idx != chars.length(); ++idx)
        if (chars[idx] == d_tokenizer.charValue())
            return idx;
     
    return chars.length();
}
