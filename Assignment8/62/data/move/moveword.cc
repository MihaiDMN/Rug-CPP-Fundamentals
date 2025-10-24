#include "../data.ih"

void Data::moveWord(Data &&tmp)
{
    new (&u_word) string(move(tmp.u_word));
    tmp.u_word.~string();
}
