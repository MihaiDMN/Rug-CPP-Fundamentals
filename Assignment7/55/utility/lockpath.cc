#include "lock.h"
#include <filesystem>

using namespace std;
string Lock::lockPath(string const &path, string const &lockDir)
{
    filesystem::path base = filesystem::path(path).filename();
    filesystem::path dir(lockDir);
    return (dir / (base.string() + ".lck")).string();
}
