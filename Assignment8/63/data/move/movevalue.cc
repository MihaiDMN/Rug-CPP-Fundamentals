#include "../data.ih"

void Data::moveValue(Data &&tmp)
{
    u_value = tmp.u_value;
}
