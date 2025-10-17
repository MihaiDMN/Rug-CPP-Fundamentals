#include "fch.h"
#include <iostream>

using namespace std;
void Fch::searchReplace()
{
    cerr << "Target text: ";
    getline(cin, d_target);
    
    cerr << "Replacement text: ";
    getline(cin, d_replacement);
}
