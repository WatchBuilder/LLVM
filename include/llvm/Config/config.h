#ifndef CONFIG_H
#define CONFIG_H

/* Bug report URL. */
#define BUG_REPORT_URL "https://github.com/WatchBuilder/LLVM"

#define CLANG_HAVE_LIBXML 1

/* Relative directory for resource files */
#define CLANG_RESOURCE_DIR "${CLANG_RESOURCE_DIR}"

/* Directories clang will search for headers */
#define C_INCLUDE_DIRS "/usr/include"

/* Default <path> to all compiler invocations for --sysroot=<path>. */
#undef DEFAULT_SYSROOT

/* Define if you want backtraces on crash */
#define ENABLE_BACKTRACES 1

/* Define to enable crash overrides */
#define ENABLE_CRASH_OVERRIDES 0

/* Define if position independent code is enabled */
#define ENABLE_PIC 1

/* Define if timestamp information (e.g., __DATE__) is allowed */
#define ENABLE_TIMESTAMPS 1

/* Directory where gcc is installed. */
#undef GCC_INSTALL_PREFIX

/* Define to 1 if you have the `arc4random' function. */
#define HAVE_ARC4RANDOM 1

/* Define to 1 if you have the `backtrace' function. */
#define HAVE_BACKTRACE 1

/* Define to 1 if you have the `bcopy' function. */
#undef HAVE_BCOPY

/* Define to 1 if you have the `ceilf' function. */
#define HAVE_CEILF 1

/* Define if the neat program is available */
#undef HAVE_CIRCO

/* Define to 1 if you have the `closedir' function. */
#define HAVE_CLOSEDIR 1

/* Define to 1 if you have the <cxxabi.h> header file. */
#define HAVE_CXXABI_H 1

/* Define to 1 if you have the <CrashReporterClient.h> header file. */
#undef HAVE_CRASHREPORTERCLIENT_H

/* can use __crashreporter_info__ */
#undef HAVE_CRASHREPORTER_INFO

/* Define to 1 if you have the declaration of `strerror_s', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_S 0

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define if you have the GNU dld library. */
#undef HAVE_DLD

/* Define to 1 if you have the `dlerror' function. */
#define HAVE_DLERROR 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if dlopen() is available on this platform. */
#define HAVE_DLOPEN 1

/* Define if the dot program is available */
#undef HAVE_DOT

/* Define if the dotty program is available */
#undef HAVE_DOTTY

/* Define if you have the _dyld_func_lookup function. */
#undef HAVE_DYLD

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define if the neat program is available */
#undef HAVE_FDP

/* Define to 1 if you have the <fenv.h> header file. */
#define HAVE_FENV_H 1

/* Define if libffi is available on this platform. */
#define HAVE_FFI_CALL 1

/* Define to 1 if you have the <ffi/ffi.h> header file. */
#define HAVE_FFI_FFI_H 1

/* Define to 1 if you have the <ffi.h> header file. */
#undef HAVE_FFI_H

/* Set to 1 if the finite function is found in <ieeefp.h> */
#undef HAVE_FINITE_IN_IEEEFP_H

/* Define to 1 if you have the `floorf' function. */
#define HAVE_FLOORF 1

/* Define to 1 if you have the `log' function. */
#define HAVE_LOG 1

/* Define to 1 if you have the `log2' function. */
#define HAVE_LOG2 1

/* Define to 1 if you have the `log10' function. */
#define HAVE_LOG10 1

/* Define to 1 if you have the `exp' function. */
#define HAVE_EXP 1

/* Define to 1 if you have the `exp2' function. */
#define HAVE_EXP2 1

/* Define to 1 if you have the `exp10' function. */
#undef HAVE_EXP10

/* Define to 1 if you have the `fmodf' function. */
#define HAVE_FMODF 1

/* Define to 1 if you have the `futimes' function. */
#define HAVE_FUTIMES 1

/* Define to 1 if you have the `futimens' function */
#undef HAVE_FUTIMENS

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getrlimit' function. */
#define HAVE_GETRLIMIT 1

/* Define to 1 if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define if the Graphviz program is available */
#undef HAVE_GRAPHVIZ

/* Define if the gv program is available */
#undef HAVE_GV

/* Define to 1 if the system has the type `int64_t'. */
#define HAVE_INT64_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `isatty' function. */
#define HAVE_ISATTY 1

