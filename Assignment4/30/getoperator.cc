#include "calculator.h"

using namespace std;
bool Calculator::getOperator(char &op)
{
    // checks if the operator is valid
    switch (op)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
            return true;
        default:
            return false;
    }
}
