%include "libfts.inc"

section .text
		global	_ft_isascii

_ft_isascii:
		mov		rax, 1
		cmp		rdi, 0
		jl		fail
		cmp		rdi, 127
		jg		fail
		ret

fail:
		mov		rax, 0
		ret
