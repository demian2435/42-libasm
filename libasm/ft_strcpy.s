;dest = rdi, src = rsi

section		.text
global		ft_strcpy

ft_strcpy:
	mov		rcx, 0

while:
	cmp		byte[rsi+rcx], 0
	je		return
	mov		al, byte[rsi + rcx]
	mov		byte[rdi + rcx], al
	inc		rcx
	jmp		while

return:
	mov		byte[rdi + rcx], 0
	mov		rax, rdi	
	ret

