;str = rdi

section		.text
global		ft_strlen

ft_strlen:
	mov		rax, rdi

while:
	cmp		byte[rax], 0
	je		return
	inc		rax
	jmp		while

return:
	sub		rax, rdi
	ret

