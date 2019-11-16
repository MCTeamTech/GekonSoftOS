#include "Zawartosc/H/Sterowniki/Funkcje.h"
#include "Zawartosc/H/Sterowniki/Znaki.h"
#include "Zawartosc/H/RdzenLib.h"
#include "Zawartosc/H/Sterowniki/Klawisze.h"
#include "Zawartosc/H/Konwersja.h"
#include "Zawartosc/H/NapisyGraf.h"
#include "Zawartosc/H/system.h"
#include "Zawartosc/H/CgZnak.h"
#include "Zawartosc/H/Awaria.h"
#include "Zawartosc/H/Ladowanie.h"
#include "Zawartosc/H/TrybyGraf.h"
#include "Zawartosc/H/Sterowniki/Grafika.h"

Funkcja_Glowna()
{

Graf_Loading();
int cmd = 0;
//GekoShell

      Wyczysc();
       Wypisz(">>>GekonSoft\tOS!!<<<\n Wpisz komende:\n");
       while (1)
       {
         if(cmd == 0)
         {WypiszDwa("\nGeko", "(0)>");}
         else if (cmd == 1)
         {WypiszDwa("\nGeko", "(1)>");}
         else if (cmd == 2)
         {WypiszDwa("\nGeko", "(2)>");}
               

                //Komendy
                string znak = Czytaj();
               
           
                if(PorStr(znak,"graph\n"))
                {
                        Graf_Loading();
                        Wyczysc();
                        Wypisz(">>>GekonSoftOS!!<<<\n Wpisz komende:\n");
                }

                else if(PorStr(znak,"czysc\n"))
                {
                        Wyczysc();
                        Wypisz(">>>GekonSoftOS!!<<<\n Wpisz komende:\n");
                }

                else if(PorStr(znak,"cmd\n"))
                {
                        if (cmd <= 1)
                        {
                          Wypisz("Otwieram noe cmd!\n");
                          cmd++;
                        }
                        else
                        {
                          Wypisz("Nie mozna otworzyc wiecej cmd...\n");
                        }  
			
                 }

                else if (PorStr(znak, "cmdshtdwn\n"))
                  {
                        if (cmd >= 1)
                        {
                          Wypisz("Zamykam cmd!\n");
                          cmd--;
                        }
                        else
                        {
                          Wypisz("Nie mozna zamknac wiecej cmd!\n");
                        }  
                  }

                else if(PorStr(znak,"menu\n"))
                {
                        Menu();
                       
                }

	         else if(PorStr(znak,"graphic\n"))
                {
                        Tabelka(); 
                }

                else if(PorStr(znak,"czesc\n"))
                {
                        Wypisz("\nCzesc!\n");
                        
                } 

                else if(PorStr(znak,"pomoc\n"))
                {
                    Wypisz("\n1. cmd       : Wlacz kolejne okno cmd ");
          	    Wypisz("\n2. czysc     : Wyczysc cmd ");
	            Wypisz("\n3. pomoc     : Wyswietl polecenia GekonSoftOS ");
	            Wypisz("\n4. cpukill   : Zakoncz proces odpowiedzialny za wspolprace z prockiem ");
                    Wypisz("\n5. menu      : Uruchom powloke graficzna systemu (w fazie testow). \n");
                }

                else if(PorStr(znak,"cpukill\n"))
                {
                      YellowScreenProvoder();
                }
                
                else
                {
                        Wypisz("\nBledne polecenie = ");
                        Wypisz(znak);
                }
       }
}
