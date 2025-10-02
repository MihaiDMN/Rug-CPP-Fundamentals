#ifndef INCLUDED_COPYCAT_H
#define INCLUDED_COPYCAT_H

#include <cstddef>

class CopyCat
{
    size_t d_size; // number of elements
    char **d_data; // deep copy of the array of pointers

    public:
        CopyCat();                          // copies environ
        CopyCat(size_t argc, char **argv);  // copies argv[0...argc - 1]
        CopyCat(char **data);               // cp. any environ-like variable

    private:
        static char *ntbsCopy(char const *src);
        static size_t nElements(char **data);
        static char **duplicate(char **data);
};
#endif

