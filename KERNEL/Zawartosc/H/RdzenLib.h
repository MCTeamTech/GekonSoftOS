#ifndef KERNEL_H
#define KERNEL_H

#include "types.h"
#include "Sterowniki/Klawisze.h"

#define NULL 0
#define ADRES_GRAFIKI 0xB8000
#define ROZMIARBUFORU 2200
#define KWADRATI 1
#define KWADRATII 2
#define SZEROKOSCBOX 78
#define WYSOKOSCBOX 30

uint16* bufor;

enum koloryGraf {
    CZARNY,
    NIEB,
    ZIELON,
    CYAN,
    CZER,
    MAGENTA,
    BRZ,
    SZARY,
    C_SZARY,
    J_NIEB,
    J_ZIELON,
    J_CYAN,
    J_CZER,
    J_MAGENTA,
    ZOLTY,
    BIALY,
    POMARANCZ,
};



extern byte SczytajKlawisz(); //Zczytanie wejścia

uint8 inb(uint16 port);

void outb(uint16 port, uint8 data);

byte SczytajKlawisz(); //Zczytanie wejścia
   

#endif
