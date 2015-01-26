#!/bin/sh

#  generate-intrinsics.sh
#  LLVM
#
#  Created by William Kent on 1/25/15.
#  Copyright (c) 2015 LLVM Project. All rights reserved.

set -e

mkdir -p "${PROJECT_TEMP_ROOT}/llvm_generated"

function TableGen {
    outfile=$1
    shift

    echo $outfile
    "${BUILT_PRODUCTS_DIR}/llvm-tblgen" \
        -I "${LLVM_PROJECT_ROOT}/include" -I "${SRCROOT}" \
        "$@" -o "${PROJECT_TEMP_ROOT}/llvm_generated/$1" "${SRCROOT}/X86.td"
}

TableGen X86GenRegisterInfo.inc -gen-register-info
TableGen X86GenDisassemblerTables.inc -gen-disassembler
TableGen X86GenInstrInfo.inc -gen-instr-info
TableGen X86GenAsmWriter.inc -gen-asm-writer
TableGen X86GenAsmWriter1.inc -gen-asm-writer -asmwriternum=1
TableGen X86GenAsmMatcher.inc -gen-asm-matcher
TableGen X86GenDAGISel.inc -gen-dag-isel
TableGen X86GenFastISel.inc -gen-fast-isel
TableGen X86GenCallingConv.inc -gen-callingconv
TableGen X86GenSubtargetInfo.inc -gen-subtarget
