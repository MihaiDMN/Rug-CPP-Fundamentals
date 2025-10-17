#include "fch.h"

void Fch::ask(size_t pos)
{
    showModification(pos);
    char ans = request();
    
    if (ans == 'y')
    {
        modify(pos);
        pos += d_replacement.size();
    }
    else if (ans == 'Y')
    {
        d_action = CHANGE_ALL;
        modify(pos);
        pos += d_replacement.size();
    }
    else if (ans == 'n')
        pos += d_target.size();
    else if (ans == 'N')
    {
        d_action = NO_CHANGES;
        pos += d_target.size();
    }
}
