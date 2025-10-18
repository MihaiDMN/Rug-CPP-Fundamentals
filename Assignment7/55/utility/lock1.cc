#include "lock.h"
#include <filesystem>

Lock::Lock(std::string const &path)
:
    Lock(path, std::filesystem::path(path).parent_path().string())
    // lock the file in the same directory as it is in
{}
