#include "copycat.h"
#include "copycat.ih"

extern char **environ;
char *CopyCat::ntbsCopy(char const *src)
{
    // allocates a new char array and copies one NTBS into it
    size_t len = 0;
    while (src[len] != '\0')
        ++len;
    ++len;
    char *copy = new char[len];
    for (size_t index = 0; index != len; ++index)
        copy[index] = src[index];
    return copy;
}
