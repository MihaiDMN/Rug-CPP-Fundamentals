#include "lock.h"
#include <unistd.h>

Lock::~Lock()
{
    if (d_fd != -1)
        close(d_fd);
}
