#include "parser.h"
#include <iostream>
using namespace std;

int main()
{
    Parser parser;
    double value;

    while (parser.reset())        // read next line
    {
        while (true)
        {
            Parser::Return ret = parser.number(&value);
            if (ret == Parser::EOLN)
                break;

            if (ret == Parser::NUMBER)
                cout << "Number: " << value
                     << " integral? " << boolalpha
                     << parser.isIntegral() << "\n";
            else
                cout << "Not a number\n";
        }
    }
}

