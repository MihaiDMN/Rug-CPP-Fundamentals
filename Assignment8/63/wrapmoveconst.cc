#include "wrap.ih"

Wrap::Wrap(Wrap &&tmp)
:
    d_data(move(tmp.d_data), tmp.d_type),
    d_type(tmp.d_type)
{}
