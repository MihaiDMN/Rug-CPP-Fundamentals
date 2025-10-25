#include "wrap.ih"

Wrap::Wrap(Wrap const &other)
:
    d_data(other.d_data, other.d_type),
    d_type(other.d_type)
{}
