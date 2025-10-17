#include "fch.h"
#include <iostream>

void Fch::process()
{
    while (std::getline(d_input, d_line))
    {
        size_t pos = 0;
        while (findTarget(pos))
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
        insertLine();
    }
}
