#include "person.ih"
using namespace std;

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
