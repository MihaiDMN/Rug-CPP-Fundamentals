#include "strings.ih"

void Strings::add(string const &next)
{
    string *newStr = (this->*d_enlarge)();
    newStr[d_size] = next;
    delete[] d_str;
    d_str = newStr;
    ++d_size;
}
