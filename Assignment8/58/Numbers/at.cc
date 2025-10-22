#include "numbers.ih"

int &Numbers::at(size_t idx)
{
    if (idx >= d_length)
    {
        cerr << "Index out of range\n";
        static int dummy = 0;
        return dummy;
    }
    return d_data[idx];
}
