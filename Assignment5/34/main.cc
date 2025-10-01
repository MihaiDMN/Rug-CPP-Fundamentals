#include "copycat.h"
#include <iostream>

extern char **environ;   // required on POSIX to access global environ

int main(int argc, char **argv)
{
  
    std::cout << "hello world";
    return 0;
}

