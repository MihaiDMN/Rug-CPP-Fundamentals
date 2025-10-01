#include "copycat.h"
#include "copycat.ih"

extern char **environ;

CopyCat::CopyCat(size_t argc, char **argv)
:
    d_size(argc),
    d_data(new char*[argc + 1])
{
    for (size_t index = 0; index != argc; ++index)
        d_data[index] = ntbsCopy(argv[index]);
    d_data[argc] = nullptr;
}

CopyCat::CopyCat(char **data)
:
    d_size{nElements(data)},
    d_data{duplicate(data)}
{}

char *CopyCat::ntbsCopy(char const *src)
{
    size_t len = 0;
    while (src[len] != '\0')
        ++len;
    ++len;
    char *copy = new char[len];
    for (size_t index = 0; index != len; ++index)
        copy[index] = src[index];
    return copy;
}

size_t CopyCat::nElements(char **data)
{
    size_t count = 0;
    while (data[count] != nullptr)
        ++count;
    return count;
}

char **CopyCat::duplicate(char **data)
{
    size_t number = nElements(data);
    char **result = new char*[number + 1];
    for (size_t index = 0; index != number; ++index)
        result[index] = ntbsCopy(data[index]);
    result[number] = nullptr;
    return result;
}
