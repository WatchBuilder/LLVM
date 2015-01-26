#ifndef _LLVM_SB_IO_
#define _LLVM_SB_IO_

#include <functional>
#include <sys/types.h>
#include <sys/stat.h>

#define DEF_REDIRECTOR(name, retval, args) \
typedef std::function<retval args> name##_redir_t; \
void __set_##name##_redirector(name##_redir_t redir); \
retval name args

namespace llvm_sb {
    DEF_REDIRECTOR(open, int, (const char *, int, mode_t));
    DEF_REDIRECTOR(mkdir, int, (const char *, mode_t));
    DEF_REDIRECTOR(link, int, (const char *dest, const char *source));
    DEF_REDIRECTOR(symlink, int, (const char *dest, const char *source));
    DEF_REDIRECTOR(remove, int, (const char *dest));
    DEF_REDIRECTOR(rename, int, (const char *source, const char *dest));
    DEF_REDIRECTOR(truncate, int, (const char *path, uint64_t size));
    DEF_REDIRECTOR(access, int, (const char *path, int flags));
    DEF_REDIRECTOR(readlink, ssize_t, (const char *path, char *buf, size_t buflen));
    DEF_REDIRECTOR(stat, int, (const char *path, struct stat *buf));
}

#undef DEF_REDIRECTOR

#endif
