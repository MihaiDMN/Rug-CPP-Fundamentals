#include "../data.ih"

void Data::swapDoubleWord(Data &other)
{
    string tmp = move(other.u_word);
    other.u_word.~string();
    other.u_double = u_double;
    
    u_double = nullptr;
    new(&u_word) string(move(tmp));
}
