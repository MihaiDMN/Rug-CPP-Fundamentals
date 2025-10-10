#include "strings.ih"

Strings::Strings(size_t argc, char **argv)
:
    d_size(argc),
    d_capacity(argc > 0 ? argc : 1),
    d_str(rawPointers(d_capacity))
{
    fill(argv);
}
