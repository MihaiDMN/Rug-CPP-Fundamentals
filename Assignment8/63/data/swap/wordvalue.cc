#include "../data.ih"

void Data::swapWordValue(Data &other)
{
    string tmp = move(u_word);
    u_word.~string();
    
    new (&other.u_word) string(move(tmp));
}
