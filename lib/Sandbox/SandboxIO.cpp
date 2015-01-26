//
//  SandboxIO.cpp
//  LLVM
//
//  Created by William Kent on 1/25/15.
//  Copyright (c) 2015 LLVM Project. All rights reserved.
//

#include <stdio.h>
#include <errno.h>
#include <llvm-sb/SandboxIO.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

namespace llvm_sb {
    static int default_open(const char *path, int flags, mode_t mode) {
        return ::open(path, flags, mode);
    }
    
    static int default_mkdir(const char *path, mode_t mode) {
        return ::mkdir(path, mode);
    }
    
    static int default_link(const char *dest, const char *source) {
        return ::link(dest, source);
    }
    
    static int default_symlink(const char *dest, const char *source) {
        return ::symlink(dest, source);
    }
    
    static int default_rename(const char *source, const char *dest) {
        return ::rename(source, dest);
    }
    
    static int default_remove(const char *path) {
        return ::remove(path);
    }
    
    static int default_truncate(const char *path, uint64_t size) {
        return ::truncate(path, size);
    }
    
    static int default_access(const char *path, int flags) {
        return ::access(path, flags);
    }
    
    static ssize_t default_readlink(const char *path, char *buf, size_t buflen) {
        return ::readlink(path, buf, buflen);
    }
    
    static int default_stat(const char *path, struct stat *buf) {
        return ::stat(path, buf);
    }
    
    open_redir_t open_redir = default_open;
    mkdir_redir_t mkdir_redir = default_mkdir;
    link_redir_t link_redir = default_link;
    symlink_redir_t symlink_redir = default_symlink;
    remove_redir_t remove_redir = default_remove;
    rename_redir_t rename_redir = default_rename;
    truncate_redir_t truncate_redir = default_truncate;
    access_redir_t access_redir = default_access;
    readlink_redir_t readlink_redir = default_readlink;
    stat_redir_t stat_redir = default_stat;
}

int llvm_sb::open(const char *path, int flags, mode_t mode) {
    return llvm_sb::open_redir(path, flags, mode);
}

int llvm_sb::mkdir(const char *path, mode_t mode) {
    return llvm_sb::mkdir_redir(path, mode);
}

int llvm_sb::link(const char *dest, const char *source) {
    return llvm_sb::link_redir(dest, source);
}

int llvm_sb::symlink(const char *dest, const char *source) {
    return llvm_sb::symlink_redir(dest, source);
}

int llvm_sb::remove(const char *dest) {
    return llvm_sb::remove_redir(dest);
}

int llvm_sb::truncate(const char *path, uint64_t size) {
    return llvm_sb::truncate_redir(path, size);
}

int llvm_sb::access(const char *path, int flags) {
    return llvm_sb::access_redir(path, flags);
}

ssize_t llvm_sb::readlink(const char *path, char *buf, size_t buflen) {
    return llvm_sb::readlink_redir(path, buf, buflen);
}

int llvm_sb::stat(const char *path, struct stat *buf) {
    return llvm_sb::stat_redir(path, buf);
}

void llvm_sb::__set_open_redirector(open_redir_t redir) {
    llvm_sb::open_redir = redir;
}

void llvm_sb::__set_mkdir_redirector(mkdir_redir_t redir) {
    llvm_sb::mkdir_redir = redir;
}

void llvm_sb::__set_link_redirector(link_redir_t redir) {
    llvm_sb::link_redir = redir;
}

void llvm_sb::__set_symlink_redirector(symlink_redir_t redir) {
    llvm_sb::symlink_redir = redir;
}

void llvm_sb::__set_remove_redirector(remove_redir_t redir) {
    llvm_sb::remove_redir = redir;
}

void llvm_sb::__set_rename_redirector(rename_redir_t redir) {
    llvm_sb::rename_redir = redir;
}

void llvm_sb::__set_truncate_redirector(truncate_redir_t redir) {
    llvm_sb::truncate_redir = redir;
}

void llvm_sb::__set_access_redirector(access_redir_t redir) {
    llvm_sb::access_redir = redir;
}

void llvm_sb::__set_readlink_redirector(readlink_redir_t redir) {
    llvm_sb::readlink_redir = redir;
}

void llvm_sb::__set_stat_redirector(stat_redir_t redir) {
    llvm_sb::stat_redir = redir;
}
