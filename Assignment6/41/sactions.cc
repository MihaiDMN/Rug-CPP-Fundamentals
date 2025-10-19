#include "charcount.ih"

void(CharCount::*const CharCount::s_actions[3])(size_t, unsigned char) =
{
    &CharCount::append,
    &CharCount::insert,
    &CharCount::increment
};
