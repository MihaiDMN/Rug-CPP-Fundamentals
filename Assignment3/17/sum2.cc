#include "sum.h"
#include <string>

using namespace std;
double sum(int argc, char *argv[], double total)
{
    double result = total;
    for (int i = 1; i != argc; ++i)
        result += stod(argv[i]);
    return result;
}
