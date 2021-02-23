;src = rdi

section		.text
global		_ft_strdup
extern		_malloc

_ft_strdup:
	cmp		rdi, 0
	je		_error
	mov		rcx, 0
	mov		rdx, 0

_static_strlen:
	cmp		byte[rdi + rcx], 0
	je		_static_malloc
	inc		rcx
	jmp		_static_strlen

_static_malloc:
	inc		rcx
	push	rdi
	mov		rdi, rcx
	call	_malloc
	pop		rdi
	cmp		rax, 0
	je		_error
	mov		rcx, 0

_static_copy:
	mov		dl, byte[rdi + rcx]
	mov		byte[rax + rcx], dl
	cmp		dl, 0
	je		_return
	inc		rcx
	jmp		_static_copy

_error:
	mov		rax, 0

_return:
	ret

