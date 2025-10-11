#include "strings.ih"

std::string *Strings::rawStrings(size_t n)
{
    return static_cast<string *>(operator new[](n * sizeof(string)));
}
