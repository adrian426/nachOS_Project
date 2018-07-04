# NOTE: this is a GNU Makefile.  You must use "gmake" rather than "make".
#
# Makefile for the virtual memory assignment
#    Defines set up assuming the virtual memory assignment is done before 
# 	the file system assignment. If not, use the "filesys first"  
#	defines below. 
#
# Also, if you want to simplify the translation so it assumes
# only linear page tables, don't define USE_TLB.
#
# Copyright (c) 1992 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

DEFINES = -DUSER_PROGRAM  -DFILESYS_NEEDED -DFILESYS_STUB -DVM -DUSE_TLB
INCPATH = -I../filesys -I../bin -I../vm -I../userprog -I../threads -I../machine
HFILES = $(THREAD_H) $(USERPROG_H) $(VM_H)
CFILES = $(THREAD_C) $(USERPROG_C) $(VM_C)
C_OFILES = $(THREAD_O) $(USERPROG_O) $(VM_O)

# if file sys done first!
# DEFINES = -DUSER_PROGRAM -DFILESYS_NEEDED -DFILESYS -DVM -DUSE_TLB
# INCPATH = -I../vm -I../bin -I../filesys -I../userprog -I../threads -I../machine
# HFILES = $(THREAD_H) $(USERPROG_H) $(FILESYS_H) $(VM_H)
# CFILES = $(THREAD_C) $(USERPROG_C) $(FILESYS_C) $(VM_C)
# C_OFILES = $(THREAD_O) $(USERPROG_O) $(FILESYS_O) $(VM_O)

include ../Makefile.common
include ../Makefile.dep
#-----------------------------------------------------------------
# DO NOT DELETE THIS LINE -- make depend uses it
# DEPENDENCIES MUST END AT END OF FILE
main.o: ../threads/main.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/utility.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../threads/system.h ../threads/thread.h \
 /usr/include/c++/7/list /usr/include/c++/7/bits/stl_algobase.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../threads/system.h \
 ../threads/thread.h /usr/include/c++/7/list \
 /usr/include/c++/7/bits/stl_algobase.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../threads/utility.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/abrirTabla.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../userprog/syscall.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h
=======
 /usr/include/sys/stat.h /usr/include/bits/stat.h /usr/include/fcntl.h \
 /usr/include/bits/fcntl.h /usr/include/bits/fcntl-linux.h \
 /usr/include/bits/types/struct_iovec.h /usr/include/linux/falloc.h \
 ../userprog/bitmap.h ../userprog/TablaSemaforos.h \
 /usr/include/c++/7/cstdio ../threads/synch.h
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
scheduler.o: ../threads/scheduler.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/scheduler.h ../threads/list.h \
 ../threads/utility.h ../machine/sysdep.h ../threads/copyright.h \
 /usr/include/c++/7/stdlib.h /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../threads/thread.h /usr/include/c++/7/list \
 /usr/include/c++/7/bits/stl_algobase.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../threads/thread.h \
 /usr/include/c++/7/list /usr/include/c++/7/bits/stl_algobase.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../machine/machine.h ../threads/utility.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/system.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../machine/timer.h ../userprog/abrirTabla.h ../userprog/bitmap.h \
<<<<<<< HEAD
 ../filesys/openfile.h ../userprog/syscall.h \
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
=======
 ../filesys/openfile.h ../userprog/syscall.h /usr/include/sys/stat.h \
 /usr/include/bits/stat.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
 /usr/include/bits/fcntl-linux.h /usr/include/bits/types/struct_iovec.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h
synch.o: ../threads/synch.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/synch.h ../threads/thread.h \
 ../threads/utility.h ../machine/sysdep.h ../threads/copyright.h \
 /usr/include/c++/7/stdlib.h /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h /usr/include/c++/7/list \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h /usr/include/c++/7/list \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/list.h ../threads/system.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/abrirTabla.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../userprog/syscall.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h
=======
 /usr/include/sys/stat.h /usr/include/bits/stat.h /usr/include/fcntl.h \
 /usr/include/bits/fcntl.h /usr/include/bits/fcntl-linux.h \
 /usr/include/bits/types/struct_iovec.h /usr/include/linux/falloc.h \
 ../userprog/bitmap.h ../userprog/TablaSemaforos.h \
 /usr/include/c++/7/cstdio ../threads/synch.h
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
system.o: ../threads/system.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/utility.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../threads/thread.h /usr/include/c++/7/list \
 /usr/include/c++/7/bits/stl_algobase.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../threads/thread.h \
 /usr/include/c++/7/list /usr/include/c++/7/bits/stl_algobase.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../threads/utility.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/abrirTabla.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../userprog/syscall.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h ../threads/preemptive.h
=======
 /usr/include/sys/stat.h /usr/include/bits/stat.h /usr/include/fcntl.h \
 /usr/include/bits/fcntl.h /usr/include/bits/fcntl-linux.h \
 /usr/include/bits/types/struct_iovec.h /usr/include/linux/falloc.h \
 ../userprog/bitmap.h ../userprog/TablaSemaforos.h \
 /usr/include/c++/7/cstdio ../threads/synch.h ../threads/preemptive.h
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
thread.o: ../threads/thread.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/thread.h ../threads/utility.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h /usr/include/c++/7/list \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h /usr/include/c++/7/list \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../threads/utility.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/switch.h ../threads/system.h ../threads/scheduler.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../machine/timer.h ../userprog/abrirTabla.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../userprog/syscall.h /usr/include/sys/stat.h \
 /usr/include/bits/stat.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
 /usr/include/bits/fcntl-linux.h /usr/include/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h
