#include "numbers.ih"

Numbers::Numbers(Numbers const &other)
:
    d_length(other.d_length),
    d_data(new int[other.d_length])
{
    for (size_t idx = 0; idx != d_length; ++idx)
        d_data[idx] = other.d_data[idx];
}
