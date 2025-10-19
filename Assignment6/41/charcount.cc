#include "charcount.ih"

using namespace std;
CharCount::CharCount()
:
    d_capacity(8),
    d_info{rawCapacity(d_capacity), 0}
{}


