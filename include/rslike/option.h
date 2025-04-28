#ifndef GOOLNN_RSLIKE_OPTION_H
#define GOOLNN_RSLIKE_OPTION_H

#include <stdlib.h>
#include <stdio.h>

typedef enum {
    Option_Some,
    Option_None
} Option;

#define Option(T) Option ## _ ## T

#define define_option(T) \
typedef struct {         \
    Option status;       \
    union {              \
        T some;          \
    };                   \
} Option ## _ ## T

#define Some(T, value)     \
(Option ## _ ## T) {       \
    .status = Option_Some, \
    .some = value,         \
}

#define None(T)            \
(Option ## _ ## T) {       \
    .status = Option_None, \
}

#define option_is_some(self) (self.status == Option_Some)

#define option_is_some_and(T, self, x, f) (self.status == Option_Some); \
{                                                                       \
    if (self.status == Option_Some) {                                   \
        T x = self.some;                                                \
        f                                                               \
    }                                                                   \
}

#define option_is_none(self) (self.status == Option_None)

#define option_unwrap(T, self) (self.some);                 \
{                                                           \
    if (self.status == Option_None) {                       \
        fprintf(                                            \
            stderr,                                         \
            "called `Option::unwrap()` on a `None` value\n" \
        );                                                  \
        abort();                                            \
    }                                                       \
}

#endif