/* Set to 1 if the isinf function is found in <cmath> */
#define HAVE_ISINF_IN_CMATH 1

/* Set to 1 if the isinf function is found in <math.h> */
#define HAVE_ISINF_IN_MATH_H 1

/* Set to 1 if the isnan function is found in <cmath> */
#define HAVE_ISNAN_IN_CMATH 1

/* Set to 1 if the isnan function is found in <math.h> */
#define HAVE_ISNAN_IN_MATH_H 1

/* Define if you have the libdl library or equivalent. */
#define HAVE_LIBDL 1

/* Define to 1 if you have the `imagehlp' library (-limagehlp). */
#undef HAVE_LIBIMAGEHLP

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `psapi' library (-lpsapi). */
#undef HAVE_LIBPSAPI

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the `shell32' library (-lshell32). */
#undef HAVE_LIBSHELL32

/* Define to 1 if you have the `udis86' library (-ludis86). */
#undef HAVE_LIBUDIS86

/* Define to 1 if you have the 'z' library (-lz). */
#define HAVE_LIBZ 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define if you can use -rdynamic. */
#undef HAVE_LINK_EXPORT_DYNAMIC

/* Define if you can use -Wl,-R. to pass -R. to the linker, in order to add
   the current directory to the dynamic linker search path. */
#undef HAVE_LINK_R

/* Define to 1 if you have the `longjmp' function. */
#define HAVE_LONGJMP 1

/* Define to 1 if you have the <mach/mach.h> header file. */
#define HAVE_MACH_MACH_H 1

/* Define to 1 if you have the <mach-o/dyld.h> header file. */
#define HAVE_MACH_O_DYLD_H 1

/* Define if mallinfo() is available on this platform. */
#undef HAVE_MALLINFO

/* Define to 1 if you have the <malloc.h> header file. */
#undef HAVE_MALLOC_H

/* Define to 1 if you have the <malloc/malloc.h> header file. */
#define HAVE_MALLOC_MALLOC_H 1

/* Define to 1 if you have the `malloc_zone_statistics' function. */
#define HAVE_MALLOC_ZONE_STATISTICS 1

/* Define to 1 if you have the `mkdtemp' function. */
#define HAVE_MKDTEMP 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the `mktemp' function. */
#define HAVE_MKTEMP 1

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Define if mmap() uses MAP_ANONYMOUS to map anonymous pages, or undefine if
   it uses MAP_ANON */
#undef HAVE_MMAP_ANONYMOUS

/* Define if mmap() can map files into memory */
#undef HAVE_MMAP_FILE

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
#undef HAVE_NDIR_H

/* Define to 1 if you have the `nearbyintf' function. */
#define HAVE_NEARBYINTF 1

/* Define if the neat program is available */
#undef HAVE_NEATO

/* Define to 1 if you have the `opendir' function. */
#define HAVE_OPENDIR 1

/* Define to 1 if you have the `posix_spawn' function. */
#define HAVE_POSIX_SPAWN 1

/* Define to 1 if you have the `powf' function. */
#define HAVE_POWF 1

/* Define to 1 if you have the `pread' function. */
#define HAVE_PREAD 1

/* Define if libtool can extract symbol lists from object files. */
#undef HAVE_PRELOADED_SYMBOLS

/* Define to have the %a format string */
#undef HAVE_PRINTF_A

/* Have pthread_getspecific */
#define HAVE_PTHREAD_GETSPECIFIC 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Have pthread_mutex_lock */
#define HAVE_PTHREAD_MUTEX_LOCK 1

/* Have pthread_rwlock_init */
#define HAVE_PTHREAD_RWLOCK_INIT 1

/* Define to 1 if srand48/lrand48/drand48 exist in <stdlib.h> */
#define HAVE_RAND48 1

/* Define to 1 if you have the `readdir' function. */
#define HAVE_READDIR 1

/* Define to 1 if you have the `realpath' function. */
#define HAVE_REALPATH 1

/* Define to 1 if you have the `rintf' function. */
#undef HAVE_RINTF

/* Define to 1 if you have the `round' function. */
#define HAVE_ROUND 1

/* Define to 1 if you have the `roundf' function. */
#define HAVE_ROUNDF 1

