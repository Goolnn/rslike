#ifndef GOOLNN_RSLIKE_RESULT_H
#define GOOLNN_RSLIKE_RESULT_H

#include <xmacros/xmacros.h>

#include <rslike/priv/result.h>

typedef enum {
    Result_Ok,
    Result_Err
} Result;

#define Result(T, E) xmacros_combine(Result, T, E)

#define define_result(T, E)                                 \
typedef struct {                                            \
    Result status;                                          \
    union {                                                 \
        T ok;                                               \
        E err;                                              \
    };                                                      \
} Result(T, E);                                             \
static inline Option(T) xmacros_combine(Result(T, E), ok)(  \
    Result(T, E) self                                       \
) {                                                         \
    if (self.status == Result_Ok) {                         \
        return (Option(T)) {                                \
            .status = Option_Some,                          \
            .some = self.ok                                 \
        };                                                  \
    }                                                       \
    return (Option(T)) {                                    \
        .status = Option_None,                              \
    };                                                      \
}                                                           \
static inline Option(E) xmacros_combine(Result(T, E), err)( \
    Result(T, E) self                                       \
) {                                                         \
    if (self.status == Result_Err) {                        \
        return (Option(E)) {                                \
            .status = Option_Some,                          \
            .some = self.err                                \
        };                                                  \
    }                                                       \
    return (Option(E)) {                                    \
        .status = Option_None,                              \
    };                                                      \
}

#define Ok(T, E, value)        \
(Result(T, E)) {               \
    .status = Result_Ok,       \
    .ok = value,               \
}

#define Err(T, E, value)       \
(Result(T, E)) {               \
    .status = Result_Err,      \
    .err = value,              \
}

#define result_is_ok(self) (self.status == Result_Ok)
#define result_is_err(self) (self.status == Result_Err)

#define result_ok(T, E, self) xmacros_combine(Result(T, E), ok)(self)
#define result_err(T, E, self) xmacros_combine(Result(T, E), err)(self)

#define if_let_ok(T, self, x, f) \
if (self.status == Result_Ok) {  \
    T x = self.ok;               \
    f                            \
}

#define if_let_err(E, self, x, f) \
if (self.status == Result_Err) {  \
    E x = self.err;               \
    f                             \
}

#define handle_result(T, E, self, handle_ok, handle_err) \
{                                                        \
    Result(T, E) result = self;                          \
    if (result.status == Result_Ok) {                    \
        T ok = result.ok;                                \
        handle_ok;                                       \
    } else if (result.status == Result_Err) {            \
        E err = result.err;                              \
        handle_err;                                      \
    }                                                    \
}

#define unwrap_result(T, E, ident, self, ...)              \
T ident;                                                   \
{                                                          \
    Result(T, E) result = self;                            \
    if (result.status == Result_Ok) {                      \
        ident = result.ok;                                 \
    } else if (result.status == Result_Err) {              \
        E err = result.err;                                \
        __VA_OPT__(xmacros_argn(0, __VA_ARGS__);)          \
        fprintf(                                           \
            stderr,                                        \
            "called `Result::unwrap()` on a `Err` value\n" \
        );                                                 \
        abort();                                           \
    }                                                      \
}

#endif
