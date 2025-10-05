#include "copycat.h"
#include "copycat.ih"

extern char **environ;
size_t CopyCat::nElements(char **data)
{
    // counts how many strings are in the given char ** array
    size_t count = 0;
    while (data[count] != nullptr)
        ++count;
    return count;
}
