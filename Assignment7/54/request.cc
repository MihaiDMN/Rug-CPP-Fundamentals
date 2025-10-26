#include "fch.ih"

char Fch::request() const
{
    char answer;
    cerr << "change [ynYN]?\n";
    cin >> answer;
    return answer;
}
