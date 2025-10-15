#include "calculator.h"

bool (Calculator::*Calculator::s_term[])(Value &) = 
{
    &Calculator::add, &Calculator::sub, &Calculator::done
};
