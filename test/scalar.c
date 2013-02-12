/*
 * C declaration composer for GCC Lua plugin.
 * Copyright © 2013 Peter Colberg.
 * For conditions of distribution and use, see copyright notice in LICENSE.
 */

/* scalar type */
int int_scalar;
const int const_int_scalar;
volatile int volatile_int_scalar;
const volatile int const_volatile_int_scalar;

short short_scalar;
const short const_short_scalar;
volatile short volatile_short_scalar;
const volatile short const_volatile_short_scalar;

/* scalar type declaration */
typedef int int_type;
int_type int_type_scalar;
typedef const int const_int_type;
const_int_type const_int_type_scalar;
volatile int_type volatile_int_type_scalar;
volatile const_int_type volatile_const_int_type_scalar;

typedef unsigned long unsigned_long_type;
unsigned_long_type unsigned_long_type_scalar;
typedef const unsigned long const_unsigned_long_type;
const_unsigned_long_type const_unsigned_long_type_scalar;
volatile unsigned_long_type volatile_unsigned_long_type_scalar;
volatile const_unsigned_long_type volatile_const_unsigned_long_type_scalar;
