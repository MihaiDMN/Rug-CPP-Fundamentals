#include "indent.h"
#include "indent_internal.ih"

void reset_indentation()
{
    disable_step_size_change();
    indentation_depth = 0;
}