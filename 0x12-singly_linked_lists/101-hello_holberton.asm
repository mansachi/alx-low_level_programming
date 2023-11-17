; A program for file 101-hello_holberton.asm ;

section .data
    format db "Hello, Holberton",0 ; This will print Hello, Holberton ;
    new_line db 10,0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, format
    call printf
    mov rdi, new_line
    call printf
    pop rbp
    mov rax, 0x60
    xor rdi, rdi
    syscall
