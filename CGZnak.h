#ifndef CGZNAK_H
#define CGZNAK_H

#include "Definicje.h"
uint16 dlugosc(string znak)
{
        uint16 i = 1;
        while(znak[i++]);  
        return --i;
}

uint8 StringE(string znak1,string znak2)                     
{
        uint8 wynik = 1;
        uint8 wielkosc = dlugosc(znak2);
        if(wielkosc != dlugosc(znak2)) wynik =0;
        else 
        {
        uint8 i = 0;
        for(i;i<=wielkosc;i++)
        {
                if(znak1[i] != znak2[i]) wynik = 0;
        }
        }
        return wynik;
}


#endif
