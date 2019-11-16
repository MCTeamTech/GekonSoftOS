#include "../H/NapisyGraf.h"
#include "../H/types.h"
#include "../H/Definicje.h"
uint16 WpisGraf(unsigned char ch, uint8 KolorPrzod, uint8 KolorTyl) 
{
  uint16 ax = 0;
  uint8 ah = 0, al = 0;

  ah = KolorTyl;
    ah <<= 4;
  ah |= KolorPrzod;
  ax = ah;
    ax <<= 8;
  al = ch;
  ax |= al;

  return ax;
}

uint16 ZnaknaBoxie(uint8 chn, uint8 KolorPrzod, uint8 KolorTyl)
{
  uint16 ax = 0;
  uint8 ah = 0;

  ah = KolorTyl;
    ah <<= 4;
  ah |= KolorPrzod;
  ax = ah;
    ax <<= 8;
  ax |= chn;

  return ax;
}
