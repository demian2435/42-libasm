;dest = rdi, src = rsi

section		.text
global		_ft_strcpy

_ft_strcpy:
	mov		rcx, 0

_while:
	cmp		byte[rsi+rcx], 0
	je		_return
	mov		al, byte[rsi + rcx]
	mov		byte[rdi + rcx], al
	inc		rcx
	jmp		_while

_return:
	mov		byte[rdi + rcx], 0
	mov		rax, rdi	
	ret

