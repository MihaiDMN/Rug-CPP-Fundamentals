#include <iostream>
#include "charcount.h"

using namespace std;
int main()
{
    CharCount counter;
    size_t total = counter.count(cin);
    cout << "Total characters: " << total << "\n";
    const CharCount::CharInfo &ci = counter.info();
    for (size_t i = 0; i != ci.nCharUni; ++i)
    {
        cout << "char ";
        showChar(ci.ptr[i].ch);
        cout << ": " << ci.ptr[i].count << " times\n";
    }
}
