#include "charcount.ih"

void CharCount::enlarge()
{
    d_capacity *= 2;
    Char *newBlock = rawCapacity(d_capacity);
    
    for (size_t idx = 0; idx != d_info.nCharUni; ++idx)
        newBlock[idx] = d_info.ptr[idx];
    
    delete[] d_info.ptr;
    d_info.ptr = newBlock;
}
