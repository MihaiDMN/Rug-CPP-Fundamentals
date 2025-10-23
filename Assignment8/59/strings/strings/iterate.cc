#include "strings.ih"

void Strings::iterate(char **environLike)
{
    for (size_t idx = 0; idx != d_nIterate; ++idx)
    {
        Strings tmp;
        tmp.d_enlarge = d_enlarge;
        
        for (char **ptr = environLike; *ptr; ++ptr)
            tmp.add(*ptr);
    }
}
