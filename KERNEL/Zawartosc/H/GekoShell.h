#ifndef GEKOSHELL_H
#define GEKOSHELL_H

#include "Sterowniki/Funkcje.h"
#include "Sterowniki/Znaki.h"
#include "RdzenLib.h"
#include "Sterowniki/Klawisze.h"
//#include "Zawartosc/H/Konwersja.h"
#include "NapisyGraf.h"
#include "system.h"
#include "Sterowniki/Grafika.h"
#include "Ladowanie.h"
#include "TrybyGraf.h"
#include "GekoShell.h"
#include "Awaria.h"

void Shell()
{
        Wyczysc();
         string znak = Czytaj();

       Wypisz(">>>GekonSoftOS!!<<<\n Wpisz komende:\n");
       while(1)
       { 
               Wyczysc();
                Wypisz("\nGeko>");
                Wypisz(znak);
             

                if(StringE(znak, "graph"))
                {
                        Graf_Loading();
                      
                }

                else if(StringE(znak,"czysc"))
                {
                        Wyczysc();
                        Wypisz(">>>GekonSoftOS!!<<<\n Wpisz komende:\n");
                   
                }

                else if(StringE(znak,"cmd"))
                {
                        Wypisz("\nWlasciwie, to jestes w cmd....");
           
                       
                }

                else if(StringE(znak,"chk"))
                {
                        Wypisz("\nSystem plikow: FAT\n Rozmiar dysku:0,0000000000000000000000000000 MB");
                       
                }

                else if(StringE(znak,"menu"))
                {
                        Menu();
                       
                }

		else if(StringE(znak,"grafika"))
                {
                        Tabelka(); 
                }

                else if(StringE(znak,"czesc"))
                {
                        Wypisz("\nCzesc!\n");
                }

                else if(StringE(znak,"pomoc"))
                {
                    Wypisz("\n1. cmd       : Wlacz kolejne okno cmd ");
          	        Wypisz("\n2. czysc     : Wyczysc cmd ");
	                Wypisz("\n3. pomoc     : Wyswietl polecenia GekonSoftOS ");
	                Wypisz("\n4. cpukill   : Zakoncz proces odpowiedzialny za wspolprace z procesorem");
                    Wypisz("\n5. grafika   : Przelacz w tryb graficzny systemu");
                    Wypisz("\n6. czesc     : Przywitaj sie z systemem\n");
                }

                else if(StringE(znak,"kalkulator"))
                {
                    Wypisz("\nBlad: Polecenie nie zaimplementowane!\n");
        
                }

                else if(StringE(znak,"cpukill"))
                {    
                      YellowScreenProvoder();
                }

                else
                {
                        Wypisz("\nBledne polecenie!\n");
                        Wypisz(znak);
                }
                
       }

}
     
#endif
