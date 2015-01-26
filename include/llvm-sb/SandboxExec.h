#ifndef _LLVM_SB_EXEC_
#define _LLVM_SB_EXEC_

#include <functional>
#include <sys/types.h>

namespace llvm_sb {
    int run_program(const std::function<int ()> program);
    void exit(int) __dead2;
    
    void assert_failure(const char *cond, const char *file, int line) __dead2;
}

#undef assert
#define assert(cond) ((cond) ? llvm_sb::assert_failure(#cond, __FILE__, __LINE__) : (void)0)

#endif
