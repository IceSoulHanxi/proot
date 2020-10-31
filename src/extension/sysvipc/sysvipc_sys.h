/*
 * This file contains definitions taken from glibc,
 * since proot is being built with no sys/sem.h
 * available
 *
 * Definitions were changed to include SysVIpc/SYSVIPC_ prefixes
 * and merged into single file
 *
 * glibc uses following license header:
 */
/* Copyright (C) 1995-2020 Free Software Foundation, Inc.
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


#ifndef SYSVIPC_SYS_H
#define SYSVIPC_SYS_H

#include <stdint.h>
#include <sys/msg.h>

/* Flags for `semop'.  */
#define SYSVIPC_SEM_UNDO	0x1000		/* undo the operation on exit */

/* Commands for `semctl'.  */
#define SYSVIPC_GETPID		11		/* get sempid */
#define SYSVIPC_GETVAL		12		/* get semval */
#define SYSVIPC_GETALL		13		/* get all semval's */
#define SYSVIPC_GETNCNT		14		/* get semncnt */
#define SYSVIPC_GETZCNT		15		/* get semzcnt */
#define SYSVIPC_SETVAL		16		/* set semval */
#define SYSVIPC_SETALL		17		/* set all semval's */

struct SysVIpcSembuf
{
  uint16_t sem_num;
  int16_t sem_op;
  int16_t sem_flg;
};

#define SYSVIPC_IPC_INFO	3		/* See ipcs.  */
/* ipcs ctl cmds */
#define SYSVIPC_SEM_STAT 18
#define SYSVIPC_SEM_INFO 19
#define SYSVIPC_SEM_STAT_ANY 20

struct  SysVIpcSeminfo
{
  int semmap;
  int semmni;
  int semmns;
  int semmnu;
  int semmsl;
  int semopm;
  int semume;
  int semusz;
  int semvmx;
  int semaem;
};


#endif // SYSVIPC_SYS_H
