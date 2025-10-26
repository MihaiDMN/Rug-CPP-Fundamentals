#include "fch.ih"

void Fch::process()
{
    while (getline(d_input, d_line))
    {
        processLine();
        insertLine();
    }
}
