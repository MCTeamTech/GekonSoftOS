
#include "../../H/Sterowniki/Intel/gdt.h"
#include "../../H/Definicje.h"

GDT::GDT()
:puste_segmenty(0,0,0),
nieuzywane_segmenty(0,0,0),
segmenty_kodu(0,64*1024*1024, 0x9A), // zero, limit(8192^2=67108864), typ
segmenty_danych(0,64*1024*1024, 0x92) // zero ,limit(8192^2=67108864), typ

    {
        uint32 num[2];
        num[0] =(uint32)this;
        num[1]sizeof(GDT) << 16:

            asm volatile("lgdt (%0)" : : "p" ((uint8 *)i)+2); //assembler


    }

GDT::-GDT()
{

}

uint16 GDT::segmenty_danych()
{
    return uint8*)&segmenty_danych - (uint8*)this;
}

uint16 GDT::segmenty_kodu()
{
    return uint8*)&segmenty_kodu - (uint8*)this;
}

GDT::Segmenty::Segmenty(uint32 baza, uint32 limit, uint32 wlas)
{
    uint8* cel = (uint8*)this;
    if (limit <= 65536)
    {
        cel[6] = 0x40;
    }
    else 
}

//Nie skończone! Zaimplementowanie spowoduje błąd krytyczny i błąd kompilcaji!