utility.o: ../threads/utility.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/utility.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h
threadtest.o: ../threads/threadtest.cc /usr/include/stdc-predef.h \
 /usr/include/unistd.h /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/wordsize.h /usr/include/bits/long-double.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h \
 /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/confname.h /usr/include/bits/getopt_posix.h \
 /usr/include/bits/getopt_core.h ../threads/copyright.h \
 ../threads/system.h ../threads/utility.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../threads/thread.h \
 /usr/include/c++/7/list /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../threads/utility.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
<<<<<<< HEAD
 ../threads/switch.h ../threads/system.h ../threads/scheduler.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../machine/timer.h ../userprog/abrirTabla.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../userprog/syscall.h \
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h
utility.o: ../threads/utility.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/utility.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h
threadtest.o: ../threads/threadtest.cc /usr/include/stdc-predef.h \
 /usr/include/unistd.h /usr/include/features.h \
 /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/bits/posix_opt.h \
 /usr/include/x86_64-linux-gnu/bits/environments.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/confname.h \
 /usr/include/x86_64-linux-gnu/bits/getopt_posix.h \
 /usr/include/x86_64-linux-gnu/bits/getopt_core.h ../threads/copyright.h \
 ../threads/system.h ../threads/utility.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../threads/thread.h /usr/include/c++/7/list \
=======
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/abrirTabla.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../userprog/syscall.h \
 /usr/include/sys/stat.h /usr/include/bits/stat.h /usr/include/fcntl.h \
 /usr/include/bits/fcntl.h /usr/include/bits/fcntl-linux.h \
 /usr/include/bits/types/struct_iovec.h /usr/include/linux/falloc.h \
 ../userprog/bitmap.h ../userprog/TablaSemaforos.h \
 /usr/include/c++/7/cstdio ../threads/synch.h ../threads/dinningph.h
dinningph.o: ../threads/dinningph.cc /usr/include/stdc-predef.h \
 ../threads/dinningph.h ../threads/synch.h ../threads/copyright.h \
 ../threads/thread.h ../threads/utility.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h /usr/include/c++/7/list \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
<<<<<<< HEAD
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../threads/utility.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/abrirTabla.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../userprog/syscall.h \
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h ../threads/dinningph.h
dinningph.o: ../threads/dinningph.cc /usr/include/stdc-predef.h \
 ../threads/dinningph.h ../threads/synch.h ../threads/copyright.h \
 ../threads/thread.h ../threads/utility.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h /usr/include/c++/7/list \
=======
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/list.h
interrupt.o: ../machine/interrupt.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/interrupt.h ../threads/list.h \
 ../threads/copyright.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/c++/7/stdlib.h /usr/include/c++/7/cstdlib \
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../threads/system.h \
 ../threads/thread.h /usr/include/c++/7/list \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
<<<<<<< HEAD
 ../machine/machine.h ../threads/utility.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/list.h
interrupt.o: ../machine/interrupt.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/interrupt.h ../threads/list.h \
 ../threads/copyright.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/c++/7/stdlib.h /usr/include/c++/7/cstdlib \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../threads/system.h ../threads/thread.h \
=======
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../threads/utility.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../machine/interrupt.h ../machine/stats.h \
 ../machine/timer.h ../userprog/abrirTabla.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../userprog/syscall.h /usr/include/sys/stat.h \
 /usr/include/bits/stat.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
 /usr/include/bits/fcntl-linux.h /usr/include/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h
sysdep.o: ../machine/sysdep.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h /usr/include/stdio.h \
 /usr/include/bits/libc-header-start.h /usr/include/features.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/__FILE.h /usr/include/bits/types/FILE.h \
 /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/strings.h \
 /usr/include/signal.h /usr/include/bits/signum.h \
 /usr/include/bits/signum-generic.h \
 /usr/include/bits/types/sig_atomic_t.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timespec.h \
 /usr/include/bits/types/siginfo_t.h /usr/include/bits/types/sigval_t.h \
 /usr/include/bits/siginfo-arch.h /usr/include/bits/siginfo-consts.h \
 /usr/include/bits/siginfo-consts-arch.h \
 /usr/include/bits/types/sigevent_t.h /usr/include/bits/sigevent-consts.h \
 /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h \
 /usr/include/bits/types/stack_t.h /usr/include/sys/ucontext.h \
 /usr/include/bits/sigstack.h /usr/include/bits/ss_flags.h \
 /usr/include/bits/types/struct_sigstack.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/bits/sigthread.h \
 /usr/include/sys/types.h /usr/include/bits/types/clock_t.h \
 /usr/include/bits/types/clockid_t.h /usr/include/bits/types/time_t.h \
 /usr/include/bits/types/timer_t.h /usr/include/bits/stdint-intn.h \
 /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/byteswap-16.h \
 /usr/include/bits/uintn-identity.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/types/struct_timeval.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/sysmacros.h \
 /usr/include/sys/socket.h /usr/include/bits/types/struct_iovec.h \
 /usr/include/bits/socket.h /usr/include/bits/socket_type.h \
 /usr/include/bits/sockaddr.h /usr/include/asm/socket.h \
 /usr/include/asm-generic/socket.h /usr/include/asm/sockios.h \
 /usr/include/asm-generic/sockios.h \
 /usr/include/bits/types/struct_osockaddr.h /usr/include/sys/file.h \
 /usr/include/fcntl.h /usr/include/bits/fcntl.h \
 /usr/include/bits/fcntl-linux.h /usr/include/linux/falloc.h \
 /usr/include/bits/stat.h /usr/include/sys/un.h /usr/include/sys/mman.h \
 /usr/include/bits/mman.h /usr/include/bits/mman-linux.h \
 /usr/include/sys/syscall.h /usr/include/asm/unistd.h \
 /usr/include/asm/unistd_64.h /usr/include/bits/syscall.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/bits/getopt_posix.h /usr/include/bits/getopt_core.h \
 /usr/include/c++/7/stdlib.h /usr/include/c++/7/cstdlib \
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/bits/floatn.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h ../machine/interrupt.h \
 ../threads/list.h ../threads/copyright.h ../threads/utility.h \
 ../machine/sysdep.h ../threads/system.h ../threads/thread.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/list /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../threads/utility.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../machine/interrupt.h ../machine/stats.h \
 ../machine/timer.h ../userprog/abrirTabla.h ../userprog/bitmap.h \
