#include "numbers.ih"

Numbers &Numbers::operator=(Numbers &&tmp)
{
    if (this != &tmp)
    {
        delete[] d_data;
        d_length = tmp.d_length;
        d_data = tmp.d_data;
        
        tmp.d_length = 0;
        tmp.d_data = nullptr;
    }
    return *this;
}
