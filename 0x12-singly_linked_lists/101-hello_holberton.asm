section .data
	message db 'Hello, Holberton',0
	format db '%s',10,0

section .text
	global main

	extern printf

main:
	push rbp
	mov rbp, rsp

	; Call printf with message and format arguments
	mov rdi, format
	mov rsi, message
	xor rax, rax
	call printf

	; Exit the program with 0 status
	xor eax, eax
	pop rbp
	ret
