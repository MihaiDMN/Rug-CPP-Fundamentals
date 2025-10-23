#include <iostream>
using namespace std;

class Demo
{
    public:
        Demo() { cout << "default constructor\n"; }
        ~Demo() { cout << "destructor\n"; }
    
        Demo(Demo const &) { cout << "copy constructor\n"; }
        Demo(Demo &&) { cout << "move constructor\n"; }
        
        Demo &operator=(Demo const &)
        {
            cout << "copy assignment\n";
            return *this;
        }
        Demo &operator=(Demo &&)
        {
            cout << "move assignment\n";
            return *this;
        }
};

Demo factory()
{
    Demo demi;
    cout << "returning from factory()\n";
    return demi;
}

int main()
{
    cout << "\nCOPY ELISION\n";
    Demo ai = factory();
    
    cout << "\nMOVE CONSTRUCTOR\n";
    Demo bi = move(ai);

    cout << "\nCOPY ASSIGNMENT\n";
    Demo ci;
    ci = bi;
    
    cout << "\nMOVE ASSIGNMENT\n";
    Demo di;
    di = move(ci);
}
