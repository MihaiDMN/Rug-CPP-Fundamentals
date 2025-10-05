#include "person.ih"
using namespace std;

string const &Person::address() const
{
    return d_address;
}
