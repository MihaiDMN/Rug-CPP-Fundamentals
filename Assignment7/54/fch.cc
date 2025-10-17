#include "fch.h"

Fch::Fch(char const *fname)
{
    if(openInput(fname))
        searchReplace();
}
