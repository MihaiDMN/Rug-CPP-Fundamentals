#include "utility/lock.h"
#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{   
    if (argc != 2)
    {
        cerr << "Please provide a file path\n";
        return 1;
    }

    Lock lock(argv[1]);
    if (!lock.valid())
    {
        cerr << "Could not lock file.\n";
        return 1;
    }

    cout << "? " << flush;

    string line;
    getline(cin, line);

    ofstream out(argv[1], ios::app);
    out << line << '\n';
}

