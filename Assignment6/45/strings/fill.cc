#include "strings.ih"

void Strings::fill(char **ntbs)
{
    for (size_t idx = 0; idx != d_size; ++idx)
        new (d_str + idx) string(ntbs[idx]);
}
