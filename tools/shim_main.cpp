#ifndef _TOOL_MAIN_FUNCTION
#error _TOOL_MAIN_FUNCTION must be defined.
#endif

namespace llvm_tool {
    extern int _TOOL_MAIN_FUNCTION(int argc, const char * argv[]);
}

int main(int argc, const char * argv[]) {
    return llvm_tool::_TOOL_MAIN_FUNCTION(argc, argv);
}
