#ifndef GOOLNN_RSLIKE_RESULT_H
#define GOOLNN_RSLIKE_RESULT_H

typedef enum {
    Result_Ok,
    Result_Err
} Result;

#define Result(T, E) Result ## _ ## T ## _ ## E

#define define_result(T, E)   \
typedef struct {              \
    Result status;            \
    union {                   \
        T ok;                 \
        E err;                \
    };                        \
} Result ## _ ## T ## _ ## E

#define Ok(T, E, value)        \
(Result ## _ ## T ## _ ## E) { \
    .status = Result_Ok,       \
    .ok = value,               \
}

#define Err(T, E, value)       \
(Result ## _ ## T ## _ ## E) { \
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

#endif
