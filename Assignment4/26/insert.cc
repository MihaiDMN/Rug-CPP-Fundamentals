#include "person.ih"
using namespace std;

void Person::insert(std::ostream &out) const
{   
    // insert the information of a person into the outstream
    out << d_name << ", " << d_address << ", "
         << d_phone << ", " << d_mass << "\n";
}
