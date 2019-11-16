#include "../H/types.h"
#include "../H/Sterowniki/Klawisze.h"
#include "../H/RdzenLib.h"

uint8 inb(uint16 port)
{
  uint8 ret;
  asm volatile("inb %1, %0" : "=a"(ret) : "d"(port));
  return ret;
}

void outb(uint16 port, uint8 data)
{
  asm volatile("outb %0, %1" : "=a"(data) : "d"(port));
}

byte SczytajKlawisz()
{
  byte keycode = 0;
  while((keycode = inb(KEYBOARD_PORT)) != 0){
    if(keycode > 0)
      return keycode;
  }
  return keycode;
}

