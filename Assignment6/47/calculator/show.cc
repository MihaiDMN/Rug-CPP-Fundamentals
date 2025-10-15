#include "calculator.h"

Token Calculator::show(Value const &value)
{
    switch (value.token())
    {    
        case DOUBLE:
            std::cout << value.doubleValue() << " (double)\n";
        break;

        case INT:
            std::cout << value.intValue() << " (int)\n";
        break;

        case IDENT:
        {
            auto symbol = d_symtab.at(value.intValue());
            std::cout << symbol.ident() << " [value: ";
            if (symbol.type() == INT)
                std::cout << symbol.intValue() << " (int)]\n";
            else
                std::cout << symbol.doubleValue() << " (double)]\n";
        }
        break;

        default: 
        break;
    }

    return ERROR;
}
