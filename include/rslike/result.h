#ifndef GOOLNN_RSLIKE_RESULT_H
#define GOOLNN_RSLIKE_RESULT_H

#include "rslike/priv/result.h"
#include "rslike/priv/util.h"

typedef enum {
    Result_Ok,
    Result_Err
} Result;

#define Result(T, E) _priv_combine_result(T, E)

#define define_result(T, E)                               \
typedef struct {                                          \
    Result status;                                        \
    union {                                               \
        T ok;                                             \
        E err;                                            \
    };                                                    \
} Result(T, E);                                           \
static inline Option(T) _priv_combine(Result(T, E), ok)(  \
    Result(T, E) self                                     \
) {                                                       \
    if (self.status == Result_Ok) {                       \
        return (Option(T)) {                              \
            .status = Option_Some,                        \
            .some = self.ok                               \
        };                                                \
    }                                                     \
    return (Option(T)) {                                  \
        .status = Option_None,                            \
    };                                                    \
}                                                         \
static inline Option(E) _priv_combine(Result(T, E), err)( \
    Result(T, E) self                                     \
) {                                                       \
    if (self.status == Result_Err) {                      \
        return (Option(E)) {                              \
            .status = Option_Some,                        \
            .some = self.err                              \
        };                                                \
    }                                                     \
    return (Option(E)) {                                  \
        .status = Option_None,                            \
    };                                                    \
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

#define result_is_ok_and(T, self, x, f) (self.status == Result_Ok); \
{                                                                   \
    if (self.status == Result_Ok) {                                 \
        T x = self.ok;                                              \
        f                                                           \
    }                                                               \
}

#define result_is_err(self) (self.status == Result_Err)

#define result_is_err_and(E, self, x, f) (self.status == Result_Err); \
{                                                                     \
    if (self.status == Result_Err) {                                  \
        E x = self.err;                                               \
        f                                                             \
    }                                                                 \
}

#define result_ok(T, E, self) _priv_combine(Result(T, E), ok)(self)
#define result_err(T, E, self) _priv_combine(Result(T, E), err)(self)

#define result_unwrap(T, E, self) (self.ok);               \
{                                                          \
    if (self.status == Result_Err) {                       \
        fprintf(                                           \
            stderr,                                        \
            "called `Result::unwrap()` on a `Err` value\n" \
        );                                                 \
        abort();                                           \
    }                                                      \
}

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

#endif
