#include "numbers.ih"

Numbers::Numbers(size_t count, int value)
:
    d_length(count),
    d_data(new int[count])
{
    for (size_t idx = 0; idx != count; ++idx)
        d_data[idx] = value;
}
