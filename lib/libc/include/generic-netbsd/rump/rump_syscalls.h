/* $NetBSD: rump_syscalls.h,v 1.126 2021/11/01 05:26:28 thorpej Exp $ */

/*
 * System call protos in rump namespace.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	NetBSD: syscalls.master,v 1.309 2021/11/01 05:07:17 thorpej Exp
 */

#ifndef _RUMP_RUMP_SYSCALLS_H_
#define _RUMP_RUMP_SYSCALLS_H_

#ifdef _KERNEL
#error Interface not supported inside kernel
#endif /* _KERNEL */

#include <rump/rump_syscalls_compat.h>

#ifndef RUMP_SYS_RENAME___GETCWD
#define RUMP_SYS_RENAME___GETCWD rump___sysimpl___getcwd
#endif

#ifndef RUMP_SYS_RENAME___GETLOGIN
#define RUMP_SYS_RENAME___GETLOGIN rump___sysimpl___getlogin
#endif

#ifndef RUMP_SYS_RENAME___POSIX_CHOWN
#define RUMP_SYS_RENAME___POSIX_CHOWN rump___sysimpl___posix_chown
#endif

#ifndef RUMP_SYS_RENAME___POSIX_FCHOWN
#define RUMP_SYS_RENAME___POSIX_FCHOWN rump___sysimpl___posix_fchown
#endif

#ifndef RUMP_SYS_RENAME___POSIX_LCHOWN
#define RUMP_SYS_RENAME___POSIX_LCHOWN rump___sysimpl___posix_lchown
#endif

#ifndef RUMP_SYS_RENAME___POSIX_RENAME
#define RUMP_SYS_RENAME___POSIX_RENAME rump___sysimpl___posix_rename
#endif

#ifndef RUMP_SYS_RENAME___QUOTACTL
#define RUMP_SYS_RENAME___QUOTACTL rump___sysimpl___quotactl
#endif

#ifndef RUMP_SYS_RENAME___SETLOGIN
#define RUMP_SYS_RENAME___SETLOGIN rump___sysimpl___setlogin
#endif

#ifndef RUMP_SYS_RENAME___SYSCTL
#define RUMP_SYS_RENAME___SYSCTL rump___sysimpl___sysctl
#endif

#ifndef RUMP_SYS_RENAME__KSEM_CLOSE
#define RUMP_SYS_RENAME__KSEM_CLOSE rump___sysimpl__ksem_close
#endif

#ifndef RUMP_SYS_RENAME__KSEM_DESTROY
#define RUMP_SYS_RENAME__KSEM_DESTROY rump___sysimpl__ksem_destroy
#endif

#ifndef RUMP_SYS_RENAME__KSEM_GETVALUE
#define RUMP_SYS_RENAME__KSEM_GETVALUE rump___sysimpl__ksem_getvalue
#endif

#ifndef RUMP_SYS_RENAME__KSEM_INIT
#define RUMP_SYS_RENAME__KSEM_INIT rump___sysimpl__ksem_init
#endif

#ifndef RUMP_SYS_RENAME__KSEM_OPEN
#define RUMP_SYS_RENAME__KSEM_OPEN rump___sysimpl__ksem_open
#endif

#ifndef RUMP_SYS_RENAME__KSEM_POST
#define RUMP_SYS_RENAME__KSEM_POST rump___sysimpl__ksem_post
#endif

#ifndef RUMP_SYS_RENAME__KSEM_TIMEDWAIT
#define RUMP_SYS_RENAME__KSEM_TIMEDWAIT rump___sysimpl__ksem_timedwait
#endif

#ifndef RUMP_SYS_RENAME__KSEM_TRYWAIT
#define RUMP_SYS_RENAME__KSEM_TRYWAIT rump___sysimpl__ksem_trywait
#endif

#ifndef RUMP_SYS_RENAME__KSEM_UNLINK
#define RUMP_SYS_RENAME__KSEM_UNLINK rump___sysimpl__ksem_unlink
#endif

#ifndef RUMP_SYS_RENAME__KSEM_WAIT
#define RUMP_SYS_RENAME__KSEM_WAIT rump___sysimpl__ksem_wait
#endif

#ifndef RUMP_SYS_RENAME_ACCEPT
#define RUMP_SYS_RENAME_ACCEPT rump___sysimpl_accept
#endif

#ifndef RUMP_SYS_RENAME_ACCESS
#define RUMP_SYS_RENAME_ACCESS rump___sysimpl_access
#endif

#ifndef RUMP_SYS_RENAME_ADJTIME
#define RUMP_SYS_RENAME_ADJTIME rump___sysimpl_adjtime50
#endif

#ifndef RUMP_SYS_RENAME_AIO_CANCEL
#define RUMP_SYS_RENAME_AIO_CANCEL rump___sysimpl_aio_cancel
#endif

#ifndef RUMP_SYS_RENAME_AIO_ERROR
#define RUMP_SYS_RENAME_AIO_ERROR rump___sysimpl_aio_error
#endif

#ifndef RUMP_SYS_RENAME_AIO_FSYNC
#define RUMP_SYS_RENAME_AIO_FSYNC rump___sysimpl_aio_fsync
#endif

#ifndef RUMP_SYS_RENAME_AIO_READ
#define RUMP_SYS_RENAME_AIO_READ rump___sysimpl_aio_read
#endif

#ifndef RUMP_SYS_RENAME_AIO_RETURN
#define RUMP_SYS_RENAME_AIO_RETURN rump___sysimpl_aio_return
#endif

#ifndef RUMP_SYS_RENAME_AIO_SUSPEND
#define RUMP_SYS_RENAME_AIO_SUSPEND rump___sysimpl_aio_suspend50
#endif

#ifndef RUMP_SYS_RENAME_AIO_WRITE
#define RUMP_SYS_RENAME_AIO_WRITE rump___sysimpl_aio_write
#endif

#ifndef RUMP_SYS_RENAME_BIND
#define RUMP_SYS_RENAME_BIND rump___sysimpl_bind
#endif

#ifndef RUMP_SYS_RENAME_CHDIR
#define RUMP_SYS_RENAME_CHDIR rump___sysimpl_chdir
#endif

#ifndef RUMP_SYS_RENAME_CHFLAGS
#define RUMP_SYS_RENAME_CHFLAGS rump___sysimpl_chflags
#endif

#ifndef RUMP_SYS_RENAME_CHMOD
#define RUMP_SYS_RENAME_CHMOD rump___sysimpl_chmod
#endif

#ifndef RUMP_SYS_RENAME_CHOWN
#define RUMP_SYS_RENAME_CHOWN rump___sysimpl_chown
#endif

#ifndef RUMP_SYS_RENAME_CHROOT
#define RUMP_SYS_RENAME_CHROOT rump___sysimpl_chroot
#endif

#ifndef RUMP_SYS_RENAME_CLOCK_GETCPUCLOCKID2
#define RUMP_SYS_RENAME_CLOCK_GETCPUCLOCKID2 rump___sysimpl_clock_getcpuclockid2
#endif

#ifndef RUMP_SYS_RENAME_CLOCK_GETRES
#define RUMP_SYS_RENAME_CLOCK_GETRES rump___sysimpl_clock_getres50
#endif

#ifndef RUMP_SYS_RENAME_CLOCK_GETTIME
#define RUMP_SYS_RENAME_CLOCK_GETTIME rump___sysimpl_clock_gettime50
#endif

#ifndef RUMP_SYS_RENAME_CLOCK_NANOSLEEP
#define RUMP_SYS_RENAME_CLOCK_NANOSLEEP rump___sysimpl_clock_nanosleep
#endif

#ifndef RUMP_SYS_RENAME_CLOCK_SETTIME
#define RUMP_SYS_RENAME_CLOCK_SETTIME rump___sysimpl_clock_settime50
#endif

#ifndef RUMP_SYS_RENAME_CLOSE
#define RUMP_SYS_RENAME_CLOSE rump___sysimpl_close
#endif

#ifndef RUMP_SYS_RENAME_CONNECT
#define RUMP_SYS_RENAME_CONNECT rump___sysimpl_connect
#endif

