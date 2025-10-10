#include "strings.ih"

Strings::Strings(char **environLike)
:
    d_size(count(environLike)),
    d_capacity(d_size > 0 ? d_size : 1),
    d_str(rawPointers(d_capacity))
{
    fill(environLike);
}
