#include "value.h"

Value::Value(size_t index, Token type)
:
    d_token(type),
    u_int(static_cast<int>(index))
{}
