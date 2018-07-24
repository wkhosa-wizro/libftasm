%include "libfts.inc"

section .text
		global		_ft_toupper
		extern		_ft_islower

_ft_toupper:
		xor		rbx, rbx
		xor		rax, rax
		call	_ft_islower
		cmp		rax, 1
		jne		last
		mov		rax, rdi
		sub		rax, 32
		ret

last:
		xor		rax, rax
		mov		rax, rdi
		ret
