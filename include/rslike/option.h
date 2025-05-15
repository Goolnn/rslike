#ifndef GOOLNN_RSLIKE_OPTION_H
#define GOOLNN_RSLIKE_OPTION_H

#include <xmacros/xmacros.h>

#include <rslike/type.h>

#include <stdlib.h>
#include <stdio.h>

typedef enum {
    Option_Some,
    Option_None
} Option;

#define Option(T) xmacros_combine(Option, T)

#define define_option(T) \
typedef struct {         \
    Option status;       \
    union {              \
        T some;          \
    };                   \
} Option(T);

#define Some(T, value)     \
(Option(T)) {              \
    .status = Option_Some, \
    .some = value,         \
}

#define None(T)            \
(Option(T)) {              \
    .status = Option_None, \
}

#define option_is_some(self) (self.status == Option_Some)
#define option_is_none(self) (self.status == Option_None)

#define if_let_some(T, self, x, f) \
if (self.status == Option_Some) {  \
    T x = self.some;               \
    f                              \
}

#define handle_option(T, self, handle_some, handle_none) \
{                                                        \
    Option(T) option = self;                             \
    if (option.status == Option_Some) {                  \
        T some = option.some;                            \
        handle_some;                                     \
    } else if (option.status == Option_None) {           \
        handle_none;                                     \
    }                                                    \
}

#define unwrap_option(T, ident, self, ...)         \
T ident;                                           \
{                                                  \
    Option(T) option = self;                       \
    if (option.status == Option_Some) {            \
        ident = option.some;                       \
    } else if (option.status == Option_None) {     \
        __VA_OPT__(xmacros_argn(0, __VA_ARGS__);)  \
        abort();                                   \
    }                                              \
}

define_option(i8)
define_option(i16)
define_option(i32)
define_option(i64)

define_option(u8)
define_option(u16)
define_option(u32)
define_option(u64)

define_option(f32)
define_option(f64)

define_option(bool)

define_option(str)

define_option(Unit)

#endif
