%include "libfts.inc"

section .text
		global	_ft_memcpy

_ft_memcpy:
		push	rbp
		mov		rbp, rsp
		sub		rsp, 32
		mov		qword [rbp - 16], rdi
		mov		qword [rbp - 8], rsi
		mov		qword [rbp - 24], rdx
		xor		rax, rax
		xor		rbx, rbx

		mov		rsi, qword [rbp - 8]
		mov		rcx, qword [rbp - 24]
		mov		rdi, qword [rbp - 16]

		rep		movsb

		mov		rax, qword [rbp - 16]
		mov		rdi, qword [rbp - 16]
		mov		rsi, qword [rbp - 8]
		mov		rdx, qword [rbp - 24]
		leave
		ret
