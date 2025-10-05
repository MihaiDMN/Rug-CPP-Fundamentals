#include "line.h"
#include <iostream>
using namespace std;

bool Line::getLine()
{
    // checks if there are no whitespace characters and returns true if that is the case
    if (!getline(cin, d_line))
        return false;
    
    for (size_t index = 0; index != d_line.size(); ++index)
    {
        if (!isspace(static_cast<unsigned char>(d_line[index])))
        {
            d_pos = 0;
            return true;
        }
    }
    return false;
}
