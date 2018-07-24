%include "libfts.inc"

section .text
		global	_ft_islower

_ft_islower:
		mov		rax, 1
		cmp		rdi, 97
		jl		fail
		cmp		rdi, 122
		jg		fail
		ret

fail:
		mov		rax, 0
		ret
