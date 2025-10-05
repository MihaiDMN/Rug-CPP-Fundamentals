#include "charcount.h"

using namespace std;
size_t CharCount::count(istream &in)
{
    char c;
    size_t total = 0;
    while (in.get(c))
    {
        locate(static_cast<unsigned char>(c));
        ++total;
    }
    return total;
}
