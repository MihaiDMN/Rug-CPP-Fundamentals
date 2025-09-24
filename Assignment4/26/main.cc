#include "person.h"
#include <iostream>

using namespace std;
int main()
{
    Person p;
    p.extract(cin);
    p.insert(cout);
    Person m("mihai", "tamasi", "0750", 75);
    cout << m.name() << m.address() << m.phone() << m.mass();
}
