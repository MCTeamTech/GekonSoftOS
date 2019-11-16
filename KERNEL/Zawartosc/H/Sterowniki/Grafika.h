#ifndef GRAFIKA_H
#define GRAFIKA_H

#include "Funkcje.h"
#include "Znaki.h"
#include "Klawisze.h"
#include "../NapisyGraf.h"
#include "../system.h"
#include "../RdzenLib.h"

 uint32 NumerVGA;
static uint32 NowaliniaNum = 1;
uint8 KolorBPrzod = BIALY, KolorBTyl = NIEB;
int Kod_ASCII_HEX [10] = //cyfry
{
0x30, //0
 0x31, //1
  0x32, //2
   0x33, 
    0x34,
     0x35,
      0x36,
       0x37,
        0x38, //8
         0x39 //9
              };

void WyczyscPamiec(uint16 **BuforP, uint8 KolorPrzod, uint8 KolorTyl)
{
  uint32 i;
  for(i = 0; i < ROZMIARBUFORU; i++){
    (*BuforP)[i] = WpisGraf(NULL, KolorPrzod, KolorTyl);
  }
  NowaliniaNum = 1;
  NumerVGA = 0;
}


void TrybGraf(uint8 KolorPrzod, uint8 KolorTyl)
{  
  bufor = (uint16*)ADRES_GRAFIKI;
  WyczyscPamiec(&bufor, KolorPrzod, KolorTyl);
  KolorBPrzod = KolorPrzod;
  KolorBTyl = KolorTyl;
}

void NowaLinia()
{
  if(NowaliniaNum >= 55){
    NowaliniaNum = 0;
    WyczyscPamiec(&bufor, KolorBPrzod, KolorBTyl);
  }
  NumerVGA = 80*NowaliniaNum;
  NowaliniaNum++;
}

void WypiszZnakCH(char ch)
{
  bufor[NumerVGA] = WpisGraf(ch, KolorBPrzod, KolorBTyl);
  NumerVGA++;
}

void WypiszCiag(char *str)
{
  uint32 index = 0;
  while(str[index]){
    WypiszZnakCH(str[index]);
    index++;
  }
}

void WypiszWKolorze(char *str, uint8 KolorPrzod, uint8 KolorTyl)
{
  uint32 index = 0;
  uint8 fc, bc;
  fc = KolorBPrzod;
  bc = KolorBTyl;
  KolorBPrzod = KolorPrzod;
  KolorBTyl = KolorTyl;
  while(str[index]){
    WypiszZnakCH(str[index]);
    index++;
  }
  KolorBPrzod = fc;
  KolorBTyl = bc;
}

void DoLini(uint16 x, uint16 y)
{
  NumerVGA = 80*y;
  NumerVGA += x;
}

void WyrysujBoxa(uint16 x, uint16 y, 
                      uint16 szer, uint16 wys,
                      uint8 KolorPrzod, uint8 KolorTyl,
                      uint8 GoraLewo,
                      uint8 graorycerzyku,
                      uint8 PrawoGora,
                      uint8 PrawoILewo,
                      uint8 Goetel,
                      uint8 PrawoDol)
{
  uint32 i;


  NumerVGA = 80*y;
  NumerVGA += x;


  bufor[NumerVGA] = ZnaknaBoxie(GoraLewo, KolorPrzod, KolorTyl);

  NumerVGA++;

  for(i = 0; i < wys; i++){
    bufor[NumerVGA] = ZnaknaBoxie(graorycerzyku, KolorPrzod, KolorTyl);
    NumerVGA++;
  }


  bufor[NumerVGA] = ZnaknaBoxie(PrawoGora, KolorPrzod, KolorTyl);

  y++;
  NumerVGA = 80*y;
  NumerVGA += x;
  for(i = 0; i < wys; i++){
    bufor[NumerVGA]=ZnaknaBoxie(PrawoILewo, KolorPrzod, KolorTyl);
    NumerVGA++;
    NumerVGA += wys;
    bufor[NumerVGA]=ZnaknaBoxie(PrawoILewo, KolorPrzod, KolorTyl);
    y++;
    NumerVGA = 80*y;
    NumerVGA += x;
  }
  bufor[NumerVGA] = ZnaknaBoxie(Goetel, KolorPrzod, KolorTyl);
  NumerVGA++;
  for(i = 0; i < wys; i++){
    bufor[NumerVGA] = ZnaknaBoxie(graorycerzyku, KolorPrzod, KolorTyl);
    NumerVGA++;
  }
  bufor[NumerVGA] = ZnaknaBoxie(PrawoDol, KolorPrzod, KolorTyl);

NumerVGA = 0; 
}


void ZbudujKwadrat(uint8 boxtype, 
              uint16 x, uint16 y, 
              uint16 szer, uint16 wys,
              uint8 KolorPrzod, uint8 KolorTyl)
{
  szer=30;
  switch(boxtype){
    case KWADRATI: 
      WyrysujBoxa(x, y, szer, wys, 
                      KolorPrzod, KolorTyl, 
                      218, 196, 191, 179, 192, 217);
      break;

    case KWADRATII : 
      WyrysujBoxa(x, y, szer, wys, 
                      KolorPrzod, KolorTyl, 
                      201, 205, 187, 186, 200, 188);
      break;
  }
}

//Wypełnienie kwadratów i ekranu kolorem
void Wypelnienie(uint8 ch, uint16 pozycjax, uint16 pozycjay, uint16 szerokosc, uint16 wysokosc, uint8 kolor)
{
  uint32 i,j;

  for(i = 0; i < wysokosc; i++){
    NumerVGA = 80*pozycjay;
    NumerVGA += pozycjax;

    for(j = 0; j < szerokosc; j++){
      bufor[NumerVGA] = ZnaknaBoxie(ch, 0, kolor);
      NumerVGA++;
    }
    pozycjay++;
  }
}

#endif