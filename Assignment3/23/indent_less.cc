#include "indent.h"
#include "indent_internal.ih"
using namespace std;

void indent_less()
{
    disable_step_size_change();
    if (indentation_depth >= indentation_step_size)
        indentation_depth -= indentation_step_size;
    else
        indentation_depth = 0;
}