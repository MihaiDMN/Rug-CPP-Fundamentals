#include "wrap.ih"

Wrap &Wrap::operator=(Wrap const &other)
{
    if (this != &other)
    {
        d_data.destroy(d_type);
        
        new(&d_data) Data(other.d_data, other.d_type);
        d_type = other.d_type;
    }
    return *this;
}
