/*
 * jit.h - General definitions for JIT back-ends.
 *
 * Copyright (C) 2004  Southern Storm Software, Pty Ltd.
 *
 * The libjit library is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation, either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * The libjit library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the libjit library.  If not, see
 * <http://www.gnu.org/licenses/>.
 */

/*******************************************************************************

 BEGIN_JUCE_MODULE_DECLARATION

  ID:               jit
  vendor:           southern storm software
  version:          1.0.0
  name:             JIT Compiler
  description:      General definitions for JIT back-ends.
  website:          https://www.gnu.org/software/libjit/
  license:          LGPL 2.1

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/

#pragma once

#ifdef	__cplusplus
extern	"C" {
#endif

#include "include/jit/jit-defs.h"
#include "include/jit/jit-common.h"
#include "include/jit/jit-context.h"
#include "include/jit/jit-apply.h"
#include "include/jit/jit-block.h"
#include "include/jit/jit-debugger.h"
#include "include/jit/jit-elf.h"
#include "include/jit/jit-except.h"
#include "include/jit/jit-function.h"
#include "include/jit/jit-init.h"
#include "include/jit/jit-insn.h"
#include "include/jit/jit-intrinsic.h"
#include "include/jit/jit-meta.h"
#include "include/jit/jit-objmodel.h"
#include "include/jit/jit-opcode.h"
#include "include/jit/jit-type.h"
#include "include/jit/jit-unwind.h"
#include "include/jit/jit-util.h"
#include "include/jit/jit-value.h"
#include "include/jit/jit-vmem.h"
#include "include/jit/jit-walk.h"

#ifdef	__cplusplus
};
#endif