<<<<<<< HEAD
 ../filesys/openfile.h ../userprog/syscall.h \
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h
sysdep.o: ../machine/sysdep.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/strings.h /usr/include/signal.h \
 /usr/include/x86_64-linux-gnu/bits/signum.h \
 /usr/include/x86_64-linux-gnu/bits/signum-generic.h \
 /usr/include/x86_64-linux-gnu/bits/types/sig_atomic_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigval_t.h \
 /usr/include/x86_64-linux-gnu/bits/siginfo-arch.h \
 /usr/include/x86_64-linux-gnu/bits/siginfo-consts.h \
 /usr/include/x86_64-linux-gnu/bits/siginfo-consts-arch.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h \
 /usr/include/x86_64-linux-gnu/bits/sigevent-consts.h \
 /usr/include/x86_64-linux-gnu/bits/sigaction.h \
 /usr/include/x86_64-linux-gnu/bits/sigcontext.h \
 /usr/include/x86_64-linux-gnu/bits/types/stack_t.h \
 /usr/include/x86_64-linux-gnu/sys/ucontext.h \
 /usr/include/x86_64-linux-gnu/bits/sigstack.h \
 /usr/include/x86_64-linux-gnu/bits/ss_flags.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sigstack.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/sigthread.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/sys/socket.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
 /usr/include/x86_64-linux-gnu/bits/socket.h \
 /usr/include/x86_64-linux-gnu/bits/socket_type.h \
 /usr/include/x86_64-linux-gnu/bits/sockaddr.h \
 /usr/include/x86_64-linux-gnu/asm/socket.h \
 /usr/include/asm-generic/socket.h \
 /usr/include/x86_64-linux-gnu/asm/sockios.h \
 /usr/include/asm-generic/sockios.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_osockaddr.h \
 /usr/include/x86_64-linux-gnu/sys/file.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/linux/falloc.h /usr/include/x86_64-linux-gnu/bits/stat.h \
 /usr/include/x86_64-linux-gnu/sys/un.h \
 /usr/include/x86_64-linux-gnu/sys/mman.h \
 /usr/include/x86_64-linux-gnu/bits/mman.h \
 /usr/include/x86_64-linux-gnu/bits/mman-linux.h \
 /usr/include/x86_64-linux-gnu/sys/syscall.h \
 /usr/include/x86_64-linux-gnu/asm/unistd.h \
 /usr/include/x86_64-linux-gnu/asm/unistd_64.h \
 /usr/include/x86_64-linux-gnu/bits/syscall.h /usr/include/unistd.h \
 /usr/include/x86_64-linux-gnu/bits/posix_opt.h \
 /usr/include/x86_64-linux-gnu/bits/environments.h \
 /usr/include/x86_64-linux-gnu/bits/confname.h \
 /usr/include/x86_64-linux-gnu/bits/getopt_posix.h \
 /usr/include/x86_64-linux-gnu/bits/getopt_core.h \
 /usr/include/c++/7/stdlib.h /usr/include/c++/7/cstdlib \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h ../machine/interrupt.h \
 ../threads/list.h ../threads/copyright.h ../threads/utility.h \
 ../machine/sysdep.h ../threads/system.h ../threads/thread.h \
 /usr/include/c++/7/list /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../threads/utility.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../machine/interrupt.h ../machine/stats.h \
 ../machine/timer.h ../userprog/abrirTabla.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../userprog/syscall.h \
 /usr/include/x86_64-linux-gnu/sys/stat.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h
=======
 ../filesys/openfile.h ../userprog/syscall.h /usr/include/sys/stat.h \
 ../userprog/bitmap.h ../userprog/TablaSemaforos.h \
 /usr/include/c++/7/cstdio ../threads/synch.h
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
stats.o: ../machine/stats.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/utility.h ../threads/copyright.h \
 ../machine/sysdep.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../machine/stats.h
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../machine/stats.h
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
timer.o: ../machine/timer.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/timer.h ../threads/utility.h \
 ../threads/copyright.h ../machine/sysdep.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h /usr/include/c++/7/list \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../threads/system.h \
 ../threads/utility.h ../threads/thread.h /usr/include/c++/7/list \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../machine/timer.h ../userprog/abrirTabla.h ../userprog/bitmap.h \
