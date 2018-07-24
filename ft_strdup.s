section	.text
		global	_ft_strdup
		extern	_malloc
		extern	_ft_strlen

_ft_strdup:
		push	rbp
		mov		rbp, rsp
		sub		rsp, 32
		mov		qword [rbp - 24], rdi
		call	_ft_strlen
		mov		qword [rbp -32], rax
		add		rax, 1
		mov		rdi, rax
		call	_malloc
		mov		qword [rbp - 16], rax
		mov		rdi, qword [rbp - 16]
		mov		rsi, qword [rbp - 24]
		mov		rcx, [rbp - 32]
		add		rcx, 1
		rep		movsb
		mov		rax, qword [rbp - 24]
		leave
		ret
