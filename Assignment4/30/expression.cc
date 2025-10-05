#include "calculator.h"

using namespace std;
bool Calculator::expression(char op)
{
    // checks if the expression is valid
    if (getOperator(op))
        return true;
    else
        return false; 
}
