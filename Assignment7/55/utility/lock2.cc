#include "lock.h"
#include <filesystem>
#include <sys/file.h>
#include <fcntl.h>
#include <unistd.h>
#include <iostream>

using namespace std;

Lock::Lock(string const &path, string const &lockDir)
:
    d_fd{-1}, d_path{path}
{
    string lockFile = lockPath(path, lockDir);
    d_fd = openLock(lockFile);
    if (d_fd == -1)
        return;
    
    if (flock(d_fd, LOCK_EX) == -1)
    {
        cerr << "Could not obtain lock on " << lockFile << "\n";
        close(d_fd);
        d_fd = -1;
    }
}
