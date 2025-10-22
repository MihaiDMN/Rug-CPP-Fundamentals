#include "numbers.ih"

Numbers::Numbers(size_t count)
:
    d_length(count),
    d_data(new int[count])
{}
