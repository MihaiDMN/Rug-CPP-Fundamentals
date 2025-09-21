#include <iostream>
#include "main.ih"

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
    if (requested < static_cast<size_t>(argc))
    {
        rv.ok = true;
        rv.value = argv[requested - 1];
    }
    else
    {
        rv.ok = false;
        rv.value = "";
    }
    return rv;
}

