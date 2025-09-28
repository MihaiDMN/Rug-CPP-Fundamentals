#ifndef INCLUDED_CALCULATOR_H
#define INCLUDED_CALCULATOR_H

#include <string>
#include <cmath>
#include <iostream>

class Calculator
{   
    bool expression(char op); // checks if the expression is valid
    void number(double *dest, bool *isInt); 
    // checks if the number is a positive integer and not 0
    bool getOperator(char &op);
    // checks if the operator is valid
    void evaluate(double left, char op, double right,
                  bool leftInt, bool rightInt);
    // does the calculation requested by the user
    
    public:
        void run();
    // parses through the input line and calls the expression funtion
};
#endif
