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

#define _priv_argc(...) _priv_seq(__VA_OPT__(,) __VA_ARGS__, \
   63, 62, 61, 60, 59, 58, 57, 56,                           \
   55, 54, 53, 52, 51, 50, 49, 48,                           \
   47, 46, 45, 44, 43, 42, 41, 40,                           \
   39, 38, 37, 36, 35, 34, 33, 32,                           \
   31, 30, 29, 28, 27, 26, 25, 24,                           \
   23, 22, 21, 20, 19, 18, 17, 16,                           \
   15, 14, 13, 12, 11, 10,  9,  8,                           \
    7,  6,  5,  4,  3,  2,  1,  0                            \
)

#define _priv_exchange(a, b) b a

#define _priv_parse_0()
#define _priv_parse_1(arg) _priv_exchange arg
#define _priv_parse_2(arg, ...) _priv_exchange arg, _priv_parse_1(__VA_ARGS__)
#define _priv_parse_3(arg, ...) _priv_exchange arg, _priv_parse_2(__VA_ARGS__)
#define _priv_parse_4(arg, ...) _priv_exchange arg, _priv_parse_3(__VA_ARGS__)
#define _priv_parse_5(arg, ...) _priv_exchange arg, _priv_parse_4(__VA_ARGS__)
#define _priv_parse_6(arg, ...) _priv_exchange arg, _priv_parse_5(__VA_ARGS__)
#define _priv_parse_7(arg, ...) _priv_exchange arg, _priv_parse_6(__VA_ARGS__)
#define _priv_parse_8(arg, ...) _priv_exchange arg, _priv_parse_7(__VA_ARGS__)
#define _priv_parse_9(arg, ...) _priv_exchange arg, _priv_parse_8(__VA_ARGS__)
#define _priv_parse_10(arg, ...) _priv_exchange arg, _priv_parse_9(__VA_ARGS__)
#define _priv_parse_11(arg, ...) _priv_exchange arg, _priv_parse_10(__VA_ARGS__)
#define _priv_parse_12(arg, ...) _priv_exchange arg, _priv_parse_11(__VA_ARGS__)
#define _priv_parse_13(arg, ...) _priv_exchange arg, _priv_parse_12(__VA_ARGS__)
#define _priv_parse_14(arg, ...) _priv_exchange arg, _priv_parse_13(__VA_ARGS__)
#define _priv_parse_15(arg, ...) _priv_exchange arg, _priv_parse_14(__VA_ARGS__)
#define _priv_parse_16(arg, ...) _priv_exchange arg, _priv_parse_15(__VA_ARGS__)
#define _priv_parse_17(arg, ...) _priv_exchange arg, _priv_parse_16(__VA_ARGS__)
#define _priv_parse_18(arg, ...) _priv_exchange arg, _priv_parse_17(__VA_ARGS__)
#define _priv_parse_19(arg, ...) _priv_exchange arg, _priv_parse_18(__VA_ARGS__)
#define _priv_parse_20(arg, ...) _priv_exchange arg, _priv_parse_19(__VA_ARGS__)
#define _priv_parse_21(arg, ...) _priv_exchange arg, _priv_parse_20(__VA_ARGS__)
#define _priv_parse_22(arg, ...) _priv_exchange arg, _priv_parse_21(__VA_ARGS__)
#define _priv_parse_23(arg, ...) _priv_exchange arg, _priv_parse_22(__VA_ARGS__)
#define _priv_parse_24(arg, ...) _priv_exchange arg, _priv_parse_23(__VA_ARGS__)
#define _priv_parse_25(arg, ...) _priv_exchange arg, _priv_parse_24(__VA_ARGS__)
#define _priv_parse_26(arg, ...) _priv_exchange arg, _priv_parse_25(__VA_ARGS__)
#define _priv_parse_27(arg, ...) _priv_exchange arg, _priv_parse_26(__VA_ARGS__)
#define _priv_parse_28(arg, ...) _priv_exchange arg, _priv_parse_27(__VA_ARGS__)
#define _priv_parse_29(arg, ...) _priv_exchange arg, _priv_parse_28(__VA_ARGS__)
#define _priv_parse_30(arg, ...) _priv_exchange arg, _priv_parse_29(__VA_ARGS__)
#define _priv_parse_31(arg, ...) _priv_exchange arg, _priv_parse_30(__VA_ARGS__)
#define _priv_parse_32(arg, ...) _priv_exchange arg, _priv_parse_31(__VA_ARGS__)
#define _priv_parse_33(arg, ...) _priv_exchange arg, _priv_parse_32(__VA_ARGS__)
#define _priv_parse_34(arg, ...) _priv_exchange arg, _priv_parse_33(__VA_ARGS__)
#define _priv_parse_35(arg, ...) _priv_exchange arg, _priv_parse_34(__VA_ARGS__)
#define _priv_parse_36(arg, ...) _priv_exchange arg, _priv_parse_35(__VA_ARGS__)
#define _priv_parse_37(arg, ...) _priv_exchange arg, _priv_parse_36(__VA_ARGS__)
#define _priv_parse_38(arg, ...) _priv_exchange arg, _priv_parse_37(__VA_ARGS__)
#define _priv_parse_39(arg, ...) _priv_exchange arg, _priv_parse_38(__VA_ARGS__)
#define _priv_parse_40(arg, ...) _priv_exchange arg, _priv_parse_39(__VA_ARGS__)
#define _priv_parse_41(arg, ...) _priv_exchange arg, _priv_parse_40(__VA_ARGS__)
#define _priv_parse_42(arg, ...) _priv_exchange arg, _priv_parse_41(__VA_ARGS__)
#define _priv_parse_43(arg, ...) _priv_exchange arg, _priv_parse_42(__VA_ARGS__)
#define _priv_parse_44(arg, ...) _priv_exchange arg, _priv_parse_43(__VA_ARGS__)
#define _priv_parse_45(arg, ...) _priv_exchange arg, _priv_parse_44(__VA_ARGS__)
#define _priv_parse_46(arg, ...) _priv_exchange arg, _priv_parse_45(__VA_ARGS__)
#define _priv_parse_47(arg, ...) _priv_exchange arg, _priv_parse_46(__VA_ARGS__)
#define _priv_parse_48(arg, ...) _priv_exchange arg, _priv_parse_47(__VA_ARGS__)
#define _priv_parse_49(arg, ...) _priv_exchange arg, _priv_parse_48(__VA_ARGS__)
#define _priv_parse_50(arg, ...) _priv_exchange arg, _priv_parse_49(__VA_ARGS__)
#define _priv_parse_51(arg, ...) _priv_exchange arg, _priv_parse_50(__VA_ARGS__)
#define _priv_parse_52(arg, ...) _priv_exchange arg, _priv_parse_51(__VA_ARGS__)
#define _priv_parse_53(arg, ...) _priv_exchange arg, _priv_parse_52(__VA_ARGS__)
#define _priv_parse_54(arg, ...) _priv_exchange arg, _priv_parse_53(__VA_ARGS__)
#define _priv_parse_55(arg, ...) _priv_exchange arg, _priv_parse_54(__VA_ARGS__)
#define _priv_parse_56(arg, ...) _priv_exchange arg, _priv_parse_55(__VA_ARGS__)
#define _priv_parse_57(arg, ...) _priv_exchange arg, _priv_parse_56(__VA_ARGS__)
#define _priv_parse_58(arg, ...) _priv_exchange arg, _priv_parse_57(__VA_ARGS__)
#define _priv_parse_59(arg, ...) _priv_exchange arg, _priv_parse_58(__VA_ARGS__)
#define _priv_parse_60(arg, ...) _priv_exchange arg, _priv_parse_59(__VA_ARGS__)
#define _priv_parse_61(arg, ...) _priv_exchange arg, _priv_parse_60(__VA_ARGS__)
#define _priv_parse_62(arg, ...) _priv_exchange arg, _priv_parse_61(__VA_ARGS__)
#define _priv_parse_63(arg, ...) _priv_exchange arg, _priv_parse_62(__VA_ARGS__)

#define _priv_select(n, x) n ## _ ## x
#define _priv_overload(n, x) _priv_select(n, x)

#define _priv_first(n, ...) n

#define _priv_return(...) _priv_first(__VA_OPT__(__VA_ARGS__, ) void)
#define _priv_parse(...) _priv_overload(_priv_parse, _priv_argc(__VA_ARGS__))(__VA_ARGS__)

#endif
