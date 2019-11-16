bits            32 ;tryb 32  bit
section         .text

;%include "OdczytDysk.asm"

dd              0x1BADB002
dd              0x00
dd              - (0x1BADB002+0x00) ;suma kontrolna
global start
extern Funkcja_Glowna

start:
;Odblokowanie lini A20
call empty_8042 
mov al,0xD1 
out 0x64,al 
call empty_8042 
mov al,0xDF 
out 0x60,al 
call empty_8042 

empty_8042: 
dw 0xEB,0xEB 
in al,0x64 
test al,2 
jnz empty_8042
;Koniec odblokowywania
;wyzerowanie rejestrów
xor ax,ax
    mov ds,ax        
    mov es,ax     
    mov bx,0x8000 ;dostęp do danych pamięci (BX)
;koniec zerowania rejestrów

        cli
        call Funkcja_Glowna ;Wywołanie funkcji głównej
        
        hlt ;Zatrzymanie
