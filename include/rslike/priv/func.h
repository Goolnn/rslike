#ifndef GOOLNN_RSLIKE_PRIV_H
#define GOOLNN_RSLIKE_PRIV_H

#define _priv_seq(                          \
    _0,  _1,  _2,  _3,  _4,  _5,  _6,  _7, \
    _8,  _9, _10, _11, _12, _13, _14, _15, \
   _16, _17, _18, _19, _20, _21, _22, _23, \
   _24, _25, _26, _27, _28, _29, _30, _31, \
   _32, _33, _34, _35, _36, _37, _38, _39, \
   _40, _41, _42, _43, _44, _45, _46, _47, \
   _48, _49, _50, _51, _52, _53, _54, _55, \
   _56, _57, _58, _59, _60, _61, _62, _63, \
     n, ...                                \
) n

#define _priv_argc(...) _priv_seq(, ##__VA_ARGS__, \
   63, 62, 61, 60, 59, 58, 57, 56,                 \
   55, 54, 53, 52, 51, 50, 49, 48,                 \
   47, 46, 45, 44, 43, 42, 41, 40,                 \
   39, 38, 37, 36, 35, 34, 33, 32,                 \
   31, 30, 29, 28, 27, 26, 25, 24,                 \
   23, 22, 21, 20, 19, 18, 17, 16,                 \
   15, 14, 13, 12, 11, 10,  9,  8,                 \
    7,  6,  5,  4,  3,  2,  1,  0                  \
)

#define _priv_parse_0(...)
#define _priv_parse_1(...)

#define _priv_parse_2( \
    arg_1_N, arg_1_T,  \
    ...                \
) arg_1_T arg_1_N

#define _priv_parse_4( \
    arg_1_N, arg_1_T,  \
    arg_2_N, arg_2_T,  \
    ...                \
) arg_1_T arg_1_N,     \
  arg_2_T arg_2_N

#define _priv_parse_6( \
    arg_1_N, arg_1_T,  \
    arg_2_N, arg_2_T,  \
    arg_3_N, arg_3_T,  \
    ...                \
) arg_1_T arg_1_N,     \
  arg_2_T arg_2_N,     \
  arg_3_T arg_3_N

#define _priv_parse_8( \
    arg_1_N, arg_1_T,  \
    arg_2_N, arg_2_T,  \
    arg_3_N, arg_3_T,  \
    arg_4_N, arg_4_T,  \
    ...                \
) arg_1_T arg_1_N,     \
  arg_2_T arg_2_N,     \
  arg_3_T arg_3_N,     \
  arg_4_T arg_4_N

#define _priv_parse_10( \
    arg_1_N, arg_1_T,   \
    arg_2_N, arg_2_T,   \
    arg_3_N, arg_3_T,   \
    arg_4_N, arg_4_T,   \
    arg_5_N, arg_5_T,   \
    ...                 \
) arg_1_T arg_1_N,      \
  arg_2_T arg_2_N,      \
  arg_3_T arg_3_N,      \
  arg_4_T arg_4_N,      \
  arg_5_T arg_5_N

#define _priv_parse_12( \
    arg_1_N, arg_1_T,   \
    arg_2_N, arg_2_T,   \
    arg_3_N, arg_3_T,   \
    arg_4_N, arg_4_T,   \
    arg_5_N, arg_5_T,   \
    arg_6_N, arg_6_T,   \
    ...                 \
) arg_1_T arg_1_N,      \
  arg_2_T arg_2_N,      \
  arg_3_T arg_3_N,      \
  arg_4_T arg_4_N,      \
  arg_5_T arg_5_N,      \
  arg_6_T arg_6_N

#define _priv_parse_14( \
    arg_1_N, arg_1_T,   \
    arg_2_N, arg_2_T,   \
    arg_3_N, arg_3_T,   \
    arg_4_N, arg_4_T,   \
    arg_5_N, arg_5_T,   \
    arg_6_N, arg_6_T,   \
    arg_7_N, arg_7_T,   \
    ...                 \
) arg_1_T arg_1_N,      \
  arg_2_T arg_2_N,      \
  arg_3_T arg_3_N,      \
  arg_4_T arg_4_N,      \
  arg_5_T arg_5_N,      \
  arg_6_T arg_6_N,      \
  arg_7_T arg_7_N

#define _priv_parse_16( \
    arg_1_N, arg_1_T,   \
    arg_2_N, arg_2_T,   \
    arg_3_N, arg_3_T,   \
    arg_4_N, arg_4_T,   \
    arg_5_N, arg_5_T,   \
    arg_6_N, arg_6_T,   \
    arg_7_N, arg_7_T,   \
    arg_8_N, arg_8_T,   \
    ...                 \
) arg_1_T arg_1_N,      \
  arg_2_T arg_2_N,      \
  arg_3_T arg_3_N,      \
  arg_4_T arg_4_N,      \
  arg_5_T arg_5_N,      \
  arg_6_T arg_6_N,      \
  arg_7_T arg_7_N,      \
  arg_8_T arg_8_N

#define _priv_parse_18( \
    arg_1_N, arg_1_T,   \
    arg_2_N, arg_2_T,   \
    arg_3_N, arg_3_T,   \
    arg_4_N, arg_4_T,   \
    arg_5_N, arg_5_T,   \
    arg_6_N, arg_6_T,   \
    arg_7_N, arg_7_T,   \
    arg_8_N, arg_8_T,   \
    arg_9_N, arg_9_T,   \
    ...                 \
) arg_1_T arg_1_N,      \
  arg_2_T arg_2_N,      \
  arg_3_T arg_3_N,      \
  arg_4_T arg_4_N,      \
  arg_5_T arg_5_N,      \
  arg_6_T arg_6_N,      \
  arg_7_T arg_7_N,      \
  arg_8_T arg_8_N,      \
  arg_9_T arg_9_N

#define _priv_parse_20( \
    arg_1_N, arg_1_T,   \
    arg_2_N, arg_2_T,   \
    arg_3_N, arg_3_T,   \
    arg_4_N, arg_4_T,   \
    arg_5_N, arg_5_T,   \
    arg_6_N, arg_6_T,   \
    arg_7_N, arg_7_T,   \
    arg_8_N, arg_8_T,   \
    arg_9_N, arg_9_T,   \
    arg_10_N, arg_10_T, \
    ...                 \
) arg_1_T arg_1_N,      \
  arg_2_T arg_2_N,      \
  arg_3_T arg_3_N,      \
  arg_4_T arg_4_N,      \
  arg_5_T arg_5_N,      \
  arg_6_T arg_6_N,      \
  arg_7_T arg_7_N,      \
  arg_8_T arg_8_N,      \
  arg_9_T arg_9_N,      \
  arg_10_T arg_10_N

#define _priv_select(n) _priv_parse ## _ ## n
#define _priv_overload(n) _priv_select(n)

#define _priv_parse(...) (_priv_overload(_priv_argc(__VA_ARGS__))(__VA_ARGS__))

#endif
