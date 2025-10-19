#include "charcount.ih"

void CharCount::increment(size_t idx, unsigned char /*character*/)
{
    ++d_info.ptr[idx].count;
}
