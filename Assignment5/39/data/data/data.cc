#include "data.h"
#include "dataimp.h"

Data::Data()
{
    d_pimpl = new DataImpl;
}
