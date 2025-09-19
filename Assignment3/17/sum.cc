#include "sum.h"
#include <string>

using namespace std;
int sum(int argc, char *argv[], int total)
{
    int result = total;
    for (int i = 1; i != argc; ++i)
        result += stoi(argv[i]);
    return result;
}

double sum(int argc, char *argv[], double total)
{
    double result = total;
    for (int i = 1; i != argc; ++i)
        result += stod(argv[i]);
    return result;
}

