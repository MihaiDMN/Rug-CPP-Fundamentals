#include "charcount.h"

void CharCount::increment(size_t idx, unsigned char character)
{
    ++d_info.ptr[idx].count;
}
