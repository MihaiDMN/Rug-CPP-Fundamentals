#ifndef INLCUDED_LOCK_H_
#define INLCUDED_LOCK_H_

#include <string>
#include <filesystem>
#include <sys/file.h>
#include <fcntl.h>
#include <unistd.h>
#include <iostream>

class Lock
{
    int d_fd;
    std::string d_path;

    public:
        Lock(std::string const &path);
        Lock(std::string const &path, std::string const &lockDir);
        ~Lock();

        bool valid() const;
    
    private:
        static std::string lockPath(std::string const &path, std::string const &lockDir);
        static int openLock(std::string const &lockFilePath);
};

#endif
