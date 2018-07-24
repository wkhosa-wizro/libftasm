%include "libfts.inc"
%define	 MACH_SYSCALL(nb) 0x2000000 | nb
%define STDOUT 1
%define WRITE 4

section	.data
newLine:	db 10

section .text
		global		_ft_puts
		extern		_ft_strlen

_ft_puts:
		push		rbp
		mov			rbp, rsp
		sub			rsp, 32
		mov			qword [rbp - 16], rdi
		mov			qword [rbp - 8], rsi
		mov			qword [rbp - 24], rdx
		xor			rax, rax
		mov			r10, rdi
		call		_ft_strlen
		mov			rdx, rax
		mov			rsi, r10
		mov			rdi, STDOUT
		mov			rax, MACH_SYSCALL(WRITE)
		syscall
		cmp			rax, 0
		jl			last
		mov			rax, MACH_SYSCALL(WRITE)
		mov			rdi, STDOUT
		lea			rsi, [rel newLine]
		mov			rdx, 1
		syscall
last:
		mov			rdi, qword [rbp - 16]
		mov			rsi, qword [rbp - 8]
		mov			rdx, qword [rbp - 24]
		leave
		ret
