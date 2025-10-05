#include "calculator.h"

using namespace std;
void Calculator::number(double *dest, bool *isInt)
{
    // checks if the number is a positive non-zero integer
    *isInt = *dest > 1e-8;
}
