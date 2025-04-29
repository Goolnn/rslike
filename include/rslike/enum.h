#ifndef GOOLNN_RSLIKE_ENUM_H
#define GOOLNN_RSLIKE_ENUM_H

#include "rslike/priv/enum.h"

#define Variant(n, v) _priv_combine(n, v)

#define define_enum(n, s)                                   \
typedef enum {                                              \
    _priv_variant(n, _priv_unwrap s)                        \
    _priv_combine(n, Undefined)                             \
} n;                                                        \
inline const char* _priv_combine(n, variant_name)(n self) { \
    switch (self) {                                         \
        _priv_variant_name(n, _priv_unwrap s)               \
        default:                                            \
            return "Undefined";                             \
    }                                                       \
}

#define VariantName(n, v) _priv_combine(n, variant_name)(v)

#endif
