#include "fch.ih"

void Fch::ask(size_t pos)
{
    showModification(pos);
    char ans = request();
    switch (ans)
    {
        case 'y':
            modify(pos);
            pos += d_replacement.size();
            break;
        
        case 'Y':
            d_action = CHANGE_ALL;
            modify(pos);
            pos += d_replacement.size();
            break;
       
        case 'n':
            pos += d_target.size();
            break;
        
        case 'N':
            d_action = NO_CHANGES;
            pos += d_target.size();
            break;
        
        default:
            break;
    }
}
