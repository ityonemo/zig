/* Copyright (C) 2001-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _SYS_DEBUGREG_H
#define _SYS_DEBUGREG_H	1

/* Indicate the register numbers for a number of the specific
   debug registers.  Registers 0-3 contain the addresses we wish to trap on */
#define DR_FIRSTADDR 0        /* u_debugreg[DR_FIRSTADDR] */
#define DR_LASTADDR 3         /* u_debugreg[DR_LASTADDR]  */

#define DR_STATUS 6           /* u_debugreg[DR_STATUS]     */
#define DR_CONTROL 7          /* u_debugreg[DR_CONTROL] */

/* Define a few things for the status register.  We can use this to determine
   which debugging register was responsible for the trap.  The other bits
   are either reserved or not of interest to us. */

#define DR_TRAP0	(0x1)		/* db0 */
#define DR_TRAP1	(0x2)		/* db1 */
#define DR_TRAP2	(0x4)		/* db2 */
#define DR_TRAP3	(0x8)		/* db3 */

#define DR_STEP		(0x4000)	/* single-step */
#define DR_SWITCH	(0x8000)	/* task switch */

/* Now define a bunch of things for manipulating the control register.
   The top two bytes of the control register consist of 4 fields of 4
   bits - each field corresponds to one of the four debug registers,
   and indicates what types of access we trap on, and how large the data
   field is that we are looking at */

#define DR_CONTROL_SHIFT 16   /* Skip this many bits in ctl register */
#define DR_CONTROL_SIZE  4    /* 4 control bits per register */

#define DR_RW_EXECUTE	(0x0) /* Settings for the access types to trap on */
#define DR_RW_WRITE	(0x1)
#define DR_RW_READ	(0x3)

#define DR_LEN_1 (0x0)	      /* Settings for data length to trap on */
#define DR_LEN_2 (0x4)
#define DR_LEN_4 (0xC)
#ifdef __x86_64__
# define DR_LEN_8 (0x8)
#endif

/* The low byte to the control register determine which registers are
   enabled.  There are 4 fields of two bits.  One bit is "local", meaning
   that the processor will reset the bit after a task switch and the other
   is global meaning that we have to explicitly reset the bit.  With linux,
   you can use either one, since we explicitly zero the register when we enter
   kernel mode. */

#define DR_LOCAL_ENABLE_SHIFT  0   /* Extra shift to the local enable bit */
#define DR_GLOBAL_ENABLE_SHIFT 1   /* Extra shift to the global enable bit */
#define DR_ENABLE_SIZE	       2   /* 2 enable bits per register */

#define DR_LOCAL_ENABLE_MASK  (0x55) /* Set  local bits for all 4 regs */
#define DR_GLOBAL_ENABLE_MASK (0xAA) /* Set global bits for all 4 regs */

/* The second byte to the control register has a few special
   things.  */



#ifdef __x86_64__
# define DR_CONTROL_RESERVED (0xFFFFFFFF0000FC00ULL) /* Reserved */
#else
# define DR_CONTROL_RESERVED (0x00FC00U) /* Reserved */
#endif
#define DR_LOCAL_SLOWDOWN   (0x100)  /* Local slow the pipeline */
#define DR_GLOBAL_SLOWDOWN  (0x200)  /* Global slow the pipeline */

#endif	/* sys/debugreg.h */