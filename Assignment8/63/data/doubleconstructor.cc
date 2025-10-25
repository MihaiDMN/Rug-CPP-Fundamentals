#include "data.ih"

Data::Data(double *ptr)
{
    u_double = new double(*ptr);
}
