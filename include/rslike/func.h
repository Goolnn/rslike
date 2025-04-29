#ifndef GOOLNN_RSLIKE_FUNC_H
#define GOOLNN_RSLIKE_FUNC_H

#include "rslike/priv/func.h"

#define fn(n, p, ...) _priv_return(__VA_ARGS__) n (_priv_param p)

#endif
