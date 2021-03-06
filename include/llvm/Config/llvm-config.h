/*===-- llvm/config/llvm-config.h - llvm configure variable -------*- C -*-===*/
/*                                                                            */
/*                     The LLVM Compiler Infrastructure                       */
/*                                                                            */
/* This file is distributed under the University of Illinois Open Source      */
/* License. See LICENSE.TXT for details.                                      */
/*                                                                            */
/*===----------------------------------------------------------------------===*/

/* This file enumerates all of the llvm variables from configure so that
   they can be in exported headers and won't override package specific
   directives.  This is a C file so we can include it in the llvm-c headers.  */

/* To avoid multiple inclusions of these variables when we include the exported
   headers and config.h, conditionally include these.  */
/* TODO: This is a bit of a hack.  */
#ifndef CONFIG_H

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

/* Define to 1 if you have the <sanitizer/msan_interface.h> header file. */
#undef HAVE_SANITIZER_MSAN_INTERFACE_H

#endif
