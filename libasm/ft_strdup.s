;src = rdi

section		.text
global		ft_strdup
extern		malloc

ft_strdup:
	cmp		rdi, 0
	je		error
	mov		rcx, 0
	mov		rdx, 0

static_strlen:
	cmp		byte[rdi + rcx], 0
	je		static_malloc
	inc		rcx
	jmp		static_strlen

static_malloc:
	inc		rcx
	push	rdi
	mov		rdi, rcx
	call	malloc
	pop		rdi
	cmp		rax, 0
	je		error
	mov		rcx, 0

static_copy:
	mov		dl, byte[rdi + rcx]
	mov		byte[rax + rcx], dl
	cmp		dl, 0
	je		return
	inc		rcx
	jmp		static_copy

error:
	mov		rax, 0

return:
	ret