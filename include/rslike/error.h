#ifndef GOOLNN_RSLIKE_ERROR_H
#define GOOLNN_RSLIKE_ERROR_H

#include "rslike/enum.h"

#define Error(n) n ## Error

#define define_error(n, s) define_enum(n ## Error, s)

#endif
