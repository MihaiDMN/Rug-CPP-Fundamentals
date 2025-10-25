#include "wrap.ih"

double *Wrap::doubles() const
{
    return d_data.getDouble();
}

