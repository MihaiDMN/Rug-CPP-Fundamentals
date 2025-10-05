#include "person.ih"
using namespace std;

void Person::setPhone(string const &phone)
{
    // set the phone number of the person, but first check if it is valid
    if (phone.empty())
        d_phone = " - not available -";
    else if (isDigits("0123456789", phone))
        d_phone = phone;
    else
    {
        cout << "A phone number may only contain digits\n";
        d_phone = " - incorrect number entered - ";
    }
}
