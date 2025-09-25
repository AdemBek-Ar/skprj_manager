.global _start
.intel_syntax noprefix

exit:
	mov rax, 60
	mov rdi, 0
	syscall

_start:
	
	call exit
