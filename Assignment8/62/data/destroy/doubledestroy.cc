#include "../data.ih"

void Data::destroyDouble()
{
    delete[] u_double;
    u_double = nullptr;
}
