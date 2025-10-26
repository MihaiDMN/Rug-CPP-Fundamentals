#include "ec.h"
#include <csignal>

string signalName(uint32_t code)
{
    if (code == SIGKILL)
        return "KILL";
    if (code == SIGTERM)
        return "TERM";
    return to_string(code);
}
