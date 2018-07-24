%include "libfts.inc"

section .text
		global	_ft_isdigit

_ft_isdigit:
		mov		rax, 1
		cmp		rdi, 48
		jl		fail
		cmp		rdi, 57
		jg		fail
		ret

fail:
		mov		rax, 0
		ret
