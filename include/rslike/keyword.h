#ifndef GOOLNN_RSLIKE_KEYWORD_H
#define GOOLNN_RSLIKE_KEYWORD_H

#include "rslike/priv/func.h"

#define let(N, T) const T N
#define let_mut(N, T) T N

#define fn(N, P, R) R N _priv_parse P

#endif