/* Define to 1 if you have the `sbrk' function. */
#undef HAVE_SBRK

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `setjmp' function. */
#define HAVE_SETJMP 1

/* Define to 1 if you have the `setrlimit' function. */
#define HAVE_SETRLIMIT 1

/* Define if you have the shl_load function. */
#undef HAVE_SHL_LOAD

/* Define to 1 if you have the `siglongjmp' function. */
#define HAVE_SIGLONGJMP 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `sigsetjmp' function. */
#define HAVE_SIGSETJMP 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Set to 1 if the std::isinf function is found in <cmath> */
#undef HAVE_STD_ISINF_IN_CMATH

/* Set to 1 if the std::isnan function is found in <cmath> */
#undef HAVE_STD_ISNAN_IN_CMATH

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the `strtof' function. */
#define HAVE_STRTOF 1

/* Define to 1 if you have the `strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if you have the `strtoq' function. */
#define HAVE_STRTOQ 1

/* Define to 1 if you have the `sysconf' function. */
#undef HAVE_SYSCONF

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
#define HAVE_SYS_DIR_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_NDIR_H

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define if the setupterm() function is supported this platform. */
#define HAVE_TERMINFO 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define if the neat program is available */
#undef HAVE_TWOPI

/* Define to 1 if the system has the type `uint64_t'. */
#define HAVE_UINT64_T 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if the system has the type `u_int64_t'. */
#define HAVE_U_INT64_T 1

/* Define to 1 if you have the <valgrind/valgrind.h> header file. */
#undef HAVE_VALGRIND_VALGRIND_H

/* Define to 1 if you have the `writev' function. */
#define HAVE_WRITEV 1

/* Define if the xdot.py program is available */
#undef HAVE_XDOT

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Have host's _alloca */
#undef HAVE__ALLOCA

/* Have host's __alloca */
#undef HAVE___ALLOCA

/* Have host's __ashldi3 */
#define HAVE___ASHLDI3 1

/* Have host's __ashrdi3 */
#define HAVE___ASHRDI3 1

/* Have host's __chkstk */
#undef HAVE___CHKSTK

/* Have host's __cmpdi2 */
#define HAVE___CMPDI2 1

/* Have host's __divdi3 */
#define HAVE___DIVDI3 1

/* Define to 1 if you have the `__dso_handle' function. */
#undef HAVE___DSO_HANDLE

/* Have host's __fixdfdi */
#define HAVE___FIXDFDI 1

/* Have host's __fixsfdi */
#define HAVE___FIXSFDI 1

/* Have host's __floatdidf */
#undef HAVE___FLOATDIDF

/* Have host's __lshrdi3 */
#define HAVE___LSHRDI3 1

/* Have host's __main */
#undef HAVE___MAIN

/* Have host's __moddi3 */
#define HAVE___MODDI3 1

/* Have host's __udivdi3 */
#define HAVE___UDIVDI3 1

/* Have host's __umoddi3 */
#define HAVE___UMODDI3 1

/* Have host's ___chkstk */
#undef HAVE____CHKSTK

/* Linker version detected at compile time. */
#undef HOST_LINK_VERSION

/* Installation directory for binary executables */
#define LLVM_BINDIR "/usr/local/bin"

/* Time at which LLVM was configured */
#define LLVM_CONFIGTIME "Sun Jan 25 16:59:10 EST 2015"

/* Installation directory for data files */
#define LLVM_DATADIR "/usr/local/share/llvm"

/* Target triple LLVM will generate code for by default */
#define LLVM_DEFAULT_TARGET_TRIPLE "x86_64-apple-darwin14.0.0"

/* Installation directory for documentation */
#define LLVM_DOCSDIR "/usr/local/share/doc/llvm"

/* Define if threads enabled */
#define LLVM_ENABLE_THREADS 1

/* Define if zlib compression is available */
#define LLVM_ENABLE_ZLIB 1

/* Installation directory for config files */
#define LLVM_ETCDIR "/usr/local/share/llvm/conf"

/* Has gcc/MSVC atomic intrinsics */
#define LLVM_HAS_ATOMICS 1

/* Host triple LLVM will be executed on */
#define LLVM_HOST_TRIPLE "x86_64-apple-darwin14.0.0"

/* Installation directory for include files */
#define LLVM_INCLUDEDIR "/usr/local/include/llvm"