<<<<<<< HEAD
 ../filesys/openfile.h ../userprog/syscall.h \
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
=======
 ../filesys/openfile.h ../userprog/syscall.h /usr/include/sys/stat.h \
 /usr/include/bits/stat.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
 /usr/include/bits/fcntl-linux.h /usr/include/bits/types/struct_iovec.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h
preemptive.o: ../threads/preemptive.cc /usr/include/stdc-predef.h \
 ../threads/preemptive.h ../threads/system.h ../threads/copyright.h \
 ../threads/utility.h ../machine/sysdep.h ../threads/copyright.h \
 /usr/include/c++/7/stdlib.h /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../threads/thread.h /usr/include/c++/7/list \
 /usr/include/c++/7/bits/stl_algobase.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../threads/thread.h \
 /usr/include/c++/7/list /usr/include/c++/7/bits/stl_algobase.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../threads/utility.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/abrirTabla.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../userprog/syscall.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h /usr/include/unistd.h \
 /usr/include/x86_64-linux-gnu/bits/posix_opt.h \
 /usr/include/x86_64-linux-gnu/bits/environments.h \
 /usr/include/x86_64-linux-gnu/bits/confname.h \
 /usr/include/x86_64-linux-gnu/bits/getopt_posix.h \
 /usr/include/x86_64-linux-gnu/bits/getopt_core.h \
 /usr/include/x86_64-linux-gnu/sys/ptrace.h \
 /usr/include/x86_64-linux-gnu/sys/wait.h /usr/include/signal.h \
 /usr/include/x86_64-linux-gnu/bits/signum.h \
 /usr/include/x86_64-linux-gnu/bits/signum-generic.h \
 /usr/include/x86_64-linux-gnu/bits/types/sig_atomic_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigval_t.h \
 /usr/include/x86_64-linux-gnu/bits/siginfo-arch.h \
 /usr/include/x86_64-linux-gnu/bits/siginfo-consts.h \
 /usr/include/x86_64-linux-gnu/bits/siginfo-consts-arch.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h \
 /usr/include/x86_64-linux-gnu/bits/sigevent-consts.h \
 /usr/include/x86_64-linux-gnu/bits/sigaction.h \
 /usr/include/x86_64-linux-gnu/bits/sigcontext.h \
 /usr/include/x86_64-linux-gnu/bits/types/stack_t.h \
 /usr/include/x86_64-linux-gnu/sys/ucontext.h \
 /usr/include/x86_64-linux-gnu/bits/sigstack.h \
 /usr/include/x86_64-linux-gnu/bits/ss_flags.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_sigstack.h \
 /usr/include/x86_64-linux-gnu/bits/sigthread.h \
 /usr/include/x86_64-linux-gnu/sys/user.h
addrspace.o: ../userprog/addrspace.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h /usr/include/c++/7/iostream \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
=======
 /usr/include/sys/stat.h /usr/include/bits/stat.h /usr/include/fcntl.h \
 /usr/include/bits/fcntl.h /usr/include/bits/fcntl-linux.h \
 /usr/include/bits/types/struct_iovec.h /usr/include/linux/falloc.h \
 ../userprog/bitmap.h ../userprog/TablaSemaforos.h \
 /usr/include/c++/7/cstdio ../threads/synch.h /usr/include/unistd.h \
 /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
 /usr/include/bits/confname.h /usr/include/bits/getopt_posix.h \
 /usr/include/bits/getopt_core.h /usr/include/sys/ptrace.h \
 /usr/include/sys/wait.h /usr/include/signal.h /usr/include/bits/signum.h \
 /usr/include/bits/signum-generic.h \
 /usr/include/bits/types/sig_atomic_t.h \
 /usr/include/bits/types/siginfo_t.h /usr/include/bits/types/sigval_t.h \
 /usr/include/bits/siginfo-arch.h /usr/include/bits/siginfo-consts.h \
 /usr/include/bits/siginfo-consts-arch.h \
 /usr/include/bits/types/sigevent_t.h /usr/include/bits/sigevent-consts.h \
 /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h \
 /usr/include/bits/types/stack_t.h /usr/include/sys/ucontext.h \
 /usr/include/bits/sigstack.h /usr/include/bits/ss_flags.h \
 /usr/include/bits/types/struct_sigstack.h /usr/include/bits/sigthread.h \
 /usr/include/sys/user.h
addrspace.o: ../userprog/addrspace.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h /usr/include/c++/7/iostream \
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/iosfwd /usr/include/c++/7/bits/stringfwd.h \
 /usr/include/c++/7/bits/memoryfwd.h /usr/include/c++/7/bits/postypes.h \
 /usr/include/c++/7/cwchar /usr/include/wchar.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
