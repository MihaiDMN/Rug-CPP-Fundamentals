#include "main.ih"
#include <iostream>

using namespace std;
void wc(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "Use -c|-w|-l\n";
        return;
    }
    string option = argv[1];
    if (option == "-c")
        cout << countChars() << "\n";
    else if (option == "-w")
        cout << countWords() << "\n";
    else if (option == "-l")
        cout << countLines() << "\n";
    else
        cout << "Wrong option. Use -c|-w|-l\n";
}

