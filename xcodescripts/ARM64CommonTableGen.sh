#!/bin/sh

#  generate-intrinsics.sh
#  LLVM
#
#  Created by William Kent on 1/25/15.
#  Copyright (c) 2015 LLVM Project. All rights reserved.

set -e

mkdir -p "${PROJECT_TEMP_ROOT}/llvm_generated"

function TableGen {
    outfile=${PROJECT_TEMP_ROOT}/llvm_generated/$1
    shift

    # This test is a bit lame, as if any files included by ARM64.td
    # are modified, ARM64.td will then need to be touched before any
    # of the other files are regenerated. However, as I do not foresee
    # modifying these files very often, this should do.
    if [ "$outfile" -nt "${SRCROOT}/ARM64.td" ]; then
        return
    fi

    echo $outfile
    "${BUILT_PRODUCTS_DIR}/llvm-tblgen" \
        -I "${LLVM_PROJECT_ROOT}/include" -I "${SRCROOT}" \
        "$@" -o "$outfile" "${SRCROOT}/ARM64.td"
}

TableGen ARM64GenRegisterInfo.inc -gen-register-info
TableGen ARM64GenInstrInfo.inc -gen-instr-info
TableGen ARM64GenMCCodeEmitter.inc -gen-emitter -mc-emitter
TableGen ARM64GenMCPseudoLowering.inc -gen-pseudo-lowering
TableGen ARM64GenAsmWriter.inc -gen-asm-writer
TableGen ARM64GenAsmMatcher.inc -gen-asm-matcher
TableGen ARM64GenDAGISel.inc -gen-dag-isel
TableGen ARM64GenFastISel.inc -gen-fast-isel
TableGen ARM64GenCallingConv.inc -gen-callingconv
TableGen ARM64GenSubtargetInfo.inc -gen-subtarget
TableGen ARM64GenDisassemblerTables.inc -gen-disassembler
