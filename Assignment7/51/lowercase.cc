#include "main.ih"

string lowercase(const string &str)
{
    string result = str;
    for (char &ch : result)
        ch = tolower(static_cast<unsigned char>(ch));
    return result;
}
