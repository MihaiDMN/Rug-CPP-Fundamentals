#include "person.ih"
using namespace std;

bool Person::isDigits(char const *characters, string const &object)
{
    // check to see if the phone number is made out of digits
    return object.find_first_not_of(characters) == string::npos;
}
