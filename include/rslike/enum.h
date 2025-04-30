#ifndef GOOLNN_RSLIKE_ENUM_H
#define GOOLNN_RSLIKE_ENUM_H

#include <xmacros/xmacros.h>

#include "rslike/priv/enum.h"

#define Variant(n, v) xmacros_combine(n, v)

#define define_enum(n, s)                                            \
typedef enum {                                                       \
    priv_variant(n, xmacros_unwrap s)                               \
    xmacros_combine(n, Undefined)                                    \
} n;                                                                 \
static inline const char* xmacros_combine(n, variant_name)(n self) { \
    switch (self) {                                                  \
        priv_variant_name(n, priv_unwrap s)                        \
        default:                                                     \
            return "Undefined";                                      \
    }                                                                \
}

#define VariantName(n, v) xmacros_combine(n, variant_name)(v)

#endif
