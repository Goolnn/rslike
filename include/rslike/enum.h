#ifndef GOOLNN_RSLIKE_ENUM_H
#define GOOLNN_RSLIKE_ENUM_H

#include <rslike/priv/enum.h>

#define Variant(n, v) xmacros_combine(n, v)
#define VariantName(n, v) xmacros_combine(n, variant_name)(v)

#define define_enum(n, s)                                            \
typedef enum {                                                       \
    priv_variants(n, xmacros_unpack(s))                              \
    xmacros_combine(n, Undefined)                                    \
} n;                                                                 \
static inline const char* xmacros_combine(n, variant_name)(n self) { \
    switch (self) {                                                  \
        priv_variant_names(n, xmacros_unpack(s))                     \
        default:                                                     \
            return xmacros_to_string(xmacros_combine(n, Undefined)); \
    }                                                                \
}

#endif
