#include "person.ih"

Person::Person()
:
    d_name(""), d_address(""), d_phone(""), d_mass(0)
{}

Person::Person(std::string const &name, std::string const &address,
               std::string const &phone, size_t mass)
:
    d_name(name), d_address(address), d_mass(mass)
{
    setPhone(phone);
}

