
bits            32 ;tryb 32  bit
section         .text
start:

pusha

mov ah, 0x02
mov dl, 0x80 ;0x80 - QEMU
mov ch, 0
mov dh, 0
mov al, 1
mov cl, 2

push bx

mov bx, 0
mov es, bx
pop bx
mov bx, 0x7c00 + 512
int 0x13

times 512 db 0