=======
 /usr/include/bits/libc-header-start.h /usr/include/bits/floatn.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/bits/types/wint_t.h \
 /usr/include/bits/types/mbstate_t.h \
 /usr/include/bits/types/__mbstate_t.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/c++/7/exception \
 /usr/include/c++/7/bits/exception.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/new /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/move.h /usr/include/c++/7/bits/concept_check.h \
 /usr/include/c++/7/type_traits /usr/include/c++/7/bits/char_traits.h \
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h /usr/include/c++/7/cstdint \
<<<<<<< HEAD
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/c++/7/bits/ios_base.h /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdint.h \
 /usr/include/stdint.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/bits/stdint-intn.h \
 /usr/include/bits/stdint-uintn.h /usr/include/c++/7/bits/localefwd.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/endian.h /usr/include/bits/endian.h \
 /usr/include/bits/byteswap.h /usr/include/bits/byteswap-16.h \
 /usr/include/bits/uintn-identity.h /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/gthr.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/bits/types/time_t.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/bits/sched.h \
 /usr/include/bits/cpu-set.h /usr/include/time.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/struct_tm.h \
 /usr/include/bits/types/clockid_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/types/struct_itimerspec.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/bits/setjmp.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/atomic_word.h \
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/allocator.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/stdlib.h /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h /usr/include/alloca.h \
 /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h \
 /usr/include/x86_64-linux-gnu/bits/errno.h /usr/include/linux/errno.h \
 /usr/include/x86_64-linux-gnu/asm/errno.h \
=======
 /usr/include/stdlib.h /usr/include/bits/waitflags.h \
 /usr/include/bits/waitstatus.h /usr/include/sys/types.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/sys/sysmacros.h /usr/include/bits/sysmacros.h \
 /usr/include/alloca.h /usr/include/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/c++/7/cstdio \
 /usr/include/stdio.h /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/c++/7/cerrno /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/error_constants.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
<<<<<<< HEAD
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
=======
 /usr/include/wctype.h /usr/include/bits/wctype-wchar.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/ctype_inline.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc ../threads/system.h \
 ../threads/copyright.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/c++/7/stdlib.h /usr/include/string.h /usr/include/strings.h \
 ../threads/thread.h /usr/include/c++/7/list \
 /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../threads/utility.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/abrirTabla.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../userprog/syscall.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h ../threads/synch.h ../userprog/addrspace.h \
 ../bin/noff.h
=======
 /usr/include/sys/stat.h /usr/include/bits/stat.h /usr/include/fcntl.h \
 /usr/include/bits/fcntl.h /usr/include/bits/fcntl-linux.h \
 /usr/include/bits/types/struct_iovec.h /usr/include/linux/falloc.h \
 ../userprog/bitmap.h ../userprog/TablaSemaforos.h ../threads/synch.h \
 ../userprog/addrspace.h ../bin/noff.h
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
bitmap.o: ../userprog/bitmap.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../userprog/bitmap.h ../threads/utility.h \
 ../threads/copyright.h ../machine/sysdep.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../filesys/openfile.h
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../filesys/openfile.h
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
abrirTabla.o: ../userprog/abrirTabla.cc /usr/include/stdc-predef.h \
 ../userprog/abrirTabla.h ../userprog/bitmap.h ../threads/copyright.h \
 ../threads/utility.h ../threads/copyright.h ../machine/sysdep.h \
 /usr/include/c++/7/stdlib.h /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../filesys/openfile.h ../userprog/syscall.h \
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../filesys/openfile.h \
 ../userprog/syscall.h /usr/include/sys/stat.h /usr/include/bits/stat.h \
 /usr/include/fcntl.h /usr/include/bits/fcntl.h \
 /usr/include/bits/fcntl-linux.h /usr/include/bits/types/struct_iovec.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/linux/falloc.h
exception.o: ../userprog/exception.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/copyright.h \
 ../threads/utility.h ../machine/sysdep.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../threads/thread.h /usr/include/c++/7/list \
 /usr/include/c++/7/bits/stl_algobase.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../threads/thread.h \
 /usr/include/c++/7/list /usr/include/c++/7/bits/stl_algobase.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../threads/utility.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/abrirTabla.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../userprog/syscall.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h /usr/include/unistd.h \
 /usr/include/x86_64-linux-gnu/bits/posix_opt.h \
 /usr/include/x86_64-linux-gnu/bits/environments.h \
 /usr/include/x86_64-linux-gnu/bits/confname.h \
 /usr/include/x86_64-linux-gnu/bits/getopt_posix.h \
 /usr/include/x86_64-linux-gnu/bits/getopt_core.h \
 /usr/include/c++/7/iostream /usr/include/c++/7/ostream \
 /usr/include/c++/7/ios /usr/include/c++/7/iosfwd \
 /usr/include/c++/7/bits/stringfwd.h /usr/include/c++/7/bits/postypes.h \
 /usr/include/c++/7/cwchar /usr/include/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/wchar.h \
 /usr/include/x86_64-linux-gnu/bits/types/wint_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/mbstate_t.h \
 /usr/include/c++/7/bits/char_traits.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdint.h /usr/include/stdint.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/x86_64-linux-gnu/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h \
 /usr/include/x86_64-linux-gnu/bits/sched.h \
 /usr/include/x86_64-linux-gnu/bits/cpu-set.h /usr/include/time.h \
 /usr/include/x86_64-linux-gnu/bits/time.h \
 /usr/include/x86_64-linux-gnu/bits/timex.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_tm.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h \
 /usr/include/x86_64-linux-gnu/bits/setjmp.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/atomic_word.h \
