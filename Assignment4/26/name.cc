#include "person.ih"
using namespace std;

string const &Person::name() const
{
    return d_name;
}
