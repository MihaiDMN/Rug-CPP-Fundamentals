#include "../data.ih"

void Data::swapDoubleValue(Data &other)
{
    double *tmpd = u_double;
    size_t tmpv = other.u_value;
    
    other.u_double = tmpd;
    u_double = nullptr;
    u_value = tmpv;
}
