#include "strings.ih"

void Strings::enlarge()
{
    size_t newCapacity = d_capacity * 2;
    
    string *newRaw = newStorage(newCapacity);
    
    operator delete[](d_str);
    d_str = newRaw;
    d_capacity = newCapacity;
}
