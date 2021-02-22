;0x2000003 MAC
;0 LINUX
;fd = rdi, buffer = rsi, bytes = rdx

section		.text
extern		__errno_location
global		ft_read

ft_read:
	mov		rax, 0
	syscall
	cmp		rax, 0
	jl		error	
	ret

error:
	neg		rax
	mov		rdx, rax
	call	__errno_location
	mov		qword[rax], rdx
	mov		rax, -1
	ret

