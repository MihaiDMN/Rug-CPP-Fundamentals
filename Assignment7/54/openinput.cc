#include "fch.ih"

bool Fch::openInput(char const *fname)
{
    d_input.open(fname);
    if (!d_input)
    {
        cerr << "Could not open file: " << fname << "\n";
        return false;
    }
    return true;
}
