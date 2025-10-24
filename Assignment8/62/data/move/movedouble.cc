#include "../data.ih"

void Data::moveDouble(Data &&tmp)
{
    u_double = tmp.u_double;
    tmp.u_double = nullptr;
}
