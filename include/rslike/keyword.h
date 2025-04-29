#ifndef GOOLNN_RSLIKE_KEYWORD_H
#define GOOLNN_RSLIKE_KEYWORD_H

#include "rslike/priv/struct.h"
#include "rslike/priv/func.h"
#include "rslike/priv/enum.h"

#define let(N, T) T N

#define fn(n, p, ...) _priv_return(__VA_ARGS__) n (_priv_parse p)

#define struct(n, s) \
typedef struct {     \
    _priv_define s   \
} n

#define enum(n, s) \
typedef enum {     \
    _priv_varient(n, _priv_unwrap s)              \
    _priv_combine(n, Undefined)\
} n

#endif
