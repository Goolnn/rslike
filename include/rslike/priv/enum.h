#ifndef GOOLNN_RSLIKE_PRIV_ENUM_H
#define GOOLNN_RSLIKE_PRIV_ENUM_H

#include <xmacros/xmacros.h>

#define priv_assign(v, x) v = x

#define priv_is_assign_0(v) v
#define priv_is_assign_1(v) priv_assign v

#define priv_is_assign(v) xmacros_overload(priv_is_assign, xmacros_is_paren(v))(v)

#define priv_variants_0(n, ...) xmacros_prefix_combine(n, xmacros_prefix_concat(priv_is_assign, xmacros_wrap(__VA_ARGS__))),
#define priv_variants_1(n, s)

#define priv_variants(n, s) xmacros_overload(priv_variants, xmacros_is_empty(s))(n, s)

#define priv_variant_name_case(v) \
case v:                           \
    return xmacros_to_string(v);

#define priv_variant_name_0(v) v
#define priv_variant_name_1(v) xmacros_argn(0, xmacros_unpack(v))

#define priv_variant_name(v) xmacros_overload(priv_variant_name, xmacros_is_paren(v))(v)

#define priv_variant_names_0(n, ...) xmacros_prefix_concat(priv_variant_name, xmacros_wrap(__VA_ARGS__))
#define priv_variant_names_1(n, s)

#define priv_variant_names(n, s) xmacros_space(xmacros_prefix_concat(priv_variant_name_case, xmacros_wrap(xmacros_prefix_combine(n, xmacros_overload(priv_variant_names, xmacros_is_empty(s))(n, s)))))

#endif