#ifndef RUMP_SYS_RENAME_DUP
#define RUMP_SYS_RENAME_DUP rump___sysimpl_dup
#endif

#ifndef RUMP_SYS_RENAME_DUP2
#define RUMP_SYS_RENAME_DUP2 rump___sysimpl_dup2
#endif

#ifndef RUMP_SYS_RENAME_DUP3
#define RUMP_SYS_RENAME_DUP3 rump___sysimpl_dup3
#endif

#ifndef RUMP_SYS_RENAME_EXTATTR_DELETE_FD
#define RUMP_SYS_RENAME_EXTATTR_DELETE_FD rump___sysimpl_extattr_delete_fd
#endif

#ifndef RUMP_SYS_RENAME_EXTATTR_DELETE_FILE
#define RUMP_SYS_RENAME_EXTATTR_DELETE_FILE rump___sysimpl_extattr_delete_file
#endif

#ifndef RUMP_SYS_RENAME_EXTATTR_DELETE_LINK
#define RUMP_SYS_RENAME_EXTATTR_DELETE_LINK rump___sysimpl_extattr_delete_link
#endif

#ifndef RUMP_SYS_RENAME_EXTATTR_GET_FD
#define RUMP_SYS_RENAME_EXTATTR_GET_FD rump___sysimpl_extattr_get_fd
#endif

#ifndef RUMP_SYS_RENAME_EXTATTR_GET_FILE
#define RUMP_SYS_RENAME_EXTATTR_GET_FILE rump___sysimpl_extattr_get_file
#endif

#ifndef RUMP_SYS_RENAME_EXTATTR_GET_LINK
#define RUMP_SYS_RENAME_EXTATTR_GET_LINK rump___sysimpl_extattr_get_link
#endif

#ifndef RUMP_SYS_RENAME_EXTATTR_LIST_FD
#define RUMP_SYS_RENAME_EXTATTR_LIST_FD rump___sysimpl_extattr_list_fd
#endif

#ifndef RUMP_SYS_RENAME_EXTATTR_LIST_FILE
#define RUMP_SYS_RENAME_EXTATTR_LIST_FILE rump___sysimpl_extattr_list_file
#endif

#ifndef RUMP_SYS_RENAME_EXTATTR_LIST_LINK
#define RUMP_SYS_RENAME_EXTATTR_LIST_LINK rump___sysimpl_extattr_list_link
#endif

#ifndef RUMP_SYS_RENAME_EXTATTR_SET_FD
#define RUMP_SYS_RENAME_EXTATTR_SET_FD rump___sysimpl_extattr_set_fd
#endif

#ifndef RUMP_SYS_RENAME_EXTATTR_SET_FILE
#define RUMP_SYS_RENAME_EXTATTR_SET_FILE rump___sysimpl_extattr_set_file
#endif

#ifndef RUMP_SYS_RENAME_EXTATTR_SET_LINK
#define RUMP_SYS_RENAME_EXTATTR_SET_LINK rump___sysimpl_extattr_set_link
#endif

#ifndef RUMP_SYS_RENAME_EXTATTRCTL
#define RUMP_SYS_RENAME_EXTATTRCTL rump___sysimpl_extattrctl
#endif

#ifndef RUMP_SYS_RENAME_FACCESSAT
#define RUMP_SYS_RENAME_FACCESSAT rump___sysimpl_faccessat
#endif

#ifndef RUMP_SYS_RENAME_FCHDIR
#define RUMP_SYS_RENAME_FCHDIR rump___sysimpl_fchdir
#endif

#ifndef RUMP_SYS_RENAME_FCHFLAGS
#define RUMP_SYS_RENAME_FCHFLAGS rump___sysimpl_fchflags
#endif

#ifndef RUMP_SYS_RENAME_FCHMOD
#define RUMP_SYS_RENAME_FCHMOD rump___sysimpl_fchmod
#endif

#ifndef RUMP_SYS_RENAME_FCHMODAT
#define RUMP_SYS_RENAME_FCHMODAT rump___sysimpl_fchmodat
#endif

#ifndef RUMP_SYS_RENAME_FCHOWN
#define RUMP_SYS_RENAME_FCHOWN rump___sysimpl_fchown
#endif

#ifndef RUMP_SYS_RENAME_FCHOWNAT
#define RUMP_SYS_RENAME_FCHOWNAT rump___sysimpl_fchownat
#endif

#ifndef RUMP_SYS_RENAME_FCHROOT
#define RUMP_SYS_RENAME_FCHROOT rump___sysimpl_fchroot
#endif

#ifndef RUMP_SYS_RENAME_FCNTL
#define RUMP_SYS_RENAME_FCNTL rump___sysimpl_fcntl
#endif

#ifndef RUMP_SYS_RENAME_FDATASYNC
#define RUMP_SYS_RENAME_FDATASYNC rump___sysimpl_fdatasync
#endif

#ifndef RUMP_SYS_RENAME_FDISCARD
#define RUMP_SYS_RENAME_FDISCARD rump___sysimpl_fdiscard
#endif

#ifndef RUMP_SYS_RENAME_FGETXATTR
#define RUMP_SYS_RENAME_FGETXATTR rump___sysimpl_fgetxattr
#endif

#ifndef RUMP_SYS_RENAME_FHOPEN
#define RUMP_SYS_RENAME_FHOPEN rump___sysimpl_fhopen40
#endif

#ifndef RUMP_SYS_RENAME_FHSTAT
#define RUMP_SYS_RENAME_FHSTAT rump___sysimpl_fhstat50
#endif

#ifndef RUMP_SYS_RENAME_FHSTATVFS1
#define RUMP_SYS_RENAME_FHSTATVFS1 rump___sysimpl_fhstatvfs190
#endif

#ifndef RUMP_SYS_RENAME_FKTRACE
#define RUMP_SYS_RENAME_FKTRACE rump___sysimpl_fktrace
#endif

#ifndef RUMP_SYS_RENAME_FLISTXATTR
#define RUMP_SYS_RENAME_FLISTXATTR rump___sysimpl_flistxattr
#endif

#ifndef RUMP_SYS_RENAME_FLOCK
#define RUMP_SYS_RENAME_FLOCK rump___sysimpl_flock
#endif

#ifndef RUMP_SYS_RENAME_FPATHCONF
#define RUMP_SYS_RENAME_FPATHCONF rump___sysimpl_fpathconf
#endif

#ifndef RUMP_SYS_RENAME_FREMOVEXATTR
#define RUMP_SYS_RENAME_FREMOVEXATTR rump___sysimpl_fremovexattr
#endif

#ifndef RUMP_SYS_RENAME_FSETXATTR
#define RUMP_SYS_RENAME_FSETXATTR rump___sysimpl_fsetxattr
#endif

#ifndef RUMP_SYS_RENAME_FSTAT
#define RUMP_SYS_RENAME_FSTAT rump___sysimpl_fstat50
#endif

#ifndef RUMP_SYS_RENAME_FSTATAT
#define RUMP_SYS_RENAME_FSTATAT rump___sysimpl_fstatat
#endif

#ifndef RUMP_SYS_RENAME_FSTATVFS1
#define RUMP_SYS_RENAME_FSTATVFS1 rump___sysimpl_fstatvfs190
#endif

#ifndef RUMP_SYS_RENAME_FSYNC
#define RUMP_SYS_RENAME_FSYNC rump___sysimpl_fsync
#endif

#ifndef RUMP_SYS_RENAME_FSYNC_RANGE
#define RUMP_SYS_RENAME_FSYNC_RANGE rump___sysimpl_fsync_range
#endif

#ifndef RUMP_SYS_RENAME_FTRUNCATE
#define RUMP_SYS_RENAME_FTRUNCATE rump___sysimpl_ftruncate
#endif

#ifndef RUMP_SYS_RENAME_FUTIMENS
#define RUMP_SYS_RENAME_FUTIMENS rump___sysimpl_futimens
#endif

