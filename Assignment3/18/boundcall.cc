#include <iostream>
#include "main.ih"

using namespace std;
void boundCall(int argc, char *argv[])
{
    auto rv = combine(argc, argv);
    if (rv.ok)
        cout << "Argument number " << rv.nr << ", value " << rv.value << "\n";
    else
        cout << "Requested argument does not exist.\n";
}
