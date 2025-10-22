#include "main.ih"
#include <iostream>

using namespace std;
int main()
{
    Numbers n1(5, 10);      // 5 ints, all 10
    Numbers n2(5);          // 5 uninitialized ints
    Numbers n3 = n1;        // copy constructor
    Numbers n4;             // default constructor
    n4 = n1;                // copy assignment
    Numbers n5 = move(n1);  // move constructor

    cout << "n3: ";
    n3.write(cout);

    cout << "n4: ";
    n4.write(cout);

    cout << "n5: ";
    n5.write(cout);

    cout << "n2 (uninitialized): ";
    n2.write(cout);    // may show garbage or random numbers
}

