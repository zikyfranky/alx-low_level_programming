section.data
	message db 'Hello, Holberton',0
	format db '%s', 10, 0

section.text 
	global main

	extern printf

main:
	; Prepare arguments for printf function
    mov rdi, format
    mov rsi, message
    xor rax, rax

    ;Call printf function
	call printf

	;Exit the program
	xor eax, eax
	ret