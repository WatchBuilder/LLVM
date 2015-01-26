//
//  SandboxExec.cpp
//  LLVM
//
//  Created by William Kent on 1/25/15.
//  Copyright (c) 2015 LLVM Project. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <llvm-sb/SandboxExec.h>

namespace llvm_sb {
    class exit_code {
        public:
        int code;
        
        exit_code(int c) : code(c) {}
    };
    
    bool redirect_exit = false;
}

void llvm_sb::exit(int code) {
    if (!redirect_exit) ::exit(code);
    throw llvm_sb::exit_code(code);
}

int llvm_sb::run_program(const std::function<int ()> program) {
    int retval = 0;
    
    redirect_exit = true;
    try {
        retval = program();
    } catch (exit_code c) {
        retval = c.code;
    }
    redirect_exit = false;
    return retval;
}

void llvm_sb::assert_failure(const char *cond, const char *file, int line) {
    fprintf(stderr, "%s:%d: assertion failed: %s\n", file, line, cond);
    llvm_sb::exit(-1);
}
