#include "parser.ih"

using namespace std;
Parser::Return Parser::convert(double *dest, string const &str)
try
{
    return pureDouble(dest, str) ? NUMBER : NO_NUMBER;
}
catch (...)
{
    return NO_NUMBER;
}
