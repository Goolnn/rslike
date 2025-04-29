#ifndef GOOLNN_RSLIKE_ENUM_H
#define GOOLNN_RSLIKE_ENUM_H

#include "rslike/priv/enum.h"

#define Varient(n, v) _priv_combine(n, v)

#define enum(n, s) \
typedef enum {     \
    _priv_varient(n, _priv_unwrap s)              \
    _priv_combine(n, Undefined)\
} n

#endif
