#include "calculator.h"
#include <cmath>

bool Calculator::mod(Value &lhs)
{
    nextToken();
    Value rhs = term();
    
    if (lhs.token() == DOUBLE || rhs.token() == DOUBLE)
    {
        double left = lhs.doubleValue();
        double right = rhs.doubleValue();
        if (divisionOK(right))
            lhs.doubleValue(fmod(left, right));
        else
        {
            std::cerr << "division by zero\n";
            d_ok = false;
        }
    }
    else
    {
        int left = lhs.intValue();
        int right = rhs.intValue();
        if (right != 0)
            lhs.intValue(left % right);
        else
        {
            std::cerr << "division by zero\n";
            d_ok = false;
        }
    }
    return true;
}
