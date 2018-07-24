%include "libfts.inc"

section .text
		global	_ft_isupper

_ft_isupper:
		mov		rax, 1
		cmp		rdi, 65
		jl		fail
		cmp		rdi, 90
		jg		fail
		ret

fail:
		mov		rax, 0
		ret
