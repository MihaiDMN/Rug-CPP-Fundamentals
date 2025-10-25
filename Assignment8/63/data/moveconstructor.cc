#include "data.ih"

Data::Data(Data &&tmp, Type otherType)
{
    (this->*s_move[otherType])(move(tmp));
}
