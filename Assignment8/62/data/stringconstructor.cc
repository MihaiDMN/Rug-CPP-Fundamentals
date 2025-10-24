#include "data.ih"

Data::Data(string const &str)
{
    new (&u_word) string(str);
}
