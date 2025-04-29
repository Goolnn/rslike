#ifndef GOOLNN_RSLIKE_STRUCT_H
#define GOOLNN_RSLIKE_STRUCT_H

#include "rslike/priv/struct.h"

#define struct(n, s) \
typedef struct {     \
    _priv_member s   \
} n

#endif
