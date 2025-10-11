#include "strings.ih"

// static
size_t Strings::count(char **environLike)
{
    size_t count = 0;
    while (environLike[count])
        ++count;
    return count;
}
