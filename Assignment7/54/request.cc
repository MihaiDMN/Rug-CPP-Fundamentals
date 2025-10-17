#include "fch.h"
#include <iostream>

using namespace std;
char Fch::request() const
{
    char answer;
    cerr << "change [ynYN]?\n";
    cin >> answer;
    return answer;
}
