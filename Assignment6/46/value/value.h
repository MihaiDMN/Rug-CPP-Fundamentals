#ifndef INCLUDED_VALUE_H
#define INCLUDED_VALUE_H

#include <iostream>
#include "../enum.h"

class Value
{
    Token d_token;
    union
    {
        double u_double;
        int u_int;
        char u_char;
    };
    public:
        Value();
        Value(int value);
        Value(double value);
        Value(char value);
        Value(size_t index, Token type);
    
        Token token() const;
        void token(Token token);
        
        int intValue() const;
        void intValue(int value);

        double doubleValue() const;
        void doubleValue(double value);
        
        char charValue() const;
        void charValue(char value);
        
        void requireSpecial(Token token);
};

#endif
