#include "charcount.h"

CharCount::Char *CharCount::rawCapacity(size_t cap)
{
    return new Char[cap];
}
