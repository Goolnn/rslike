#ifndef GOOLNN_RSLIKE_STRUCT_H
#define GOOLNN_RSLIKE_STRUCT_H

#include <rslike/priv/struct.h>

#define declare_struct(n) \
typedef struct n* n;

#define define_struct(n, s) \
struct n {                  \
    priv_member s          \
};

#define typedef_struct(n, s) \
typedef struct {             \
    priv_member s           \
} n;

#endif
