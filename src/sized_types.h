#ifndef SIZED_TYPES_H
#define SIZED_TYPES_H

#include <limits.h>

#define PRId16 "%d"
#define PRIi16 "%d"
#define PRIu16 "%u"
#define PRIo16 "%o"
#define PRIx16 "%x"
#define PRIX16 "%X"

#define PRId32 "%d"
#define PRIi32 "%d"
#define PRIu32 "%u"
#define PRIo32 "%o"
#define PRIx32 "%x"
#define PRIX32 "%X"

#if UINT_MAX == 0xffffU

#define BIT_16_DEFINED
typedef int int16_t;
typedef unsigned int uint16_t;

#elif UINT_MAX == 0xffffffffUL

#define BIT_32_DEFINED
typedef int int32_t;
typedef unsigned int uint32_t;

#else

#error "int has a non-standard type"

#endif

/* check short */
#ifndef BIT_16_DEFINED

typedef short int16_t;
typedef unsigned short uint16_t;

#endif

/* check long */
#ifndef BIT_32_DEFINED

#define PRId32 "%ld"
#define PRIi32 "%ld"
#define PRIu32 "%lu"
#define PRIo32 "%lo"
#define PRIx32 "%lx"
#define PRIX32 "%lX"
typedef long int32_t;
typedef unsigned long uint32_t;

#endif

#undef BIT_16_DEFINED
#undef BIT_32_DEFINED

#endif