/* Installation directory for .info files */
#define LLVM_INFODIR "/usr/local/share/info"

/* Installation directory for man pages */
#define LLVM_MANDIR "/usr/local/share/man"

/* LLVM architecture name for the native architecture, if available */
#define LLVM_NATIVE_ARCH X86

/* LLVM name for the native AsmParser init function, if available */
#define LLVM_NATIVE_ASMPARSER LLVMInitializeX86AsmParser

/* LLVM name for the native AsmPrinter init function, if available */
#define LLVM_NATIVE_ASMPRINTER LLVMInitializeX86AsmPrinter

/* LLVM name for the native Disassembler init function, if available */
#define LLVM_NATIVE_DISASSEMBLER LLVMInitializeX86Disassembler

/* LLVM name for the native Target init function, if available */
#define LLVM_NATIVE_TARGET LLVMInitializeX86Target

/* LLVM name for the native TargetInfo init function, if available */
#define LLVM_NATIVE_TARGETINFO LLVMInitializeX86TargetInfo

/* LLVM name for the native target MC init function, if available */
#define LLVM_NATIVE_TARGETMC LLVMInitializeX86TargetMC

/* Define if this is Unixish platform */
#define LLVM_ON_UNIX 1

/* Define if this is Win32ish platform */
#undef LLVM_ON_WIN32

/* Define to path to circo program if found or 'echo circo' otherwise */
#define LLVM_PATH_CIRCO "echo circo"

/* Define to path to dot program if found or 'echo dot' otherwise */
#define LLVM_PATH_DOT "echo dot"

/* Define to path to dotty program if found or 'echo dotty' otherwise */
#define LLVM_PATH_DOTTY "echo dotty"

/* Define to path to fdp program if found or 'echo fdp' otherwise */
#define LLVM_PATH_FDP "echo dfp"

/* Define to path to Graphviz program if found or 'echo Graphviz' otherwise */
#define LLVM_PATH_GRAPHVIZ "echo Graphviz"

/* Define to path to gv program if found or 'echo gv' otherwise */
#define LLVM_PATH_GV "echo gv"

/* Define to path to neato program if found or 'echo neato' otherwise */
#define LLVM_PATH_NEATO "echo neato"

/* Define to path to twopi program if found or 'echo twopi' otherwise */
#define LLVM_PATH_TWOPI "echo twopi"

/* Define to path to xdot.py program if found or 'echo xdot' otherwise */
#define LLVM_PATH_XDOT "echo xdot"

/* Installation prefix directory */
#define LLVM_PREFIX "/usr/local"

/* Define if we have the Intel JIT API runtime support library */
#undef LLVM_USE_INTEL_JITEVENTS

/* Define if we have the oprofile JIT-support library */
#undef LLVM_USE_OPROFILE

/* Major version of the LLVM API */
#define LLVM_VERSION_MAJOR 3

/* Minor version of the LLVM API */
#define LLVM_VERSION_MINOR 5

/* Define if the OS needs help to load dependent libraries for dlopen(). */
#undef LTDL_DLOPEN_DEPLIBS

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#undef LTDL_OBJDIR

/* Define to the extension used for shared libraries, say, ".so". */
#define LTDL_SHLIB_EXT ".dylib"

/* Define to the system default library search path. */
#define LTDL_SYSSEARCHPATH "/usr/lib:/usr/local/lib"

/* Define if /dev/zero should be used when mapping RWX memory, or undefine if
   its not necessary */
#undef NEED_DEV_ZERO_FOR_MMAP

/* Define if dlsym() requires a leading underscore in symbol names. */
#undef NEED_USCORE

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://github.com/WatchBuilder/LLVM/issues"

/* Define to the full name of this package. */
#define PACKAGE_NAME "LLVM"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "LLVM 3.5"

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.5"

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
#undef STAT_MACROS_BROKEN

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#undef TIME_WITH_SYS_TIME

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
#undef TM_IN_SYS_TIME

/* Define if use udis86 library */
#undef USE_UDIS86

/* Define to empty if `const' does not conform to ANSI C. */
#undef const

/* Define to `int' if <sys/types.h> does not define. */
#undef pid_t

/* Define to `unsigned int' if <sys/types.h> does not define. */
#undef size_t

/* Define to 1 if you have the `_chsize_s' function. */
#undef HAVE__CHSIZE_S

#endif
