#include "quicksort.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string line = "bannacacherryapple";

    cout << "Before " << line << "\n";
    quicksort(line, 0, line.length());
    cout << "After " << line << "\n";
}
