#include "charcount.ih"

using namespace std;
size_t CharCount::count(istream &in)
{
    char character;
    size_t total = 0;
    while (in.get(character))
    {
        size_t idx = 0;
        Action act = actionForIndex(static_cast<unsigned char>(character), idx);
        (this->*s_actions[act])(idx, static_cast<unsigned char>(character));
        ++total;
    }
    return total;
}