#ifndef RUMP_SYS_RENAME_FUTIMES
#define RUMP_SYS_RENAME_FUTIMES rump___sysimpl_futimes50
#endif

#ifndef RUMP_SYS_RENAME_GETDENTS
#define RUMP_SYS_RENAME_GETDENTS rump___sysimpl_getdents30
#endif

#ifndef RUMP_SYS_RENAME_GETEGID
#define RUMP_SYS_RENAME_GETEGID rump___sysimpl_getegid
#endif

#ifndef RUMP_SYS_RENAME_GETEUID
#define RUMP_SYS_RENAME_GETEUID rump___sysimpl_geteuid
#endif

#ifndef RUMP_SYS_RENAME_GETFH
#define RUMP_SYS_RENAME_GETFH rump___sysimpl_getfh30
#endif

#ifndef RUMP_SYS_RENAME_GETGID
#define RUMP_SYS_RENAME_GETGID rump___sysimpl_getgid
#endif

#ifndef RUMP_SYS_RENAME_GETGROUPS
#define RUMP_SYS_RENAME_GETGROUPS rump___sysimpl_getgroups
#endif

#ifndef RUMP_SYS_RENAME_GETITIMER
#define RUMP_SYS_RENAME_GETITIMER rump___sysimpl_getitimer50
#endif

#ifndef RUMP_SYS_RENAME_GETPEERNAME
#define RUMP_SYS_RENAME_GETPEERNAME rump___sysimpl_getpeername
#endif

#ifndef RUMP_SYS_RENAME_GETPGID
#define RUMP_SYS_RENAME_GETPGID rump___sysimpl_getpgid
#endif

#ifndef RUMP_SYS_RENAME_GETPGRP
#define RUMP_SYS_RENAME_GETPGRP rump___sysimpl_getpgrp
#endif

#ifndef RUMP_SYS_RENAME_GETPID
#define RUMP_SYS_RENAME_GETPID rump___sysimpl_getpid
#endif

#ifndef RUMP_SYS_RENAME_GETPPID
#define RUMP_SYS_RENAME_GETPPID rump___sysimpl_getppid
#endif

#ifndef RUMP_SYS_RENAME_GETRANDOM
#define RUMP_SYS_RENAME_GETRANDOM rump___sysimpl_getrandom
#endif

#ifndef RUMP_SYS_RENAME_GETRLIMIT
#define RUMP_SYS_RENAME_GETRLIMIT rump___sysimpl_getrlimit
#endif

#ifndef RUMP_SYS_RENAME_GETSID
#define RUMP_SYS_RENAME_GETSID rump___sysimpl_getsid
#endif

#ifndef RUMP_SYS_RENAME_GETSOCKNAME
#define RUMP_SYS_RENAME_GETSOCKNAME rump___sysimpl_getsockname
#endif

#ifndef RUMP_SYS_RENAME_GETSOCKOPT
#define RUMP_SYS_RENAME_GETSOCKOPT rump___sysimpl_getsockopt
#endif

#ifndef RUMP_SYS_RENAME_GETSOCKOPT2
#define RUMP_SYS_RENAME_GETSOCKOPT2 rump___sysimpl_getsockopt2
#endif

#ifndef RUMP_SYS_RENAME_GETTIMEOFDAY
#define RUMP_SYS_RENAME_GETTIMEOFDAY rump___sysimpl_gettimeofday50
#endif

#ifndef RUMP_SYS_RENAME_GETUID
#define RUMP_SYS_RENAME_GETUID rump___sysimpl_getuid
#endif

#ifndef RUMP_SYS_RENAME_GETVFSSTAT
#define RUMP_SYS_RENAME_GETVFSSTAT rump___sysimpl_getvfsstat90
#endif

#ifndef RUMP_SYS_RENAME_GETXATTR
#define RUMP_SYS_RENAME_GETXATTR rump___sysimpl_getxattr
#endif

#ifndef RUMP_SYS_RENAME_IOCTL
#define RUMP_SYS_RENAME_IOCTL rump___sysimpl_ioctl
#endif

#ifndef RUMP_SYS_RENAME_ISSETUGID
#define RUMP_SYS_RENAME_ISSETUGID rump___sysimpl_issetugid
#endif

#ifndef RUMP_SYS_RENAME_KEVENT
#define RUMP_SYS_RENAME_KEVENT rump___sysimpl_kevent50
#endif

#ifndef RUMP_SYS_RENAME_KQUEUE
#define RUMP_SYS_RENAME_KQUEUE rump___sysimpl_kqueue
#endif

#ifndef RUMP_SYS_RENAME_KQUEUE1
#define RUMP_SYS_RENAME_KQUEUE1 rump___sysimpl_kqueue1
#endif

#ifndef RUMP_SYS_RENAME_KTRACE
#define RUMP_SYS_RENAME_KTRACE rump___sysimpl_ktrace
#endif

#ifndef RUMP_SYS_RENAME_LCHFLAGS
#define RUMP_SYS_RENAME_LCHFLAGS rump___sysimpl_lchflags
#endif

#ifndef RUMP_SYS_RENAME_LCHMOD
#define RUMP_SYS_RENAME_LCHMOD rump___sysimpl_lchmod
#endif

#ifndef RUMP_SYS_RENAME_LCHOWN
#define RUMP_SYS_RENAME_LCHOWN rump___sysimpl_lchown
#endif

#ifndef RUMP_SYS_RENAME_LGETXATTR
#define RUMP_SYS_RENAME_LGETXATTR rump___sysimpl_lgetxattr
#endif

#ifndef RUMP_SYS_RENAME_LINK
#define RUMP_SYS_RENAME_LINK rump___sysimpl_link
#endif

#ifndef RUMP_SYS_RENAME_LINKAT
#define RUMP_SYS_RENAME_LINKAT rump___sysimpl_linkat
#endif

#ifndef RUMP_SYS_RENAME_LIO_LISTIO
#define RUMP_SYS_RENAME_LIO_LISTIO rump___sysimpl_lio_listio
#endif

#ifndef RUMP_SYS_RENAME_LISTEN
#define RUMP_SYS_RENAME_LISTEN rump___sysimpl_listen
#endif

#ifndef RUMP_SYS_RENAME_LISTXATTR
#define RUMP_SYS_RENAME_LISTXATTR rump___sysimpl_listxattr
#endif

#ifndef RUMP_SYS_RENAME_LLISTXATTR
#define RUMP_SYS_RENAME_LLISTXATTR rump___sysimpl_llistxattr
#endif

#ifndef RUMP_SYS_RENAME_LPATHCONF
#define RUMP_SYS_RENAME_LPATHCONF rump___sysimpl_lpathconf
#endif

#ifndef RUMP_SYS_RENAME_LREMOVEXATTR
#define RUMP_SYS_RENAME_LREMOVEXATTR rump___sysimpl_lremovexattr
#endif

#ifndef RUMP_SYS_RENAME_LSEEK
#define RUMP_SYS_RENAME_LSEEK rump___sysimpl_lseek
#endif

#ifndef RUMP_SYS_RENAME_LSETXATTR
#define RUMP_SYS_RENAME_LSETXATTR rump___sysimpl_lsetxattr
#endif

#ifndef RUMP_SYS_RENAME_LSTAT
#define RUMP_SYS_RENAME_LSTAT rump___sysimpl_lstat50
#endif

#ifndef RUMP_SYS_RENAME_LUTIMES
#define RUMP_SYS_RENAME_LUTIMES rump___sysimpl_lutimes50
#endif

#ifndef RUMP_SYS_RENAME_MKDIR
#define RUMP_SYS_RENAME_MKDIR rump___sysimpl_mkdir
#endif

#ifndef RUMP_SYS_RENAME_MKDIRAT
#define RUMP_SYS_RENAME_MKDIRAT rump___sysimpl_mkdirat
#endif

#ifndef RUMP_SYS_RENAME_MKFIFO
#define RUMP_SYS_RENAME_MKFIFO rump___sysimpl_mkfifo
#endif

