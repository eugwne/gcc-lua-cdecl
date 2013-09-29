#define _XOPEN_SOURCE 700
#include <libgen.h>
#include <sys/resource.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include "ffi-cdecl.h"
#include "ffi-cdecl-luajit.h"

cdecl_type(clockid_t)
cdecl_type(time_t)

cdecl_struct(timespec)

cdecl_var(optarg)
cdecl_var(opterr)
cdecl_var(optind)
cdecl_var(optopt)

cdecl_func(basename)
cdecl_func(clock_gettime)
cdecl_func(getopt)
cdecl_func(malloc)

cdecl_const(RLIM_INFINITY)
cdecl_const(RLIMIT_CORE)
cdecl_const(RLIMIT_CPU)
cdecl_const(RLIMIT_DATA)
cdecl_const(RLIMIT_FSIZE)
cdecl_const(RLIMIT_NOFILE)
cdecl_const(RLIMIT_STACK)
