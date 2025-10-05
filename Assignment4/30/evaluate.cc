#include "calculator.h"

using namespace std;
void Calculator::evaluate(double left, char op, double right,
                          bool leftInt, bool rightInt)
{
    // executes the desired expression
    if (op == '+')
        cout << left + right << "\n";
    if (op == '-')
        cout << left - right << "\n";
    if (op == '*')
        cout << left * right << "\n";
    // check if the right value is not 0 before division
    if (op == '/')
        {
            if (fabs(right) < 1e-8)
                cout << "Cannot divide by 0\n";
            else
                cout << left / right << "\n";
        }
    // check that left and right are positive non-zero integers
    if (op == '%')
        {
            if (!leftInt || !rightInt)
                cout << "The numbers must be non-zero integers for modulo\n";
            else
                cout << static_cast<int>(left) % static_cast<int>(right) << "\n";
        }
    
}
