#include "lock.h"

bool Lock::valid() const
{
    return d_fd != -1;
}
