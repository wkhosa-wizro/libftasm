%include "libfts.inc"
%define	 MACH_SYSCALL(nb) 0x2000000 | nb
%define STDOUT 1
%define WRITE 4
%define	READ 3
%define	BUFF_SIZE 42

section .bss
		buff		resb		BUFF_SIZE

section	.text
		global		_ft_cat

_ft_cat:
		push		rbp
		mov			rbp, rsp

startLoop:
		push		rdi
		mov			rax, MACH_SYSCALL(READ)
		lea			rsi, [rel buff]
		mov			rdx, BUFF_SIZE
		syscall
		cmp			rax, 0
		jl			last
		push		rax
		mov			rax, MACH_SYSCALL(WRITE)
		mov			rdi, STDOUT
		lea			rsi, [rel buff]
		pop			rdx
		push		rdx
		syscall
		pop			rdx
		cmp			rdx, BUFF_SIZE
		jl			last
		pop			rdi
		jmp			startLoop

last:
		leave
		ret