#ifndef RUMP_SYS_RENAME_MKFIFOAT
#define RUMP_SYS_RENAME_MKFIFOAT rump___sysimpl_mkfifoat
#endif

#ifndef RUMP_SYS_RENAME_MKNOD
#define RUMP_SYS_RENAME_MKNOD rump___sysimpl_mknod50
#endif

#ifndef RUMP_SYS_RENAME_MKNODAT
#define RUMP_SYS_RENAME_MKNODAT rump___sysimpl_mknodat
#endif

#ifndef RUMP_SYS_RENAME_MODCTL
#define RUMP_SYS_RENAME_MODCTL rump___sysimpl_modctl
#endif

#ifndef RUMP_SYS_RENAME_MOUNT
#define RUMP_SYS_RENAME_MOUNT rump___sysimpl_mount50
#endif

#ifndef RUMP_SYS_RENAME_NANOSLEEP
#define RUMP_SYS_RENAME_NANOSLEEP rump___sysimpl_nanosleep50
#endif

#ifndef RUMP_SYS_RENAME_NFSSVC
#define RUMP_SYS_RENAME_NFSSVC rump___sysimpl_nfssvc
#endif

#ifndef RUMP_SYS_RENAME_OPEN
#define RUMP_SYS_RENAME_OPEN rump___sysimpl_open
#endif

#ifndef RUMP_SYS_RENAME_OPENAT
#define RUMP_SYS_RENAME_OPENAT rump___sysimpl_openat
#endif

#ifndef RUMP_SYS_RENAME_PACCEPT
#define RUMP_SYS_RENAME_PACCEPT rump___sysimpl_paccept
#endif

#ifndef RUMP_SYS_RENAME_PATHCONF
#define RUMP_SYS_RENAME_PATHCONF rump___sysimpl_pathconf
#endif

#ifndef RUMP_SYS_RENAME_PIPE2
#define RUMP_SYS_RENAME_PIPE2 rump___sysimpl_pipe2
#endif

#ifndef RUMP_SYS_RENAME_POLL
#define RUMP_SYS_RENAME_POLL rump___sysimpl_poll
#endif

#ifndef RUMP_SYS_RENAME_POLLTS
#define RUMP_SYS_RENAME_POLLTS rump___sysimpl_pollts50
#endif

#ifndef RUMP_SYS_RENAME_POSIX_FADVISE
#define RUMP_SYS_RENAME_POSIX_FADVISE rump___sysimpl_posix_fadvise50
#endif

#ifndef RUMP_SYS_RENAME_POSIX_FALLOCATE
#define RUMP_SYS_RENAME_POSIX_FALLOCATE rump___sysimpl_posix_fallocate
#endif

#ifndef RUMP_SYS_RENAME_PREAD
#define RUMP_SYS_RENAME_PREAD rump___sysimpl_pread
#endif

#ifndef RUMP_SYS_RENAME_PREADV
#define RUMP_SYS_RENAME_PREADV rump___sysimpl_preadv
#endif

#ifndef RUMP_SYS_RENAME_PSELECT
#define RUMP_SYS_RENAME_PSELECT rump___sysimpl_pselect50
#endif

#ifndef RUMP_SYS_RENAME_PWRITE
#define RUMP_SYS_RENAME_PWRITE rump___sysimpl_pwrite
#endif

#ifndef RUMP_SYS_RENAME_PWRITEV
#define RUMP_SYS_RENAME_PWRITEV rump___sysimpl_pwritev
#endif

#ifndef RUMP_SYS_RENAME_READ
#define RUMP_SYS_RENAME_READ rump___sysimpl_read
#endif

#ifndef RUMP_SYS_RENAME_READLINK
#define RUMP_SYS_RENAME_READLINK rump___sysimpl_readlink
#endif

#ifndef RUMP_SYS_RENAME_READLINKAT
#define RUMP_SYS_RENAME_READLINKAT rump___sysimpl_readlinkat
#endif

#ifndef RUMP_SYS_RENAME_READV
#define RUMP_SYS_RENAME_READV rump___sysimpl_readv
#endif

#ifndef RUMP_SYS_RENAME_REBOOT
#define RUMP_SYS_RENAME_REBOOT rump___sysimpl_reboot
#endif

#ifndef RUMP_SYS_RENAME_RECVFROM
#define RUMP_SYS_RENAME_RECVFROM rump___sysimpl_recvfrom
#endif

#ifndef RUMP_SYS_RENAME_RECVMMSG
#define RUMP_SYS_RENAME_RECVMMSG rump___sysimpl_recvmmsg
#endif

#ifndef RUMP_SYS_RENAME_RECVMSG
#define RUMP_SYS_RENAME_RECVMSG rump___sysimpl_recvmsg
#endif

#ifndef RUMP_SYS_RENAME_REMOVEXATTR
#define RUMP_SYS_RENAME_REMOVEXATTR rump___sysimpl_removexattr
#endif

#ifndef RUMP_SYS_RENAME_RENAME
#define RUMP_SYS_RENAME_RENAME rump___sysimpl_rename
#endif

#ifndef RUMP_SYS_RENAME_RENAMEAT
#define RUMP_SYS_RENAME_RENAMEAT rump___sysimpl_renameat
#endif

#ifndef RUMP_SYS_RENAME_REVOKE
#define RUMP_SYS_RENAME_REVOKE rump___sysimpl_revoke
#endif

#ifndef RUMP_SYS_RENAME_RMDIR
#define RUMP_SYS_RENAME_RMDIR rump___sysimpl_rmdir
#endif

#ifndef RUMP_SYS_RENAME_SELECT
#define RUMP_SYS_RENAME_SELECT rump___sysimpl_select50
#endif

#ifndef RUMP_SYS_RENAME_SENDMMSG
#define RUMP_SYS_RENAME_SENDMMSG rump___sysimpl_sendmmsg
#endif

#ifndef RUMP_SYS_RENAME_SENDMSG
#define RUMP_SYS_RENAME_SENDMSG rump___sysimpl_sendmsg
#endif

#ifndef RUMP_SYS_RENAME_SENDTO
#define RUMP_SYS_RENAME_SENDTO rump___sysimpl_sendto
#endif

#ifndef RUMP_SYS_RENAME_SETEGID
#define RUMP_SYS_RENAME_SETEGID rump___sysimpl_setegid
#endif

#ifndef RUMP_SYS_RENAME_SETEUID
#define RUMP_SYS_RENAME_SETEUID rump___sysimpl_seteuid
#endif

#ifndef RUMP_SYS_RENAME_SETGID
#define RUMP_SYS_RENAME_SETGID rump___sysimpl_setgid
#endif

#ifndef RUMP_SYS_RENAME_SETGROUPS
#define RUMP_SYS_RENAME_SETGROUPS rump___sysimpl_setgroups
#endif

#ifndef RUMP_SYS_RENAME_SETITIMER
#define RUMP_SYS_RENAME_SETITIMER rump___sysimpl_setitimer50
#endif

#ifndef RUMP_SYS_RENAME_SETPGID
#define RUMP_SYS_RENAME_SETPGID rump___sysimpl_setpgid
#endif

#ifndef RUMP_SYS_RENAME_SETREGID
#define RUMP_SYS_RENAME_SETREGID rump___sysimpl_setregid
#endif

#ifndef RUMP_SYS_RENAME_SETREUID
#define RUMP_SYS_RENAME_SETREUID rump___sysimpl_setreuid
#endif

#ifndef RUMP_SYS_RENAME_SETRLIMIT
#define RUMP_SYS_RENAME_SETRLIMIT rump___sysimpl_setrlimit
#endif

#ifndef RUMP_SYS_RENAME_SETSID
#define RUMP_SYS_RENAME_SETSID rump___sysimpl_setsid
#endif

#ifndef RUMP_SYS_RENAME_SETSOCKOPT
#define RUMP_SYS_RENAME_SETSOCKOPT rump___sysimpl_setsockopt
#endif

#ifndef RUMP_SYS_RENAME_SETTIMEOFDAY
#define RUMP_SYS_RENAME_SETTIMEOFDAY rump___sysimpl_settimeofday50
#endif

