#include <iostream>
#include "sum.h"

using namespace std;
int main(int argc, char *argv[])
{   
    bool hasdot = false;
    for (int i = 1; i != argc; ++i)
    {   
        string arg = argv[i];
        for (int j = 0; j != arg.length(); ++j)
            if (arg[j] == '.')
            {
                hasdot = true;
                break;
            }
    }
    if (hasdot)
        cout << sum(argc, argv, 0.0) << "\n";
    else
        cout << sum(argc, argv, 0) << "\n";
}
