#include "../data.ih"

void Data::copyDouble(Data const &other)
{
    for (size_t idx = 0; idx != 10; ++idx)
        u_double[idx] = other.u_double[idx];
}
