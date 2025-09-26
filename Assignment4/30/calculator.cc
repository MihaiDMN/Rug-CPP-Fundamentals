#include "calculator.h"
#include <iostream>
#include <cmath>
using namespace std;
void Calculator::run()
{
    string line;
    while (getline(cin, line))
    {   
        if (line.empty())
            break;
        size_t pos1 = 0;
        size_t pos2 = 0;
    
        pos2 = line.find(' ', pos1);
        string leftStr = line.substr(pos1, pos2 - pos1);
        double left = stod(leftStr);
        bool leftInt = false;
        number(&left, &leftInt);
        
        pos1 = pos2 + 1;
        pos2 = line.find(' ', pos1);
        string opStr = line.substr(pos1, pos2 - pos1);
        char op = opStr[0];

        pos1 = pos2 + 1;
        pos2 = line.find(' ', pos1);
        string rightStr = line.substr(pos1, pos2 - pos1);
        double right = stod(rightStr);
        bool rightInt = false;
        number(&right, &rightInt);
        
        if (expression(op))        
            evaluate(left, op, right, leftInt, rightInt);
        else
            cout << "Not a valid expression\n";
    }
}

void Calculator::evaluate(double left, char op, double right,
                          bool leftInt, bool rightInt)
{
    if (op == '+')
        cout << left + right << "\n";
    if (op == '-')
        cout << left - right << "\n";
    if (op == '*')
        cout << left * right << "\n";
    if (op == '/')
        {
            if (fabs(right) < 1e-8)
                cout << "Cannot divide by 0\n";
            else
                cout << left / right << "\n";
        }
    if (op == '%')
        {
            if (!leftInt || !rightInt || fabs(right) < 1e-8)
                cout << "The numbers must be non-zero integers for modulo\n";
            else
                cout << static_cast<int>(left) % static_cast<int>(right) << "\n";
        }
    
}
bool Calculator::expression(char op)
{
    if (getOperator(op))
        return true;
    else
        return false; 
}

void Calculator::number(double *dest, bool *isInt)
{
    *isInt = fabs(*dest - round(*dest)) < 1e-8;
}

bool Calculator::getOperator(char &op)
{
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


