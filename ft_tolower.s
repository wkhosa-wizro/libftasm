%include "libfts.inc"

section .text
		global		_ft_tolower
		extern		_ft_isupper

_ft_tolower:
		xor		rbx, rbx
		xor		rax, rax
		call	_ft_isupper
		cmp		rax, 1
		jne		last
		mov		rax, rdi
		add		rax, 32
		ret

last:
		xor		rax, rax
		mov		rax, rdi
		ret
