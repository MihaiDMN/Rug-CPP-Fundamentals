#include "strings.ih"

Strings::Strings(size_t argc, char **argv)
:
    d_size(argc),
    d_capacity(argc > 0 ? argc : 1),
    d_str(rawStrings(d_capacity))
{
    for (size_t idx = 0; idx != d_size; ++idx)
        new (d_str + idx) std::string(argv[idx]);
}
