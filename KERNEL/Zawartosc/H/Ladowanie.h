#ifndef LADOWANIE_H
#define LADOWANIE_H
#include "Sterowniki/Grafika.h"
#include "Definicje.h"
void Lad() 
{

  uint32 i=25;
//Tabelka ładowanie
     DoLini(30, 3);
  WypiszWKolorze(">>>GekonSoftOS<<<", BIALY, CZARNY);
  DoLini(i, 4);
  WypiszWKolorze(" __________________________", BIALY, CZARNY);
  DoLini(i, 6);
  WypiszWKolorze(" __________________________", BIALY, CZARNY);
  //Dynia
  DoLini(1, 8);
  WypiszWKolorze("                                      .,'", ZOLTY, CZARNY);
  DoLini(1, 9);
  WypiszWKolorze("                                   .'`.'", ZOLTY, CZARNY);
  DoLini(1, 10);
  WypiszWKolorze("                                  .' .'", ZOLTY, CZARNY);
 DoLini(1, 11);
  WypiszWKolorze("                      _.ood0Pp._ ,'  `.~ .q?00doo._", ZOLTY, CZARNY);
 DoLini(1, 12);
  WypiszWKolorze("                  .od00Pd0000Pdb._. . _:db?000b?000bo.", ZOLTY, CZARNY);
 DoLini(1, 13);
  WypiszWKolorze("                .?000Pd0000PP?000PdbMb?000P??000b?0000b.", ZOLTY, CZARNY);
   DoLini(1, 14);
  WypiszWKolorze("              .d0000Pd0000P'  `?0Pd000b?0'  `?000b?0000b", ZOLTY, CZARNY);
   DoLini(1, 15);
  WypiszWKolorze("             .d0000Pd0000?'     `?d000b?'     `?00b?0000b.", ZOLTY, CZARNY);
 DoLini(1, 16);
  WypiszWKolorze("             d00000Pd0000Pd0000Pd00000b?00000b?0000b?0000b", ZOLTY, CZARNY);
 DoLini(1, 17);
  WypiszWKolorze("             ?00000b?0000b?0000b?b    dd00000Pd0000Pd0000P", ZOLTY, CZARNY);
   DoLini(1, 18);
  WypiszWKolorze("             `?0000b?0000b?0000b?0b  dPd00000Pd0000Pd000P'", ZOLTY, CZARNY);
     DoLini(1, 19);
  WypiszWKolorze("              `?0000b?0000b?0000b?0bd0Pd0000Pd0000Pd000P'", ZOLTY, CZARNY);
     DoLini(1, 20);
  WypiszWKolorze("                `?000b?00bo.   `?P'  `?P'   .od0Pd000P'", ZOLTY, CZARNY);
     DoLini(1, 21);
  WypiszWKolorze("                  `~?00b?000bo._  .db.  _.od000Pd0P~'", ZOLTY, CZARNY);
     DoLini(1, 22);
  WypiszWKolorze("                      `~?0b?0b?000b?0Pd0Pd000PdP~'", ZOLTY, CZARNY);
     DoLini(1, 23);
  WypiszWKolorze("", BIALY, CZARNY);


  for(uint32 x =0; x<=25; x++) //Pętla, pasek ładowania
  { 
   i++;
    DoLini(i, 5);
    WypiszWKolorze("|", ZIELON, ZIELON);
    Poczekaj(9);

  }

}

#endif