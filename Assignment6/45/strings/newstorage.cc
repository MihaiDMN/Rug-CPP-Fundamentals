#include "strings.ih"

string* Strings::newStorage(size_t newCapacity)
{
    string *newRaw = new string[newCapacity];
    for (size_t idx = 0; idx < d_size; ++idx)
        newRaw[idx] = std::move(d_str[idx]);

    return newRaw;
}