=======
 /usr/include/sys/stat.h /usr/include/bits/stat.h /usr/include/fcntl.h \
 /usr/include/bits/fcntl.h /usr/include/bits/fcntl-linux.h \
 /usr/include/bits/types/struct_iovec.h /usr/include/linux/falloc.h \
 ../userprog/bitmap.h ../userprog/TablaSemaforos.h \
 /usr/include/c++/7/cstdio ../threads/synch.h /usr/include/unistd.h \
 /usr/include/bits/posix_opt.h /usr/include/bits/environments.h \
 /usr/include/bits/confname.h /usr/include/bits/getopt_posix.h \
 /usr/include/bits/getopt_core.h /usr/include/c++/7/iostream \
 /usr/include/c++/7/ostream /usr/include/c++/7/ios \
 /usr/include/c++/7/iosfwd /usr/include/c++/7/bits/stringfwd.h \
 /usr/include/c++/7/bits/postypes.h /usr/include/c++/7/cwchar \
 /usr/include/wchar.h /usr/include/bits/wchar.h \
 /usr/include/bits/types/wint_t.h /usr/include/bits/types/mbstate_t.h \
 /usr/include/c++/7/bits/char_traits.h /usr/include/c++/7/cstdint \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdint.h \
 /usr/include/stdint.h /usr/include/bits/stdint-uintn.h \
 /usr/include/c++/7/bits/localefwd.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++locale.h \
 /usr/include/c++/7/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/7/cctype \
 /usr/include/ctype.h /usr/include/c++/7/bits/ios_base.h \
 /usr/include/c++/7/ext/atomicity.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/gthr.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/bits/sched.h \
 /usr/include/bits/cpu-set.h /usr/include/time.h /usr/include/bits/time.h \
 /usr/include/bits/timex.h /usr/include/bits/types/struct_tm.h \
 /usr/include/bits/types/struct_itimerspec.h /usr/include/bits/setjmp.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/atomic_word.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/locale_classes.h /usr/include/c++/7/string \
 /usr/include/c++/7/bits/ostream_insert.h \
 /usr/include/c++/7/bits/cxxabi_forced.h \
 /usr/include/c++/7/bits/stl_function.h \
 /usr/include/c++/7/backward/binders.h \
 /usr/include/c++/7/bits/basic_string.h \
 /usr/include/c++/7/ext/string_conversions.h /usr/include/c++/7/cerrno \
<<<<<<< HEAD
 /usr/include/errno.h /usr/include/x86_64-linux-gnu/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/x86_64-linux-gnu/asm/errno.h \
=======
 /usr/include/errno.h /usr/include/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/asm/errno.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 /usr/include/c++/7/bits/functional_hash.h \
 /usr/include/c++/7/bits/basic_string.tcc \
 /usr/include/c++/7/bits/locale_classes.tcc \
 /usr/include/c++/7/system_error \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/error_constants.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/error_constants.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/stdexcept /usr/include/c++/7/streambuf \
 /usr/include/c++/7/bits/streambuf.tcc \
 /usr/include/c++/7/bits/basic_ios.h \
 /usr/include/c++/7/bits/locale_facets.h /usr/include/c++/7/cwctype \
<<<<<<< HEAD
 /usr/include/wctype.h /usr/include/x86_64-linux-gnu/bits/wctype-wchar.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/ctype_inline.h \
=======
 /usr/include/wctype.h /usr/include/bits/wctype-wchar.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/ctype_base.h \
 /usr/include/c++/7/bits/streambuf_iterator.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/ctype_inline.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/locale_facets.tcc \
 /usr/include/c++/7/bits/basic_ios.tcc \
 /usr/include/c++/7/bits/ostream.tcc /usr/include/c++/7/istream \
 /usr/include/c++/7/bits/istream.tcc
progtest.o: ../userprog/progtest.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../threads/system.h ../threads/copyright.h \
 ../threads/utility.h ../machine/sysdep.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../threads/thread.h /usr/include/c++/7/list \
 /usr/include/c++/7/bits/stl_algobase.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../threads/thread.h \
 /usr/include/c++/7/list /usr/include/c++/7/bits/stl_algobase.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../threads/utility.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/abrirTabla.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../userprog/syscall.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h ../machine/console.h ../userprog/addrspace.h
=======
 /usr/include/sys/stat.h /usr/include/bits/stat.h /usr/include/fcntl.h \
 /usr/include/bits/fcntl.h /usr/include/bits/fcntl-linux.h \
 /usr/include/bits/types/struct_iovec.h /usr/include/linux/falloc.h \
 ../userprog/bitmap.h ../userprog/TablaSemaforos.h \
 /usr/include/c++/7/cstdio ../threads/synch.h ../machine/console.h \
 ../userprog/addrspace.h
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
console.o: ../machine/console.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/console.h ../threads/utility.h \
 ../threads/copyright.h ../machine/sysdep.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h /usr/include/c++/7/list \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../threads/system.h \
 ../threads/utility.h ../threads/thread.h /usr/include/c++/7/list \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../machine/timer.h ../userprog/abrirTabla.h ../userprog/bitmap.h \
<<<<<<< HEAD
 ../filesys/openfile.h ../userprog/syscall.h \
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
=======
 ../filesys/openfile.h ../userprog/syscall.h /usr/include/sys/stat.h \
 /usr/include/bits/stat.h /usr/include/fcntl.h /usr/include/bits/fcntl.h \
 /usr/include/bits/fcntl-linux.h /usr/include/bits/types/struct_iovec.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h
machine.o: ../machine/machine.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/machine.h ../threads/utility.h \
 ../threads/copyright.h ../machine/sysdep.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../machine/translate.h ../machine/disk.h \
 ../threads/system.h ../threads/utility.h ../threads/thread.h \
 /usr/include/c++/7/list /usr/include/c++/7/bits/stl_algobase.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../machine/translate.h \
 ../machine/disk.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h /usr/include/c++/7/list \
 /usr/include/c++/7/bits/stl_algobase.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/abrirTabla.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../userprog/syscall.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h
