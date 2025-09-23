#include "indent.h"
#include "indent_internal.ih"

using namespace std;

void indent_more()
{
    disable_step_size_change();
    indentation_depth += indentation_step_size;
}