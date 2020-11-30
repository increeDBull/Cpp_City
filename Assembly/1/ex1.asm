; global _start
; _start:
;     mov eax, 1
;     mov ebx, 42
;     int 0x80
    w
;elf = executable and linking format

dosseg ; for auto managing segments


.model small
.stack 100h

.data 
;variables are defined here

.code 
;all instruction are written here

Main proc ; procedure starts // proc is name

Mov dl, 'A' ; data register
Mov ah, 2   ; accumulater register
INT 21h
Mov ah, 4ch
INT 21h  


Main endp ; procedure ends


End Main 
