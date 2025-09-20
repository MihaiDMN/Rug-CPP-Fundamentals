#include "callvalue.h"
#include "fun.h"
using namespace std;
void callValue(string const &prog)
{
    for (size_t idx = 0; idx < 10000000; ++idx)
        fun(prog);
}
