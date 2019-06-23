/* This file is a part of sized_types
 *
 * Copyright 2019, Jeffery Stager
 *
 * sized_types is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * sized_types is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with sized_types.  If not, see <https://www.gnu.org/licenses/>.
 */

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

#if CHAR_BIT != 8

#error "char not 8 bits"

#endif

#define PRId8 "%d"
#define PRIi8 "%d"
#define PRIu8 "%u"
#define PRIo8 "%o"
#define PRIx8 "%x"
#define PRIX8 "%X"

typedef char int8;
typedef unsigned char uint8;

#if UINT_MAX == 0xffffU

#define BIT_16_DEFINED
typedef int int16;
typedef unsigned int uint16;

#elif UINT_MAX == 0xffffffffUL

#define BIT_32_DEFINED
typedef int int32;
typedef unsigned int uint32;

#else

#error "int has a non-standard type"

#endif

/* check short */
#ifndef BIT_16_DEFINED

typedef short int16;
typedef unsigned short uint16;

#endif

/* check long */
#ifndef BIT_32_DEFINED

#define PRId32 "%ld"
#define PRIi32 "%ld"
#define PRIu32 "%lu"
#define PRIo32 "%lo"
#define PRIx32 "%lx"
#define PRIX32 "%lX"
typedef long int32;
typedef unsigned long uint32;

#endif

#undef BIT_16_DEFINED
#undef BIT_32_DEFINED

#endif
