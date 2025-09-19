#include "main.ih"
#include <iostream>

using namespace std;
size_t countChars()
{
    size_t count = 0;
    char character;
    while (cin.get(character))
        ++count;
    return count;
}

size_t countWords()
{
    size_t count = 0;
    string word;
    while (cin >> word)
        ++count;
    return count;
}

size_t countLines()
{
    size_t count = 0;
    string line;
    while (getline(cin, line))
        ++count;
    return count;
}

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