=======
 /usr/include/sys/stat.h /usr/include/bits/stat.h /usr/include/fcntl.h \
 /usr/include/bits/fcntl.h /usr/include/bits/fcntl-linux.h \
 /usr/include/bits/types/struct_iovec.h /usr/include/linux/falloc.h \
 ../userprog/bitmap.h ../userprog/TablaSemaforos.h \
 /usr/include/c++/7/cstdio ../threads/synch.h
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
mipssim.o: ../machine/mipssim.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/machine.h ../threads/utility.h \
 ../threads/copyright.h ../machine/sysdep.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../machine/translate.h ../machine/disk.h \
 ../machine/mipssim.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h /usr/include/c++/7/list \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../machine/translate.h \
 ../machine/disk.h ../machine/mipssim.h ../threads/system.h \
 ../threads/utility.h ../threads/thread.h /usr/include/c++/7/list \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/stl_algobase.h \
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/abrirTabla.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../userprog/syscall.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h
=======
 /usr/include/sys/stat.h /usr/include/bits/stat.h /usr/include/fcntl.h \
 /usr/include/bits/fcntl.h /usr/include/bits/fcntl-linux.h \
 /usr/include/bits/types/struct_iovec.h /usr/include/linux/falloc.h \
 ../userprog/bitmap.h ../userprog/TablaSemaforos.h \
 /usr/include/c++/7/cstdio ../threads/synch.h
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
translate.o: ../machine/translate.cc /usr/include/stdc-predef.h \
 ../threads/copyright.h ../machine/machine.h ../threads/utility.h \
 ../threads/copyright.h ../machine/sysdep.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/strings.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/system.h ../threads/utility.h ../threads/thread.h \
 /usr/include/c++/7/list /usr/include/c++/7/bits/stl_algobase.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdlib.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/stdio.h /usr/include/bits/types/__FILE.h \
 /usr/include/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/strings.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h /usr/include/c++/7/list \
 /usr/include/c++/7/bits/stl_algobase.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../threads/list.h ../machine/machine.h \
 ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../machine/timer.h ../userprog/abrirTabla.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../userprog/syscall.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/sys/stat.h \
 /usr/include/x86_64-linux-gnu/bits/stat.h /usr/include/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl.h \
 /usr/include/x86_64-linux-gnu/bits/fcntl-linux.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h \
 /usr/include/linux/falloc.h ../userprog/bitmap.h \
 ../userprog/TablaSemaforos.h /usr/include/c++/7/cstdio \
 ../threads/synch.h
TablaSemaforos.o: ../userprog/TablaSemaforos.cc \
 /usr/include/stdc-predef.h ../userprog/TablaSemaforos.h \
 /usr/include/c++/7/cstdio \
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++config.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/os_defines.h \
 /usr/include/features.h /usr/include/x86_64-linux-gnu/sys/cdefs.h \
 /usr/include/x86_64-linux-gnu/bits/wordsize.h \
 /usr/include/x86_64-linux-gnu/bits/long-double.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs.h \
 /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
 /usr/include/x86_64-linux-gnu/c++/7/bits/cpu_defines.h \
 /usr/include/stdio.h \
 /usr/include/x86_64-linux-gnu/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h \
 /usr/include/x86_64-linux-gnu/bits/types.h \
 /usr/include/x86_64-linux-gnu/bits/typesizes.h \
 /usr/include/x86_64-linux-gnu/bits/types/__FILE.h \
 /usr/include/x86_64-linux-gnu/bits/types/FILE.h /usr/include/libio.h \
 /usr/include/_G_config.h \
 /usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h \
 /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
 /usr/include/x86_64-linux-gnu/bits/sys_errlist.h ../userprog/bitmap.h \
 ../threads/copyright.h ../threads/utility.h ../threads/copyright.h \
 ../machine/sysdep.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib /usr/include/stdlib.h \
 /usr/include/x86_64-linux-gnu/bits/waitflags.h \
 /usr/include/x86_64-linux-gnu/bits/waitstatus.h \
 /usr/include/x86_64-linux-gnu/bits/floatn.h \
 /usr/include/x86_64-linux-gnu/bits/types/locale_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__locale_t.h \
 /usr/include/x86_64-linux-gnu/sys/types.h \
 /usr/include/x86_64-linux-gnu/bits/types/clock_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/clockid_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/time_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/timer_t.h \
 /usr/include/x86_64-linux-gnu/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/x86_64-linux-gnu/bits/endian.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap.h \
 /usr/include/x86_64-linux-gnu/bits/byteswap-16.h \
 /usr/include/x86_64-linux-gnu/bits/uintn-identity.h \
 /usr/include/x86_64-linux-gnu/sys/select.h \
 /usr/include/x86_64-linux-gnu/bits/select.h \
 /usr/include/x86_64-linux-gnu/bits/types/sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h \
 /usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h \
 /usr/include/x86_64-linux-gnu/sys/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/sysmacros.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h \
 /usr/include/x86_64-linux-gnu/bits/thread-shared-types.h \
 /usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h \
 /usr/include/alloca.h /usr/include/x86_64-linux-gnu/bits/stdlib-float.h \
 /usr/include/c++/7/bits/std_abs.h /usr/include/string.h \
 /usr/include/strings.h ../filesys/openfile.h ../threads/synch.h \
 ../threads/thread.h ../threads/utility.h /usr/include/c++/7/list \
 /usr/include/c++/7/bits/stl_algobase.h \
