#include "copycat.h"
#include "copycat.ih"

extern char **environ;
char **CopyCat::duplicate(char **data)
{
    // allocates a new char array, copies each string using ntbsCopy
    size_t number = nElements(data);
    char **result = new char*[number + 1];
    for (size_t index = 0; index != number; ++index)
        result[index] = ntbsCopy(data[index]);
    result[number] = nullptr;
    return result;
}
