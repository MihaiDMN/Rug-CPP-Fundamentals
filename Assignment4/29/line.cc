#include "line.h"
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

string Line::next()
{
    //returns the next substring of non-ws chars from getLine
    if (d_pos == string::npos)
        return "";

    d_pos = d_line.find_first_not_of(" \t", d_pos);
    if (d_pos == string::npos)
        return "";
    
    size_t end = d_line.find_first_of(" \t", d_pos);
    string substring = d_line.substr(d_pos, end - d_pos);
    
    d_pos = end;
    return substring;
}
