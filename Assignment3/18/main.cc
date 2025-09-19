#include <iostream>
#include "main.h"

using namespace std;
ReturnValues combine(int argc, char *argv[])
{
    ReturnValues rv;
    if (argc < 2)
    {
        rv.ok = false;
        rv.nr = 0;
        rv.value = "";
        return rv;
    }
    
    size_t requested = stoi(argv[1]);
    rv.nr = requested;
    if (requested + 1 < static_cast<size_t>(argc))
    {
        rv.ok = true;
        rv.value = argv[requested];
    }
    else
    {
        rv.ok = false;
        rv.value = "";
    }
    return rv;
}

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

void boundCall(int argc, char *argv[])
{
    auto rv = combine(argc, argv);
    if (rv.ok)
        cout << "Argument number " << rv.nr << ", value " << rv.value << "\n";
    else
        cout << "Requested argument does not exist.\n";
}
