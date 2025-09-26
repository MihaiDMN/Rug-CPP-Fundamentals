#include "person.ih"
using namespace std;

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

void Person::setName(string const &name)
{
    d_name = name;
}
void Person::setAddress(string const &address)
{
    d_address = address;
}
void Person::setPhone(string const &phone)
{
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
void Person::setMass(size_t mass)
{
    d_mass = mass;
}

string const &Person::name() const
{
    return d_name;
}

string const &Person::address() const
{
    return d_address;
}

string const &Person::phone() const
{
    return d_phone;
}

size_t Person::mass() const
{
    return d_mass;
}

void Person::insert(std::ostream &out) const
{
    out << d_name << ", " << d_address << ", "
         << d_phone << ", " << d_mass << "\n";
}

void Person::extract(std::istream &in)
{
    string line;
    if (getline(in, line))
    {
        size_t pos1 = 0;
        size_t pos2 = 0;
        
        pos2 = line.find(',', pos1);
        d_name = line.substr(pos1, pos2 - pos1);
        
        pos1 = pos2 + 1;
        pos2 = line.find(',', pos1);
        d_address = line.substr(pos1, pos2 - pos1);

        pos1 = pos2 + 1;
        pos2 = line.find(',', pos1);
        string phone = line.substr(pos1, pos2 - pos1);
        setPhone(phone);
        
        pos1 = pos2 + 1;
        string massStr = line.substr(pos1);
        d_mass = stoul(massStr);

    }
}

bool Person::isDigits(char const *characters, string const &object)
{
    return object.find_first_not_of(characters) == string::npos;
}
