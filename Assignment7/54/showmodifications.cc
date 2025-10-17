#include "fch.h"
#include <iostream>

using namespace std;
void Fch::showModification(size_t pos) const
{
    cerr << d_line << "\n";
    
    for (size_t idx = 0; idx != pos; ++idx)
        cerr << " ";
    for (size_t idx = 0; idx != d_target.size(); ++idx)
        cerr << "^";
    cerr << "\n";

    string modified = d_line;
    modified.replace(pos, d_target.size(), d_replacement);
    cerr << modified << "\n";
}
