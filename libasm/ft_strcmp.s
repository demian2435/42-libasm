;str1 = rdi, str2 = rsi

section		.text
global		ft_strcmp

ft_strcmp:
	mov		rcx, 0

while:
	movzx	rax, byte[rdi + rcx]
	movzx	rdx, byte[rsi + rcx]
	cmp 	rax, rdx
	jne		return
	cmp		rax, 0
	je		return
	cmp		rdx, 0
	je		return
	inc		rcx	
	jmp		while

return:
	sub 	rax, rdx
	ret

