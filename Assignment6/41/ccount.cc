#include "charcount.h"

using namespace std;
size_t CharCount::count(istream &in)
{
    char character;
    size_t total = 0;
    while (in.get(character))
    {
        size_t idx = 0;
        Action act = locate(static_cast<unsigned char>(character), idx);
        (this->*d_actions[act])(idx, static_cast<unsigned char>(character));
        ++total;
    }
    return total;
}
