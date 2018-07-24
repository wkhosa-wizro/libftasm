%include "libfts.inc"

section	.text
		global		_ft_strcat
		extern		_ft_strlen

_ft_strcat:
		push	rbp
		mov		rbp, rsp
		sub		rsp, 32
		mov		qword [rbp - 16], rdi
		mov		qword [rbp - 8], rsi
		call	_ft_strlen
		mov		qword [rbp - 24], rax
		xor		rcx, rcx
		xor		rbx, rbx
startLoop:
		mov		bl, BYTE [rsi + rcx]
		mov		BYTE [rdi + rax], bl
		cmp		bl, 0
		je		endLoop
		inc		rcx
		inc		rax
		jmp		startLoop
endLoop:
		mov		rax, rdi
		leave
		ret
	
