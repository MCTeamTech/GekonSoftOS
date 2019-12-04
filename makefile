KOMPC = gcc
LINKER = ld
KOMPASM = nasm
C = -m32 -c -ffreestanding
ASM = -f elf32
LINK = -m elf_i386 -T src/link.ld

OBIEKTY =


obiekty/RASM.o:GekonSoft/bootloader/Boot.asm
	$(KOMPASM) $(ASM) -o obj/kasm.o KERNEL/Zawartosc/C/NapisyGraf.c
	
obiekty/RC.o:KERNEL/RdzenC.c
	$(KOMPC) $(C) KERNEL/RdzenC.c -o obiekty/RC.o
	
obiekty/NapisyGraf.o:KERNEL/Zawartosc/C/NapisyGraf.c
	$(KOMPC) $(C) KERNEL/Zawartosc/C/NapisyGraf.c -o obiekty/NapisyGraf.o

obiekty/RdzenLib.o:KERNEL/Zawartosc/C/RdzenLib.c
	$(KOMPC) $(C) KERNEL/Zawartosc/C/RdzenLib.c -o obiekty/RdzenLib.o

obiekty/system.o:KERNEL/Zawartosc/C/system.c
	$(KOMPC) $(C) KERNEL/Zawartosc/C/system.c -o obiekty/system.o
