#ifndef TRYBYGRAF_H
#define TRYBYGRAF_H

#include "Sterowniki/Grafika.h"
#include "Sterowniki/Klawisze.h"
#include "Sterowniki/Znaki.h"
#include "Ladowanie.h"

//GekonSoftShell

void Uruchom_Nkl_Graf() //Tryb Graficzny dla użytkownika (Nakładka GekonSoftShell)
{
  Wypelnienie(0, 0, 0, WYSOKOSCBOX - 100, 78, ZIELON);
  ZbudujKwadrat(KWADRATII, 0, 0, WYSOKOSCBOX - 50, 78, BIALY, ZIELON);
while(1)
{
  DoLini(2, 1);
  WypiszWKolorze("Witaj w nakladce graficznej na GekonSoftOS!", J_ZIELON, ZIELON);

  DoLini(2, 3);
  WypiszWKolorze("Graficzna strona GekonSoftOS jest dopiero w ", BIALY, ZIELON);

  DoLini(2, 4);
  WypiszWKolorze("poczatkowej fazie tworzenia!", BIALY, ZIELON);
  
  DoLini(2, 5);
  WypiszWKolorze("Prosimy o wyrozumialosc!", ZOLTY, ZIELON);

  DoLini(2, 6);
  WypiszWKolorze("Aby uzyskac wiecej pomocy wpisz: ", BIALY, ZIELON);
  
  DoLini(35, 6);
  WypiszWKolorze("POMOC", ZOLTY, ZIELON);

  DoLini(2, 8);
  WypiszWKolorze("Jest to powloka GEKON_SHELL_RGB", BIALY, ZIELON);
  
  DoLini(2, 9);
  WypiszWKolorze("Dzialajaca dzieki sterownikowi GEV", J_ZIELON, ZIELON);

   
  DoLini(2, 10);
  WypiszWKolorze("System zostal zaprojektowany i wykonany przez Jakuba Siwca!", J_ZIELON, ZIELON);
  Zaczekaj(10);
  Funkcja_Glowna();
}
}


void MenuGraficzne()
{
  byte keycode = 0;
  uint16 c=1;
  do{
    keycode=1;
    keycode = SczytajKlawisz();

    switch(keycode){

      case KEY_DOWN :
      
           if(c==1)
      {
        c=0;
      }
      else
      {
        c=1;
      }
      
        break;

      case KEY_UP :
       
           if(c==1)
      {
        c=0;
      }
      else
      {
        c=1;
      }
      
        break;

      case KEY_ENTER :
       
        if(c==1)
        {
          DoLini(10, 9);
  WypiszWKolorze("Kalkulator ", BIALY, ZIELON);
        }
        else if (c==0)
        {
            DoLini(10, 9);
  WypiszWKolorze("Rewers     ", BIALY, ZIELON);
        }
        break;
    }
    keycode=1;

    if(c==1)
    {
     DoLini(1, 1);
  WypiszWKolorze("Kalkulator", BIALY, ZIELON);
  DoLini(1, 2);
  WypiszWKolorze("Rewers", BIALY, CZARNY);
    }
    else
    {
         DoLini(1, 1);
  WypiszWKolorze("Kalkulator", BIALY, CZARNY);
  DoLini(1, 2);
  WypiszWKolorze("Rewers", BIALY, ZIELON);
    }
    
     Poczekaj(30);
    keycode=1;

  }while(keycode > 0);
}

void Menu() //Przejscie w tryb graficznego menu
{
  TrybGraf(BIALY, CZARNY);
  
  MenuGraficzne();
}

void Tabelka() //Przejscie w tryb graficzny dla użytkownika
{
  TrybGraf(BIALY, CZARNY);
  
  Uruchom_Nkl_Graf();
}

void Graf_Loading() //Ładowanie graficznie
{
  TrybGraf(BIALY, CZARNY);
  
  Lad();
}


void YellowScreen()
{
  TrybGraf(BIALY, CZARNY);
  
  YellowScreenA();
}

#endif
