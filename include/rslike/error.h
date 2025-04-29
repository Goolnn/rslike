#ifndef GOOLNN_RSLIKE_ERROR_H
#define GOOLNN_RSLIKE_ERROR_H

#include "rslike/enum.h"

#define Error(n) n ## Error

#define error(n, s) enum(n ## Error, s)

#endif
