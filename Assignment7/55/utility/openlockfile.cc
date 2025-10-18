#include "lock.h"
#include <fcntl.h>
#include <unistd.h>
#include <iostream>

using namespace std;

int Lock::openLock(string const &lockFile)
{
    int flags = O_RDWR | O_CREAT;
    int fd = open(lockFile.c_str(), flags, 0600);
    if (fd == -1)
        cerr << "Cannot open lock file: " << lockFile << "\n";
    return fd;
}
