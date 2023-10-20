; 101-hello_holberton.asm

section .data
hello db 'Hello, Holberton', 0xA ; Define the message

section .text
global _start

_start:
    ; Write the message to stdout
    mov rax, 4
    mov rdi, 1
    mov rsi, hello
    mov rdx, 16
    syscall

    ; Exit the program
    mov rax, 1
    mov rdi, 0
    syscall
