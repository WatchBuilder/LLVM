#!/bin/sh

#  generate-intrinsics.sh
#  LLVM
#
#  Created by William Kent on 1/25/15.
#  Copyright (c) 2015 LLVM Project. All rights reserved.

set -e

# I must use PROJECT_TEMP_ROOT as the files generated here are required
# by multiple targets across multiple projects in a workspace.
mkdir -p "${PROJECT_TEMP_ROOT}/llvm_generated/llvm/IR"
"${BUILT_PRODUCTS_DIR}/llvm-tblgen" \
    -o "${PROJECT_TEMP_ROOT}/llvm_generated/llvm/IR/Intrinsics.gen" \
    "${LLVM_PROJECT_ROOT}/include/llvm/IR/Intrinsics.td" \
    -I "${LLVM_PROJECT_ROOT}/include" -I "${PROJECT_TEMP_ROOT}/llvm_generated" \
    -gen-intrinsic
