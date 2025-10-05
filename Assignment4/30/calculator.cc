#include "calculator.h"

using namespace std;
void Calculator::run()
{
    string line;
    cout << "? ";
    while (getline(cin, line))
    {
        // parse through the input line and separate the left and right values and the operator   
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
        cout << "? ";
    }
}

