#include "charcount.ih"

void CharCount::append(size_t /*idx*/, unsigned char character)
{
    addChar(d_info.nCharUni, character, false);
}
