;str = rdi

section		.text
global		_ft_strlen

_ft_strlen:
	mov		rax, rdi

_while:
	cmp		byte[rax], 0
	je		_return
	inc		rax
	jmp		_while

_return:
	sub		rax, rdi
	ret

