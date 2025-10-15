#include "calculator.h"

bool Calculator::divisionOK(bool zeroRhs)
{
    if (!zeroRhs)
    {
        std::cout << "division by zero\n";
        d_ok = false;
        return false;
    }
    return true;
}
