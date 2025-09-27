#ifndef INCLUDED_CALCULATOR_H
#define INCLUDED_CALCULATOR_H

#include <string>
#include <cmath>
#include <iostream>

class Calculator
{   
    bool expression(char op);
    void number(double *dest, bool *isInt);
    bool getOperator(char &op);
    void evaluate(double left, char op, double right,
                  bool leftInt, bool rightInt);
    
    public:
        void run();
};
#endif
