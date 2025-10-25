#include "wrap.ih"

Wrap &Wrap::operator=(Wrap &&tmp)
{
    if (this != &tmp)
    {
        d_data.destroy(d_type);
        
        new(&d_data) Data(move(tmp.d_data), tmp.d_type);
        d_type = tmp.d_type;
    }
    return *this;
}
