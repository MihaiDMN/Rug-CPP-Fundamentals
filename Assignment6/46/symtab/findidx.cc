#include "symtab.h"

size_t Symtab::findIdx(std::string const &ident)
{
    size_t begin = 0;
    size_t end = d_size;
    
    while (begin < end)
    {
        size_t mid = (begin + end) / 2;
        CompareResult cmp = d_data[mid]->compare(ident);
    
        if (cmp == EQUAL)
            return mid;
        if (cmp == LHS_FIRST)
            begin = mid + 1;
        else
            end = mid;
    }
    
    insertAt(end, ident);
    return end;
}

