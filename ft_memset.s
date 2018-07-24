%include "libfts.inc"

section .text
		global	_ft_memset

_ft_memset:
		push	rbp
		mov		rbp, rsp
		sub		rsp, 32
		mov		qword [rbp - 16], rdi
		mov		qword [rbp - 8], rsi
		mov		qword [rbp - 24], rdx
		xor		rax, rax
		xor		rbx, rbx

		mov		rax, qword [rbp - 8]
		mov		rcx, qword [rbp - 24]
		mov		rdi, qword [rbp - 16]
		rep		stosb

		mov		rax, qword [rbp - 16]
		leave
		ret