=======
 /usr/include/sys/stat.h /usr/include/bits/stat.h /usr/include/fcntl.h \
 /usr/include/bits/fcntl.h /usr/include/bits/fcntl-linux.h \
 /usr/include/bits/types/struct_iovec.h /usr/include/linux/falloc.h \
 ../userprog/bitmap.h ../userprog/TablaSemaforos.h \
 /usr/include/c++/7/cstdio ../threads/synch.h
TablaSemaforos.o: ../userprog/TablaSemaforos.cc \
 /usr/include/stdc-predef.h ../userprog/TablaSemaforos.h \
 /usr/include/c++/7/cstdio \
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++config.h \
 /usr/include/bits/wordsize.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/os_defines.h \
 /usr/include/features.h /usr/include/sys/cdefs.h \
 /usr/include/bits/long-double.h /usr/include/gnu/stubs.h \
 /usr/include/gnu/stubs-64.h \
 /usr/include/c++/7/x86_64-redhat-linux/bits/cpu_defines.h \
 /usr/include/stdio.h /usr/include/bits/libc-header-start.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stddef.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/bits/types/__FILE.h /usr/include/bits/types/FILE.h \
 /usr/include/libio.h /usr/include/_G_config.h \
 /usr/include/bits/types/__mbstate_t.h \
 /usr/lib/gcc/x86_64-redhat-linux/7/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 ../userprog/bitmap.h ../threads/copyright.h ../threads/utility.h \
 ../threads/copyright.h ../machine/sysdep.h /usr/include/c++/7/stdlib.h \
 /usr/include/c++/7/cstdlib /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/bits/floatn.h /usr/include/bits/types/locale_t.h \
 /usr/include/bits/types/__locale_t.h /usr/include/sys/types.h \
 /usr/include/bits/types/clock_t.h /usr/include/bits/types/clockid_t.h \
 /usr/include/bits/types/time_t.h /usr/include/bits/types/timer_t.h \
 /usr/include/bits/stdint-intn.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/bits/byteswap-16.h /usr/include/bits/uintn-identity.h \
 /usr/include/sys/select.h /usr/include/bits/select.h \
 /usr/include/bits/types/sigset_t.h /usr/include/bits/types/__sigset_t.h \
 /usr/include/bits/types/struct_timeval.h \
 /usr/include/bits/types/struct_timespec.h /usr/include/sys/sysmacros.h \
 /usr/include/bits/sysmacros.h /usr/include/bits/pthreadtypes.h \
 /usr/include/bits/thread-shared-types.h \
 /usr/include/bits/pthreadtypes-arch.h /usr/include/alloca.h \
 /usr/include/bits/stdlib-float.h /usr/include/c++/7/bits/std_abs.h \
 /usr/include/string.h /usr/include/strings.h ../filesys/openfile.h \
 ../threads/synch.h ../threads/thread.h ../threads/utility.h \
 /usr/include/c++/7/list /usr/include/c++/7/bits/stl_algobase.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/bits/functexcept.h \
 /usr/include/c++/7/bits/exception_defines.h \
 /usr/include/c++/7/bits/cpp_type_traits.h \
 /usr/include/c++/7/ext/type_traits.h \
 /usr/include/c++/7/ext/numeric_traits.h \
 /usr/include/c++/7/bits/stl_pair.h /usr/include/c++/7/bits/move.h \
 /usr/include/c++/7/bits/concept_check.h /usr/include/c++/7/type_traits \
 /usr/include/c++/7/bits/stl_iterator_base_types.h \
 /usr/include/c++/7/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/7/debug/assertions.h \
 /usr/include/c++/7/bits/stl_iterator.h \
 /usr/include/c++/7/bits/ptr_traits.h /usr/include/c++/7/debug/debug.h \
 /usr/include/c++/7/bits/predefined_ops.h \
 /usr/include/c++/7/bits/allocator.h \
<<<<<<< HEAD
 /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h \
=======
 /usr/include/c++/7/x86_64-redhat-linux/bits/c++allocator.h \
>>>>>>> aa9d910ab950f38853f55dabc552f14a77a65e22
 /usr/include/c++/7/ext/new_allocator.h /usr/include/c++/7/new \
 /usr/include/c++/7/exception /usr/include/c++/7/bits/exception.h \
 /usr/include/c++/7/bits/exception_ptr.h \
 /usr/include/c++/7/bits/cxxabi_init_exception.h \
 /usr/include/c++/7/typeinfo /usr/include/c++/7/bits/hash_bytes.h \
 /usr/include/c++/7/bits/nested_exception.h \
 /usr/include/c++/7/bits/memoryfwd.h \
 /usr/include/c++/7/bits/range_access.h \
 /usr/include/c++/7/initializer_list /usr/include/c++/7/bits/stl_list.h \
 /usr/include/c++/7/ext/alloc_traits.h \
 /usr/include/c++/7/bits/alloc_traits.h \
 /usr/include/c++/7/bits/allocated_ptr.h \
 /usr/include/c++/7/ext/aligned_buffer.h /usr/include/c++/7/bits/list.tcc \
 ../threads/synch.h ../machine/machine.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/list.h
# DEPENDENCIES MUST END AT END OF FILE
# IF YOU PUT STUFF HERE IT WILL GO AWAY
# see make depend above
