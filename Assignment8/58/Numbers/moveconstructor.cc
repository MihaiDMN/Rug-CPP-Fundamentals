#include "numbers.ih"

Numbers::Numbers(Numbers &&tmp)
:
    d_length(tmp.d_length),
    d_data(tmp.d_data)
{
    tmp.d_length = 0;
    tmp.d_data = nullptr;
}
