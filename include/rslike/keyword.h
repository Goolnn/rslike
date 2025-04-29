#ifndef GOOLNN_RSLIKE_KEYWORD_H
#define GOOLNN_RSLIKE_KEYWORD_H

#include "rslike/priv/func.h"

#define let(N, T) T N

#define fn(n, p, ...) _priv_return(__VA_ARGS__) n (_priv_parse p)

#endif
