%include "libfts.inc"

section .text
		global	_ft_isprint

_ft_isprint:

		mov		rax, 1
		cmp		rdi, 32
		jl		fail
		cmp		rdi, 126
		jg		fail
		ret

fail:
		mov		rax, 0
		ret
