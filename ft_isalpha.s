%include "libfts.inc"

section .text
		global		_ft_isalpha
		extern		_ft_isupper
		extern		_ft_islower

_ft_isalpha:
		xor		rax, rax
		call	_ft_isupper
		cmp		rax, 1
		je		pass
		call	_ft_islower
		cmp		rax, 1
		je		pass
		ret

pass:
		mov		rax, 1
		ret
