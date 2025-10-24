#include "data.ih"

Data::Data(Data const &other, Type otherType)
{
    (this->*s_copy[otherType])(other);
}
