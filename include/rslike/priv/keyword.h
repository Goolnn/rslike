#ifndef GOOLNN_RSLIKE_PRIV_KEYWORD_H
#define GOOLNN_RSLIKE_PRIV_KEYWORD_H

#include <xmacros/xmacros.h>

#define priv_prefix_mut ~, 1,
#define priv_remove_mut

#define priv_mut_0(n, t) const t n
#define priv_mut_1(n, t) t xmacros_combine(priv_remove, n)

#define priv_is_mut(n) xmacros_argn(1, xmacros_combine(priv_prefix, n), 0)

#define priv_parse_param(n, t) xmacros_combine(priv_mut, priv_is_mut(n))(n, t)

#define priv_parse_params_0(...) (xmacros_expand(xmacros_prefix_space(priv_parse_param, __VA_ARGS__)))
#define priv_parse_params_1(...) ()

#define priv_parse_params(...) xmacros_overload(priv_parse_params, xmacros_is_empty(__VA_ARGS__))(__VA_ARGS__)

#define priv_parse_return_0() void
#define priv_parse_return_1(t) t

#define priv_parse_return(...) xmacros_overload(priv_parse_return, xmacros_argc(__VA_ARGS__))(__VA_ARGS__)

#define priv_let(n, t) priv_parse_param(n, t)

#define priv_fn(n, p, ...) priv_parse_return(__VA_ARGS__) n priv_parse_params p

#endif
