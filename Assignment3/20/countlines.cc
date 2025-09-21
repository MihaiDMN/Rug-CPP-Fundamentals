#include "main.ih"
#include <iostream>

using namespace std;
size_t countLines()
{
    size_t count = 0;
    string line;
    while (getline(cin, line))
        ++count;
    return count;
}
