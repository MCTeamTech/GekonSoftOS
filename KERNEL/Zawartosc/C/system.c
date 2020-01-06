#include "../H/system.h"
#include "../H/Definicje.h"
uint8 Wejsciep (uint16 port)
{
    	uint8 zwrot;
    	__asm__ __volatile__ ("inb %1, %0" : "=a" (zwrot) : "dN" (port));
    	return zwrot;
}

void Wyjsciep (uint16 port, uint8 dane)
{
	__asm__ __volatile__ ("outb %1, %0" : : "dN" (port), "a" (dane));
}
