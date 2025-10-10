#include "charcount.h"

using namespace std;
CharCount::CharCount()
:
    d_capacity(8)
{
    d_info.ptr = rawCapacity(d_capacity);
    d_info.nCharUni = 0;

    d_actions[APPEND] = &CharCount::append;
    d_actions[INSERT] = &CharCount::insert;
    d_actions[INCREMENT] = &CharCount::increment;
}

CharCount::~CharCount()
{
    delete[] d_info.ptr;
}

