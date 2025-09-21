#include "main.ih"
#include <iostream>

using namespace std;
size_t countWords()
{
    size_t count = 0;
    string word;
    while (cin >> word)
        ++count;
    return count;
}
