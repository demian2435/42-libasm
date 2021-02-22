;0x2000004 MAC
;1 LINUX
;fd = rdi, buffer = rsi, bytes = rdx

section		.text
extern		__errno_location
global		ft_write	

ft_write:
	mov		rax, 1
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