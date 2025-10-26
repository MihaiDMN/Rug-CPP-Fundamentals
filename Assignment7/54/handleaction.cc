#include "fch.ih"

void Fch::handleAction(size_t &pos)
{
    switch (d_action)
    {
        case ASK:
            ask(pos);
            break;
        
        case CHANGE_ALL:
            changeAll(pos);
            break;
        
        case NO_CHANGES:
            pos += d_target.size();
            break;
    }
}
