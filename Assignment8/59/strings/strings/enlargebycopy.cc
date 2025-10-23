#include "strings.ih"

string *Strings::enlargeByCopy()
{
    string *ret = new string[d_size + 1];
    for (size_t idx = 0; idx != d_size; ++idx)
        ret[idx] = d_str[idx];
    
    return ret;
}
