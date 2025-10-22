#include "numbers.ih"

void Numbers::write(ostream &out) const
{
    for (size_t idx = 0; idx != d_length; ++idx)
        out << d_data[idx] << " ";
    out << "\n";
}
