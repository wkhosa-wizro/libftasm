%include "libfts.inc"

section .text
		global		_ft_isalnum
		extern		_ft_isalpha
		extern		_ft_isdigit

_ft_isalnum:
		xor		rax, rax
		call	_ft_isalpha
		cmp		rax, 1
		je		pass
		call	_ft_isdigit
		cmp		rax, 1
		je		pass
		ret

pass:
		mov		rax, 1
		ret
