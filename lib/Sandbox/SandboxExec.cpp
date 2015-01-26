//
//  SandboxExec.cpp
//  LLVM
//
//  Created by William Kent on 1/25/15.
//  Copyright (c) 2015 LLVM Project. All rights reserved.
//

#include <stdio.h>
#include <llvm-sb/SandboxExec.h>

namespace llvm_sb {
    class exit_code {
        public:
        int code;
        
        exit_code(int c) : code(c) {}
    };
}

void llvm_sb::exit(int code) {
    throw llvm_sb::exit_code(code);
}

int llvm_sb::run_program(const std::function<int ()> program) {
    try {
        return program();
    } catch (exit_code c) {
        return c.code;
    }
}

void llvm_sb::assert_failure(const char *cond, const char *file, int line) {
    fprintf(stderr, "%s:%d: assertion failed: %s\n", file, line, cond);
    llvm_sb::exit(-1);
}
