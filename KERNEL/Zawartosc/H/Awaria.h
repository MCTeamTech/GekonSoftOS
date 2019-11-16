#ifndef AWARIA_H
#define AWARIA_H
#include "../H/Sterowniki/Grafika.h"
void YellowScreen()
{
  //Tekst
  Wypelnienie(0, 0, 0, WYSOKOSCBOX - 100, 78, ZOLTY);
  DoLini(1, 1);
  WypiszWKolorze(":(", CZER, ZOLTY);
  DoLini(18, 2);
  WypiszWKolorze("GekonSoft napotkal blad podczas dzialania!", CZER, ZOLTY);
  DoLini(20, 3);
  WypiszWKolorze("Prosimy ponownie uruchomic urzadzenie!", CZER, ZOLTY);
  DoLini(1, 4);
  WypiszWKolorze("Jesli blad bedzie sie powtarzal, prosimy o kontakt z pomoca techniczna G.S.", CZER, ZOLTY);
  DoLini(1, 19);
  WypiszWKolorze("KOD BLEDU: 0x00F", CZER, ZOLTY);
  DoLini(1, 20);
  WypiszWKolorze("KOD BLEDU: HLT_ASM_PROC", CZER, ZOLTY);
  //Tekst
  asm("hlt"); //Zatrzymanie assemblerowskie
}

#endif