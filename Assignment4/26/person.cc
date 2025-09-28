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
    // set the name of the person
    d_name = name;
}
void Person::setAddress(string const &address)
{   
    // set the address of the person
    d_address = address;
}
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
void Person::setMass(size_t mass)
{
    // set the mass of the person
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
    // insert the information of a person into the outstream
    out << d_name << ", " << d_address << ", "
         << d_phone << ", " << d_mass << "\n";
}

void Person::extract(std::istream &in)
{
    // take in some input from the instream and make it into a person class
    string line;
    if (getline(in, line))
    {
        size_t pos1 = 0;
        size_t pos2 = 0;
        //parse through the input, spaced by ',' to find the required arguments
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
    // check to see if the phone number is made out of digits
    return object.find_first_not_of(characters) == string::npos;
}
