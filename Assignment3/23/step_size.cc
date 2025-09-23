#include "indent.h"
#include "indent_internal.ih"
using namespace std;

void step_size(size_t new_step_size)
{
    if (can_change_step_size)
        indentation_step_size = new_step_size;
}