#ifndef RUMP_SYS_RENAME_SETUID
#define RUMP_SYS_RENAME_SETUID rump___sysimpl_setuid
#endif

#ifndef RUMP_SYS_RENAME_SETXATTR
#define RUMP_SYS_RENAME_SETXATTR rump___sysimpl_setxattr
#endif

#ifndef RUMP_SYS_RENAME_SHUTDOWN
#define RUMP_SYS_RENAME_SHUTDOWN rump___sysimpl_shutdown
#endif

#ifndef RUMP_SYS_RENAME_SOCKET
#define RUMP_SYS_RENAME_SOCKET rump___sysimpl_socket30
#endif

#ifndef RUMP_SYS_RENAME_SOCKETPAIR
#define RUMP_SYS_RENAME_SOCKETPAIR rump___sysimpl_socketpair
#endif

#ifndef RUMP_SYS_RENAME_STAT
#define RUMP_SYS_RENAME_STAT rump___sysimpl_stat50
#endif

#ifndef RUMP_SYS_RENAME_STATVFS1
#define RUMP_SYS_RENAME_STATVFS1 rump___sysimpl_statvfs190
#endif

#ifndef RUMP_SYS_RENAME_SYMLINK
#define RUMP_SYS_RENAME_SYMLINK rump___sysimpl_symlink
#endif

#ifndef RUMP_SYS_RENAME_SYMLINKAT
#define RUMP_SYS_RENAME_SYMLINKAT rump___sysimpl_symlinkat
#endif

#ifndef RUMP_SYS_RENAME_SYNC
#define RUMP_SYS_RENAME_SYNC rump___sysimpl_sync
#endif

#ifndef RUMP_SYS_RENAME_TIMER_CREATE
#define RUMP_SYS_RENAME_TIMER_CREATE rump___sysimpl_timer_create
#endif

#ifndef RUMP_SYS_RENAME_TIMER_DELETE
#define RUMP_SYS_RENAME_TIMER_DELETE rump___sysimpl_timer_delete
#endif

#ifndef RUMP_SYS_RENAME_TIMER_GETOVERRUN
#define RUMP_SYS_RENAME_TIMER_GETOVERRUN rump___sysimpl_timer_getoverrun
#endif

#ifndef RUMP_SYS_RENAME_TIMER_GETTIME
#define RUMP_SYS_RENAME_TIMER_GETTIME rump___sysimpl_timer_gettime50
#endif

#ifndef RUMP_SYS_RENAME_TIMER_SETTIME
#define RUMP_SYS_RENAME_TIMER_SETTIME rump___sysimpl_timer_settime50
#endif

#ifndef RUMP_SYS_RENAME_TRUNCATE
#define RUMP_SYS_RENAME_TRUNCATE rump___sysimpl_truncate
#endif

#ifndef RUMP_SYS_RENAME_UMASK
#define RUMP_SYS_RENAME_UMASK rump___sysimpl_umask
#endif

#ifndef RUMP_SYS_RENAME_UNLINK
#define RUMP_SYS_RENAME_UNLINK rump___sysimpl_unlink
#endif

#ifndef RUMP_SYS_RENAME_UNLINKAT
#define RUMP_SYS_RENAME_UNLINKAT rump___sysimpl_unlinkat
#endif

#ifndef RUMP_SYS_RENAME_UNMOUNT
#define RUMP_SYS_RENAME_UNMOUNT rump___sysimpl_unmount
#endif

#ifndef RUMP_SYS_RENAME_UTIMENSAT
#define RUMP_SYS_RENAME_UTIMENSAT rump___sysimpl_utimensat
#endif

#ifndef RUMP_SYS_RENAME_UTIMES
#define RUMP_SYS_RENAME_UTIMES rump___sysimpl_utimes50
#endif

#ifndef RUMP_SYS_RENAME_UTRACE
#define RUMP_SYS_RENAME_UTRACE rump___sysimpl_utrace
#endif

#ifndef RUMP_SYS_RENAME_WRITE
#define RUMP_SYS_RENAME_WRITE rump___sysimpl_write
#endif

#ifndef RUMP_SYS_RENAME_WRITEV
#define RUMP_SYS_RENAME_WRITEV rump___sysimpl_writev
#endif

struct msghdr;
struct sockaddr;
struct timeval;
struct iovec;
struct rlimit;
struct pollfd;
struct sigevent;
struct timespec;
struct kevent;
struct stat;
struct aiocb;
struct itimerval;
struct itimerspec;
struct quotactl_args;
struct mmsghdr;
struct statvfs;

