;Hello_world

;Author: Atul raj

global _start

section .text:
_start:
    mov eax, 0x4                    ; use for writing 
    mov ebx, 1                      ; use as stdout for fd(file descriptor)
    mov ecx, message                ;use message as buffer
    mov edx, message_length         ;and supply the length

    int 0x80                        ; invoke syscall

    mov eax, 0x1
    mov ebx, 0
    int 0x80

section .data:
    message: db "Hello world!!", 0xA
    message_length equ $-message  