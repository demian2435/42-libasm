;0x2000003 MAC
;0 LINUX
;fd = rdi, buffer = rsi, bytes = rdx

section		.text
extern		___error
global		_ft_read

_ft_read:
	mov		rax, 0x2000003
	syscall
	jc		_error
	ret

_error:
	push	rax
	call	___error
	pop		qword[rax]
	mov		rax, -1
	ret
