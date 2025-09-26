#include "parser.ih"

using namespace std;
bool Parser::reset()
{
    return d_line.getLine();
}

Parser::Return Parser::number(double *dest)
{   
    string substring = d_line.next();
    if (substring.empty())
        return EOLN;
    
    return convert(dest, substring);
}

bool Parser::isIntegral() const
{
    return d_integral;
}

string Parser::next()
{
    return d_line.next();
}

Parser::Return Parser::convert(double *dest, string const &str)
try
{
    return pureDouble(dest, str) ? NUMBER : NO_NUMBER;
}
catch (...)
{
    return NO_NUMBER;
}

bool Parser::pureDouble(double *dest, string const &str)
{
    size_t index = 0;
    *dest = stod(str, &index); 
    //try to convert string to double, remember position of the first invalid character 
    
    if (index != str.size())
        return false;
    //if index is not the same as the length of the string then some characters were invalid

    if (str.find('.') != string::npos || str.find('e') != string::npos ||
        str.find('E') != string::npos)
        d_integral = false;
    else
        d_integral = true;
    return true;
    //check for .,e and E characters and then return true as the conversion succeded
}
