#include "charcount.h"
#include <iostream>
#include <cctype>

using namespace std;
void showChar(unsigned char c)
{
    if (c == ' ')
        cout << "' '";
    else if (c == '\n')
        cout << "'\\n'";
    else if (c == '\t')
        cout << "'\\t'";
    else if (isprint(c))
        cout << "'" << c << "'";
    else
        cout << static_cast<unsigned>(c);
}
