#include "main.ih"
#include <iostream>

using namespace std;
size_t countChars()
{
    size_t count = 0;
    char character;
    while (cin.get(character))
        ++count;
    return count;
}
