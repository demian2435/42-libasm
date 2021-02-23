;str1 = rdi, str2 = rsi

section		.text
global		_ft_strcmp

_ft_strcmp:
	mov		rcx, 0

_while:
	movzx	rax, byte[rdi + rcx]
	movzx	rdx, byte[rsi + rcx]
	cmp 	rax, rdx
	jne		_return
	cmp		rax, 0
	je		_return
	cmp		rdx, 0
	je		_return
	inc		rcx	
	jmp		_while

_return:
	sub 	rax, rdx
	ret

