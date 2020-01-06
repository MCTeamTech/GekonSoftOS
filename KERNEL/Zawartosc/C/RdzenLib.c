#include "../H/Definicje.h"
#include "../H/Sterowniki/Klawisze.h"
#include "../H/RdzenLib.h"
#include "../H/system.h"

byte SczytajKlawisz()
{
  byte keycode = 0;
  while((keycode = Wejsciep (KEYBOARD_PORT)) != 0){
    if(keycode > 0)
      return keycode;
  }
  return keycode;
}

