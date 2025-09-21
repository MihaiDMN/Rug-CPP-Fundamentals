#include <iostream>
#include "main.ih"

using namespace std;
bool structCall(int argc, char *argv[])
{
    ReturnValues rv = combine(argc, argv);
    if (!rv.ok)
    {
        cout << "Usage: " << argv[0] << "\n";
        return false;
    }
    cout << "Argument number " << rv.nr << ", value " << rv.value << "\n";
    return true;
}
