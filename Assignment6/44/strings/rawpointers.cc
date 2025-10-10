#include "strings.ih"

std::string **Strings::rawPointers(size_t n)
{
    return new std::string*[n];
}
