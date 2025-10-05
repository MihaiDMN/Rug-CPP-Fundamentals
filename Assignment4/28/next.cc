#include "line.h"
using namespace std;

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
