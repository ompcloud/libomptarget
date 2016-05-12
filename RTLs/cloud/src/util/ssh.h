//===-------- amazon.h----- - Information about Target RTLs ------ C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// Util function
//
//===----------------------------------------------------------------------===//

#ifndef _INCLUDE_UTIL_H_
#define _INCLUDE_UTIL_H_

#include <libssh/libssh.h>

int verify_knownhost(ssh_session session);

#endif
