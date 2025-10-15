#include "calculator.h"

bool (Calculator::*Calculator::s_factor[])(Value &) = 
{
    &Calculator::mul, &Calculator::div, &Calculator::mod, &Calculator::done
};
