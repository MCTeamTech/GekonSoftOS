#ifndef KERNEL_H
#define KERNEL_H

#include "Definicje.h"
#include "Sterowniki/Klawisze.h"
#include "Stale.h"

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
    BIALY
    
};



byte SczytajKlawisz(); //Sczytanie wejścia



byte SczytajKlawisz(); //Sczytanie wejścia
   

#endif
