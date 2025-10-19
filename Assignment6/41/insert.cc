#include "charcount.ih"

void CharCount::insert(size_t idx, unsigned char character)
{
    addChar(idx, character, true);
}
