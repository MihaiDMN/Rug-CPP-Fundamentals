#include "parser.ih"

using namespace std;
Parser::Return Parser::number(double *dest)
{   
    string substring = d_line.next();
    if (substring.empty())
        return EOLN;
    
    return convert(dest, substring);
}

