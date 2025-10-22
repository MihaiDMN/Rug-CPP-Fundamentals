#include "numbers.ih"

Numbers &Numbers::operator=(Numbers const &other)
{
    if (this != &other)
    {
        delete[] d_data;
        d_data = new int[other.d_length];
        d_length = other.d_length;
        
        for (size_t idx = 0; idx != d_length; ++idx)
            d_data[idx] = other.d_data[idx];
    }
    return *this;
}