ssize_t rump_sys_read(int, void *, size_t) __RENAME(RUMP_SYS_RENAME_READ);
ssize_t rump_sys_write(int, const void *, size_t) __RENAME(RUMP_SYS_RENAME_WRITE);
int rump_sys_open(const char *, int, ...) __RENAME(RUMP_SYS_RENAME_OPEN);
int rump_sys_close(int) __RENAME(RUMP_SYS_RENAME_CLOSE);
int rump_sys_link(const char *, const char *) __RENAME(RUMP_SYS_RENAME_LINK);
int rump_sys_unlink(const char *) __RENAME(RUMP_SYS_RENAME_UNLINK);
int rump_sys_chdir(const char *) __RENAME(RUMP_SYS_RENAME_CHDIR);
int rump_sys_fchdir(int) __RENAME(RUMP_SYS_RENAME_FCHDIR);
int rump_sys_chmod(const char *, mode_t) __RENAME(RUMP_SYS_RENAME_CHMOD);
int rump_sys_chown(const char *, uid_t, gid_t) __RENAME(RUMP_SYS_RENAME_CHOWN);
pid_t rump_sys_getpid(void) __RENAME(RUMP_SYS_RENAME_GETPID);
int rump_sys_unmount(const char *, int) __RENAME(RUMP_SYS_RENAME_UNMOUNT);
int rump_sys_setuid(uid_t) __RENAME(RUMP_SYS_RENAME_SETUID);
uid_t rump_sys_getuid(void) __RENAME(RUMP_SYS_RENAME_GETUID);
uid_t rump_sys_geteuid(void) __RENAME(RUMP_SYS_RENAME_GETEUID);
ssize_t rump_sys_recvmsg(int, struct msghdr *, int) __RENAME(RUMP_SYS_RENAME_RECVMSG);
ssize_t rump_sys_sendmsg(int, const struct msghdr *, int) __RENAME(RUMP_SYS_RENAME_SENDMSG);
ssize_t rump_sys_recvfrom(int, void *, size_t, int, struct sockaddr *, socklen_t *) __RENAME(RUMP_SYS_RENAME_RECVFROM);
int rump_sys_accept(int, struct sockaddr *, socklen_t *) __RENAME(RUMP_SYS_RENAME_ACCEPT);
int rump_sys_getpeername(int, struct sockaddr *, socklen_t *) __RENAME(RUMP_SYS_RENAME_GETPEERNAME);
int rump_sys_getsockname(int, struct sockaddr *, socklen_t *) __RENAME(RUMP_SYS_RENAME_GETSOCKNAME);
int rump_sys_access(const char *, int) __RENAME(RUMP_SYS_RENAME_ACCESS);
int rump_sys_chflags(const char *, u_long) __RENAME(RUMP_SYS_RENAME_CHFLAGS);
int rump_sys_fchflags(int, u_long) __RENAME(RUMP_SYS_RENAME_FCHFLAGS);
void rump_sys_sync(void) __RENAME(RUMP_SYS_RENAME_SYNC);
pid_t rump_sys_getppid(void) __RENAME(RUMP_SYS_RENAME_GETPPID);
int rump_sys_dup(int) __RENAME(RUMP_SYS_RENAME_DUP);
gid_t rump_sys_getegid(void) __RENAME(RUMP_SYS_RENAME_GETEGID);
int rump_sys_ktrace(const char *, int, int, pid_t) __RENAME(RUMP_SYS_RENAME_KTRACE);
gid_t rump_sys_getgid(void) __RENAME(RUMP_SYS_RENAME_GETGID);
int rump_sys___getlogin(char *, size_t) __RENAME(RUMP_SYS_RENAME___GETLOGIN);
int rump_sys___setlogin(const char *) __RENAME(RUMP_SYS_RENAME___SETLOGIN);
int rump_sys_ioctl(int, u_long, ...) __RENAME(RUMP_SYS_RENAME_IOCTL);
int rump_sys_revoke(const char *) __RENAME(RUMP_SYS_RENAME_REVOKE);
int rump_sys_symlink(const char *, const char *) __RENAME(RUMP_SYS_RENAME_SYMLINK);
ssize_t rump_sys_readlink(const char *, char *, size_t) __RENAME(RUMP_SYS_RENAME_READLINK);
mode_t rump_sys_umask(mode_t) __RENAME(RUMP_SYS_RENAME_UMASK);
int rump_sys_chroot(const char *) __RENAME(RUMP_SYS_RENAME_CHROOT);
int rump_sys_getgroups(int, gid_t *) __RENAME(RUMP_SYS_RENAME_GETGROUPS);
int rump_sys_setgroups(int, const gid_t *) __RENAME(RUMP_SYS_RENAME_SETGROUPS);
int rump_sys_getpgrp(void) __RENAME(RUMP_SYS_RENAME_GETPGRP);
int rump_sys_setpgid(pid_t, pid_t) __RENAME(RUMP_SYS_RENAME_SETPGID);
int rump_sys_dup2(int, int) __RENAME(RUMP_SYS_RENAME_DUP2);
ssize_t rump_sys_getrandom(void *, size_t, unsigned int) __RENAME(RUMP_SYS_RENAME_GETRANDOM);
int rump_sys_fcntl(int, int, ...) __RENAME(RUMP_SYS_RENAME_FCNTL);
int rump_sys_select(int, fd_set *, fd_set *, fd_set *, struct timeval *) __RENAME(RUMP_SYS_RENAME_SELECT);
int rump_sys_fsync(int) __RENAME(RUMP_SYS_RENAME_FSYNC);
int rump_sys_connect(int, const struct sockaddr *, socklen_t) __RENAME(RUMP_SYS_RENAME_CONNECT);
int rump_sys_bind(int, const struct sockaddr *, socklen_t) __RENAME(RUMP_SYS_RENAME_BIND);
int rump_sys_setsockopt(int, int, int, const void *, socklen_t) __RENAME(RUMP_SYS_RENAME_SETSOCKOPT);
int rump_sys_listen(int, int) __RENAME(RUMP_SYS_RENAME_LISTEN);
int rump_sys_getsockopt(int, int, int, void *, socklen_t *) __RENAME(RUMP_SYS_RENAME_GETSOCKOPT);
ssize_t rump_sys_readv(int, const struct iovec *, int) __RENAME(RUMP_SYS_RENAME_READV);
ssize_t rump_sys_writev(int, const struct iovec *, int) __RENAME(RUMP_SYS_RENAME_WRITEV);
int rump_sys_fchown(int, uid_t, gid_t) __RENAME(RUMP_SYS_RENAME_FCHOWN);
int rump_sys_fchmod(int, mode_t) __RENAME(RUMP_SYS_RENAME_FCHMOD);
int rump_sys_setreuid(uid_t, uid_t) __RENAME(RUMP_SYS_RENAME_SETREUID);
int rump_sys_setregid(gid_t, gid_t) __RENAME(RUMP_SYS_RENAME_SETREGID);
int rump_sys_rename(const char *, const char *) __RENAME(RUMP_SYS_RENAME_RENAME);
int rump_sys_flock(int, int) __RENAME(RUMP_SYS_RENAME_FLOCK);
int rump_sys_mkfifo(const char *, mode_t) __RENAME(RUMP_SYS_RENAME_MKFIFO);
ssize_t rump_sys_sendto(int, const void *, size_t, int, const struct sockaddr *, socklen_t) __RENAME(RUMP_SYS_RENAME_SENDTO);
int rump_sys_shutdown(int, int) __RENAME(RUMP_SYS_RENAME_SHUTDOWN);
int rump_sys_socketpair(int, int, int, int *) __RENAME(RUMP_SYS_RENAME_SOCKETPAIR);
int rump_sys_mkdir(const char *, mode_t) __RENAME(RUMP_SYS_RENAME_MKDIR);
int rump_sys_rmdir(const char *) __RENAME(RUMP_SYS_RENAME_RMDIR);
int rump_sys_utimes(const char *, const struct timeval *) __RENAME(RUMP_SYS_RENAME_UTIMES);
int rump_sys_setsid(void) __RENAME(RUMP_SYS_RENAME_SETSID);
int rump_sys_nfssvc(int, void *) __RENAME(RUMP_SYS_RENAME_NFSSVC);
ssize_t rump_sys_pread(int, void *, size_t, off_t) __RENAME(RUMP_SYS_RENAME_PREAD);
ssize_t rump_sys_pwrite(int, const void *, size_t, off_t) __RENAME(RUMP_SYS_RENAME_PWRITE);
int rump_sys_setgid(gid_t) __RENAME(RUMP_SYS_RENAME_SETGID);
int rump_sys_setegid(gid_t) __RENAME(RUMP_SYS_RENAME_SETEGID);
int rump_sys_seteuid(uid_t) __RENAME(RUMP_SYS_RENAME_SETEUID);
long rump_sys_pathconf(const char *, int) __RENAME(RUMP_SYS_RENAME_PATHCONF);
long rump_sys_fpathconf(int, int) __RENAME(RUMP_SYS_RENAME_FPATHCONF);
int rump_sys_getsockopt2(int, int, int, void *, socklen_t *) __RENAME(RUMP_SYS_RENAME_GETSOCKOPT2);
int rump_sys_getrlimit(int, struct rlimit *) __RENAME(RUMP_SYS_RENAME_GETRLIMIT);
int rump_sys_setrlimit(int, const struct rlimit *) __RENAME(RUMP_SYS_RENAME_SETRLIMIT);
off_t rump_sys_lseek(int, off_t, int) __RENAME(RUMP_SYS_RENAME_LSEEK);
int rump_sys_truncate(const char *, off_t) __RENAME(RUMP_SYS_RENAME_TRUNCATE);
int rump_sys_ftruncate(int, off_t) __RENAME(RUMP_SYS_RENAME_FTRUNCATE);
int rump_sys___sysctl(const int *, u_int, void *, size_t *, const void *, size_t) __RENAME(RUMP_SYS_RENAME___SYSCTL);
int rump_sys_futimes(int, const struct timeval *) __RENAME(RUMP_SYS_RENAME_FUTIMES);
pid_t rump_sys_getpgid(pid_t) __RENAME(RUMP_SYS_RENAME_GETPGID);
int rump_sys_reboot(int, char *) __RENAME(RUMP_SYS_RENAME_REBOOT);
int rump_sys_poll(struct pollfd *, u_int, int) __RENAME(RUMP_SYS_RENAME_POLL);
int rump_sys_timer_create(clockid_t, struct sigevent *, timer_t *) __RENAME(RUMP_SYS_RENAME_TIMER_CREATE);
int rump_sys_timer_delete(timer_t) __RENAME(RUMP_SYS_RENAME_TIMER_DELETE);
int rump_sys_timer_getoverrun(timer_t) __RENAME(RUMP_SYS_RENAME_TIMER_GETOVERRUN);
int rump_sys_fdatasync(int) __RENAME(RUMP_SYS_RENAME_FDATASYNC);
int rump_sys_modctl(int, void *) __RENAME(RUMP_SYS_RENAME_MODCTL);
int rump_sys__ksem_init(unsigned int, intptr_t *) __RENAME(RUMP_SYS_RENAME__KSEM_INIT);
int rump_sys__ksem_open(const char *, int, mode_t, unsigned int, intptr_t *) __RENAME(RUMP_SYS_RENAME__KSEM_OPEN);
int rump_sys__ksem_unlink(const char *) __RENAME(RUMP_SYS_RENAME__KSEM_UNLINK);
int rump_sys__ksem_close(intptr_t) __RENAME(RUMP_SYS_RENAME__KSEM_CLOSE);
int rump_sys__ksem_post(intptr_t) __RENAME(RUMP_SYS_RENAME__KSEM_POST);
int rump_sys__ksem_wait(intptr_t) __RENAME(RUMP_SYS_RENAME__KSEM_WAIT);
int rump_sys__ksem_trywait(intptr_t) __RENAME(RUMP_SYS_RENAME__KSEM_TRYWAIT);
int rump_sys__ksem_getvalue(intptr_t, unsigned int *) __RENAME(RUMP_SYS_RENAME__KSEM_GETVALUE);
int rump_sys__ksem_destroy(intptr_t) __RENAME(RUMP_SYS_RENAME__KSEM_DESTROY);
int rump_sys__ksem_timedwait(intptr_t, const struct timespec *) __RENAME(RUMP_SYS_RENAME__KSEM_TIMEDWAIT);
int rump_sys___posix_rename(const char *, const char *) __RENAME(RUMP_SYS_RENAME___POSIX_RENAME);
int rump_sys_lchmod(const char *, mode_t) __RENAME(RUMP_SYS_RENAME_LCHMOD);
int rump_sys_lchown(const char *, uid_t, gid_t) __RENAME(RUMP_SYS_RENAME_LCHOWN);
int rump_sys_lutimes(const char *, const struct timeval *) __RENAME(RUMP_SYS_RENAME_LUTIMES);
int rump_sys___posix_chown(const char *, uid_t, gid_t) __RENAME(RUMP_SYS_RENAME___POSIX_CHOWN);
int rump_sys___posix_fchown(int, uid_t, gid_t) __RENAME(RUMP_SYS_RENAME___POSIX_FCHOWN);
int rump_sys___posix_lchown(const char *, uid_t, gid_t) __RENAME(RUMP_SYS_RENAME___POSIX_LCHOWN);
pid_t rump_sys_getsid(pid_t) __RENAME(RUMP_SYS_RENAME_GETSID);
int rump_sys_fktrace(int, int, int, pid_t) __RENAME(RUMP_SYS_RENAME_FKTRACE);
ssize_t rump_sys_preadv(int, const struct iovec *, int, off_t) __RENAME(RUMP_SYS_RENAME_PREADV);
ssize_t rump_sys_pwritev(int, const struct iovec *, int, off_t) __RENAME(RUMP_SYS_RENAME_PWRITEV);
int rump_sys___getcwd(char *, size_t) __RENAME(RUMP_SYS_RENAME___GETCWD);
int rump_sys_fchroot(int) __RENAME(RUMP_SYS_RENAME_FCHROOT);
int rump_sys_lchflags(const char *, u_long) __RENAME(RUMP_SYS_RENAME_LCHFLAGS);
int rump_sys_issetugid(void) __RENAME(RUMP_SYS_RENAME_ISSETUGID);
int rump_sys_utrace(const char *, void *, size_t) __RENAME(RUMP_SYS_RENAME_UTRACE);
int rump_sys_kqueue(void) __RENAME(RUMP_SYS_RENAME_KQUEUE);
int rump_sys_kevent(int, const struct kevent *, size_t, struct kevent *, size_t, const struct timespec *) __RENAME(RUMP_SYS_RENAME_KEVENT);
int rump_sys_fsync_range(int, int, off_t, off_t) __RENAME(RUMP_SYS_RENAME_FSYNC_RANGE);
int rump_sys_extattrctl(const char *, int, const char *, int, const char *) __RENAME(RUMP_SYS_RENAME_EXTATTRCTL);
int rump_sys_extattr_set_file(const char *, int, const char *, const void *, size_t) __RENAME(RUMP_SYS_RENAME_EXTATTR_SET_FILE);
ssize_t rump_sys_extattr_get_file(const char *, int, const char *, void *, size_t) __RENAME(RUMP_SYS_RENAME_EXTATTR_GET_FILE);
int rump_sys_extattr_delete_file(const char *, int, const char *) __RENAME(RUMP_SYS_RENAME_EXTATTR_DELETE_FILE);
int rump_sys_extattr_set_fd(int, int, const char *, const void *, size_t) __RENAME(RUMP_SYS_RENAME_EXTATTR_SET_FD);
ssize_t rump_sys_extattr_get_fd(int, int, const char *, void *, size_t) __RENAME(RUMP_SYS_RENAME_EXTATTR_GET_FD);
int rump_sys_extattr_delete_fd(int, int, const char *) __RENAME(RUMP_SYS_RENAME_EXTATTR_DELETE_FD);
int rump_sys_extattr_set_link(const char *, int, const char *, const void *, size_t) __RENAME(RUMP_SYS_RENAME_EXTATTR_SET_LINK);
ssize_t rump_sys_extattr_get_link(const char *, int, const char *, void *, size_t) __RENAME(RUMP_SYS_RENAME_EXTATTR_GET_LINK);
int rump_sys_extattr_delete_link(const char *, int, const char *) __RENAME(RUMP_SYS_RENAME_EXTATTR_DELETE_LINK);
ssize_t rump_sys_extattr_list_fd(int, int, void *, size_t) __RENAME(RUMP_SYS_RENAME_EXTATTR_LIST_FD);
ssize_t rump_sys_extattr_list_file(const char *, int, void *, size_t) __RENAME(RUMP_SYS_RENAME_EXTATTR_LIST_FILE);
ssize_t rump_sys_extattr_list_link(const char *, int, void *, size_t) __RENAME(RUMP_SYS_RENAME_EXTATTR_LIST_LINK);
int rump_sys_pselect(int, fd_set *, fd_set *, fd_set *, const struct timespec *, const sigset_t *) __RENAME(RUMP_SYS_RENAME_PSELECT);
int rump_sys_pollts(struct pollfd *, u_int, const struct timespec *, const sigset_t *) __RENAME(RUMP_SYS_RENAME_POLLTS);
int rump_sys_setxattr(const char *, const char *, const void *, size_t, int) __RENAME(RUMP_SYS_RENAME_SETXATTR);
int rump_sys_lsetxattr(const char *, const char *, const void *, size_t, int) __RENAME(RUMP_SYS_RENAME_LSETXATTR);
int rump_sys_fsetxattr(int, const char *, const void *, size_t, int) __RENAME(RUMP_SYS_RENAME_FSETXATTR);
int rump_sys_getxattr(const char *, const char *, void *, size_t) __RENAME(RUMP_SYS_RENAME_GETXATTR);
int rump_sys_lgetxattr(const char *, const char *, void *, size_t) __RENAME(RUMP_SYS_RENAME_LGETXATTR);
int rump_sys_fgetxattr(int, const char *, void *, size_t) __RENAME(RUMP_SYS_RENAME_FGETXATTR);
int rump_sys_listxattr(const char *, char *, size_t) __RENAME(RUMP_SYS_RENAME_LISTXATTR);
int rump_sys_llistxattr(const char *, char *, size_t) __RENAME(RUMP_SYS_RENAME_LLISTXATTR);
int rump_sys_flistxattr(int, char *, size_t) __RENAME(RUMP_SYS_RENAME_FLISTXATTR);
int rump_sys_removexattr(const char *, const char *) __RENAME(RUMP_SYS_RENAME_REMOVEXATTR);
int rump_sys_lremovexattr(const char *, const char *) __RENAME(RUMP_SYS_RENAME_LREMOVEXATTR);
int rump_sys_fremovexattr(int, const char *) __RENAME(RUMP_SYS_RENAME_FREMOVEXATTR);
int rump_sys_stat(const char *, struct stat *) __RENAME(RUMP_SYS_RENAME_STAT);
int rump_sys_fstat(int, struct stat *) __RENAME(RUMP_SYS_RENAME_FSTAT);
int rump_sys_lstat(const char *, struct stat *) __RENAME(RUMP_SYS_RENAME_LSTAT);
int rump_sys_getdents(int, char *, size_t) __RENAME(RUMP_SYS_RENAME_GETDENTS);
int rump_sys_socket(int, int, int) __RENAME(RUMP_SYS_RENAME_SOCKET);
int rump_sys_getfh(const char *, void *, size_t *) __RENAME(RUMP_SYS_RENAME_GETFH);
int rump_sys_fhopen(const void *, size_t, int) __RENAME(RUMP_SYS_RENAME_FHOPEN);
int rump_sys_fhstat(const void *, size_t, struct stat *) __RENAME(RUMP_SYS_RENAME_FHSTAT);
int rump_sys_aio_cancel(int, struct aiocb *) __RENAME(RUMP_SYS_RENAME_AIO_CANCEL);
int rump_sys_aio_error(const struct aiocb *) __RENAME(RUMP_SYS_RENAME_AIO_ERROR);
int rump_sys_aio_fsync(int, struct aiocb *) __RENAME(RUMP_SYS_RENAME_AIO_FSYNC);
int rump_sys_aio_read(struct aiocb *) __RENAME(RUMP_SYS_RENAME_AIO_READ);
int rump_sys_aio_return(struct aiocb *) __RENAME(RUMP_SYS_RENAME_AIO_RETURN);
int rump_sys_aio_write(struct aiocb *) __RENAME(RUMP_SYS_RENAME_AIO_WRITE);
int rump_sys_lio_listio(int, struct aiocb *const *, int, struct sigevent *) __RENAME(RUMP_SYS_RENAME_LIO_LISTIO);
int rump_sys_mount(const char *, const char *, int, void *, size_t) __RENAME(RUMP_SYS_RENAME_MOUNT);
int rump_sys_posix_fadvise(int, off_t, off_t, int) __RENAME(RUMP_SYS_RENAME_POSIX_FADVISE);
int rump_sys_gettimeofday(struct timeval *, void *) __RENAME(RUMP_SYS_RENAME_GETTIMEOFDAY);
int rump_sys_settimeofday(const struct timeval *, const void *) __RENAME(RUMP_SYS_RENAME_SETTIMEOFDAY);
int rump_sys_adjtime(const struct timeval *, struct timeval *) __RENAME(RUMP_SYS_RENAME_ADJTIME);
int rump_sys_setitimer(int, const struct itimerval *, struct itimerval *) __RENAME(RUMP_SYS_RENAME_SETITIMER);
int rump_sys_getitimer(int, struct itimerval *) __RENAME(RUMP_SYS_RENAME_GETITIMER);
int rump_sys_clock_gettime(clockid_t, struct timespec *) __RENAME(RUMP_SYS_RENAME_CLOCK_GETTIME);
int rump_sys_clock_settime(clockid_t, const struct timespec *) __RENAME(RUMP_SYS_RENAME_CLOCK_SETTIME);
int rump_sys_clock_getres(clockid_t, struct timespec *) __RENAME(RUMP_SYS_RENAME_CLOCK_GETRES);
int rump_sys_nanosleep(const struct timespec *, struct timespec *) __RENAME(RUMP_SYS_RENAME_NANOSLEEP);
int rump_sys_aio_suspend(const struct aiocb *const *, int, const struct timespec *) __RENAME(RUMP_SYS_RENAME_AIO_SUSPEND);
int rump_sys_timer_settime(timer_t, int, const struct itimerspec *, struct itimerspec *) __RENAME(RUMP_SYS_RENAME_TIMER_SETTIME);
int rump_sys_timer_gettime(timer_t, struct itimerspec *) __RENAME(RUMP_SYS_RENAME_TIMER_GETTIME);
int rump_sys_mknod(const char *, mode_t, dev_t) __RENAME(RUMP_SYS_RENAME_MKNOD);
int rump_sys_pipe2(int *, int) __RENAME(RUMP_SYS_RENAME_PIPE2);
int rump_sys_dup3(int, int, int) __RENAME(RUMP_SYS_RENAME_DUP3);
int rump_sys_kqueue1(int) __RENAME(RUMP_SYS_RENAME_KQUEUE1);
int rump_sys_paccept(int, struct sockaddr *, socklen_t *, const sigset_t *, int) __RENAME(RUMP_SYS_RENAME_PACCEPT);
int rump_sys_linkat(int, const char *, int, const char *, int) __RENAME(RUMP_SYS_RENAME_LINKAT);
int rump_sys_renameat(int, const char *, int, const char *) __RENAME(RUMP_SYS_RENAME_RENAMEAT);
int rump_sys_mkfifoat(int, const char *, mode_t) __RENAME(RUMP_SYS_RENAME_MKFIFOAT);
int rump_sys_mknodat(int, const char *, mode_t, dev_t) __RENAME(RUMP_SYS_RENAME_MKNODAT);
int rump_sys_mkdirat(int, const char *, mode_t) __RENAME(RUMP_SYS_RENAME_MKDIRAT);
int rump_sys_faccessat(int, const char *, int, int) __RENAME(RUMP_SYS_RENAME_FACCESSAT);
int rump_sys_fchmodat(int, const char *, mode_t, int) __RENAME(RUMP_SYS_RENAME_FCHMODAT);
int rump_sys_fchownat(int, const char *, uid_t, gid_t, int) __RENAME(RUMP_SYS_RENAME_FCHOWNAT);
int rump_sys_fstatat(int, const char *, struct stat *, int) __RENAME(RUMP_SYS_RENAME_FSTATAT);
int rump_sys_utimensat(int, const char *, const struct timespec *, int) __RENAME(RUMP_SYS_RENAME_UTIMENSAT);
int rump_sys_openat(int, const char *, int, ...) __RENAME(RUMP_SYS_RENAME_OPENAT);
ssize_t rump_sys_readlinkat(int, const char *, char *, size_t) __RENAME(RUMP_SYS_RENAME_READLINKAT);
int rump_sys_symlinkat(const char *, int, const char *) __RENAME(RUMP_SYS_RENAME_SYMLINKAT);
int rump_sys_unlinkat(int, const char *, int) __RENAME(RUMP_SYS_RENAME_UNLINKAT);
int rump_sys_futimens(int, const struct timespec *) __RENAME(RUMP_SYS_RENAME_FUTIMENS);
int rump_sys___quotactl(const char *, struct quotactl_args *) __RENAME(RUMP_SYS_RENAME___QUOTACTL);
int rump_sys_recvmmsg(int, struct mmsghdr *, unsigned int, unsigned int, struct timespec *) __RENAME(RUMP_SYS_RENAME_RECVMMSG);
int rump_sys_sendmmsg(int, struct mmsghdr *, unsigned int, unsigned int) __RENAME(RUMP_SYS_RENAME_SENDMMSG);
int rump_sys_clock_nanosleep(clockid_t, int, const struct timespec *, struct timespec *) __RENAME(RUMP_SYS_RENAME_CLOCK_NANOSLEEP);
int rump_sys_posix_fallocate(int, off_t, off_t) __RENAME(RUMP_SYS_RENAME_POSIX_FALLOCATE);
int rump_sys_fdiscard(int, off_t, off_t) __RENAME(RUMP_SYS_RENAME_FDISCARD);
int rump_sys_clock_getcpuclockid2(idtype_t, id_t, clockid_t *) __RENAME(RUMP_SYS_RENAME_CLOCK_GETCPUCLOCKID2);
int rump_sys_getvfsstat(struct statvfs *, size_t, int) __RENAME(RUMP_SYS_RENAME_GETVFSSTAT);
int rump_sys_statvfs1(const char *, struct statvfs *, int) __RENAME(RUMP_SYS_RENAME_STATVFS1);
int rump_sys_fstatvfs1(int, struct statvfs *, int) __RENAME(RUMP_SYS_RENAME_FSTATVFS1);
int rump_sys_fhstatvfs1(const void *, size_t, struct statvfs *, int) __RENAME(RUMP_SYS_RENAME_FHSTATVFS1);
long rump_sys_lpathconf(const char *, int) __RENAME(RUMP_SYS_RENAME_LPATHCONF);
int rump_sys_pipe(int *);

#endif /* _RUMP_RUMP_SYSCALLS_H_ */