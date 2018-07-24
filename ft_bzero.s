%include "libfts.inc"

section	.text
		global		_ft_bzero

_ft_bzero:
		push	rbp
		mov		rbp, rsp
		sub		rsp, 32
		mov		qword [rbp - 16], rdi
		mov		qword [rbp - 8], rsi
		xor		rax, rax
		xor		rbx, rbx
startLoop:
		cmp		rax, rsi
		je		endLoop
		mov		byte [rdi + rax], 0
		inc		rax
		jmp		startLoop
endLoop:
		mov		rax, rdi
		leave
		ret
