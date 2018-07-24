%include "libfts.inc"

section .text
		global	_ft_strlen

_ft_strlen:	cld
		push	rdi
		xor		rax, rax
		mov		rcx, -1
		repne	scasb
		mov		rax, -2
		sub		rax, rcx
		pop		rdi
		ret
