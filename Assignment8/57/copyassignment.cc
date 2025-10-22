#include "strings.h"

Strings &Strings::operator=(Strings const &other)
{
    if (this != &other)
    {
        Strings tmp(other);
        swap(tmp);
    }
    return *this;
}
