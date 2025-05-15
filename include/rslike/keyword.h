#ifndef GOOLNN_RSLIKE_KEYWORD_H
#define GOOLNN_RSLIKE_KEYWORD_H

#include <rslike/priv/keyword.h>

#define let(n, t) priv_let(n, t)

#define fn(n, p, ...) priv_fn(n, p, __VA_ARGS__)

#endif
