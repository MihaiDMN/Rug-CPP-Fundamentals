#include "strings.ih"

void Strings::enlarge()
{
    size_t newCapacity = d_capacity * 2;
    string *newRaw = static_cast<string *>
    (
        operator new[](newCapacity * sizeof(string))
    );
    
    for (size_t idx = 0; idx != d_size; ++idx)
        new (newRaw + idx) string(move(d_str[idx]));
    
    for (size_t idx = 0; idx != d_size; ++idx)
        d_str[idx].~basic_string();
    
    operator delete[](d_str);
    d_str = newRaw;
    d_capacity = newCapacity;
}
