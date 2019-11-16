#ifndef FUNKCJE_H
#define FUNKCJE_H
#include "../Definicje.h"
#include "../system.h"
#include "../CgZnak.h"
int kursorX = 0, kursorY = 0;
const uint8 szerokoscS = 80,wysokoscS = 25,sd = 2;  

void Kursor()
{
    unsigned temp;

    temp = kursorY * szerokoscS + kursorX;                                                      // Position = (y * width) +  x

    outportb(0x3D4, 14);                                                                // CRT Control Register: Select kursor Location
    outportb(0x3D5, temp >> 8);                                                         // Send the high byte across the bus
    outportb(0x3D4, 15);                                                                // CRT Control Register: Select Send Low byte
    outportb(0x3D5, temp);                                                              // Send the Low byte of the kursor location
}
                                                   //We define the screen width, height, and depth.
void WyczyscLinia(uint8 from,uint8 to)
{
        uint16 i = szerokoscS * from * sd;
        string PamiecGraf=(string)0xb8000;
        for(i;i<(szerokoscS*to*sd);i++)
        {
                PamiecGraf[i] = 0x0;
        }
}



void Pom(uint8 NumerLinii)
{
        string PamVid = (string)0xb8000;
        uint16 i = 0;
        WyczyscLinia(0,NumerLinii-1);                                            //updated
        for (i;i<szerokoscS*(wysokoscS-1)*2;i++)
        {
                PamVid[i] = PamVid[i+szerokoscS*2*NumerLinii];
        } 
        WyczyscLinia(wysokoscS-1-NumerLinii,wysokoscS-1);
        if((kursorY - NumerLinii) < 0 ) 
        {
                kursorY = 0;
                kursorX = 0;
        } 
        else 
        {
                kursorY -= NumerLinii;
        }
        Kursor();
}



void NowaLiniaSp()
{
        if(kursorY >=wysokoscS-1)
        {
                Pom(1);
        }
}

void WypiszZnak(char c)
{
    string RozmGraf = (string) 0xb8000;     
    switch(c)
    {
        case (0x08):
                if(kursorX > 0) 
                {
	                kursorX--;									
                        RozmGraf[(kursorY * szerokoscS + kursorX)*sd]=0x00;	                              
	        }
	        break;
       
        case ('\r'):
                kursorX = 0;
                break;
        case ('\n'):
                kursorX = 0;
                kursorY++;
                break;
        default:
                RozmGraf [((kursorY * szerokoscS + kursorX))*sd] = c;
                RozmGraf [((kursorY * szerokoscS + kursorX))*sd+1] = 0x0F;
                kursorX++; 
                break;
	
    }
    if(kursorX >= szerokoscS)                                                                   
    {
        kursorX = 0;                                                                
        kursorY++;                                                                    
    }
    Kursor();
    NowaLiniaSp();
}

void Wypisz (string znak)
{
        uint16 i = 0;
        uint8 dlugoscstr = dlugosc(znak);              
        for(i;i<dlugoscstr;i++)
        {
                WypiszZnak(znak[i]);
        }
}

void WypiszDwa (string znak1, string znak2)
{
    uint16 i = 0;
        uint8 dlugoscstr = dlugosc(znak1);              
        for(i;i<dlugoscstr;i++)
        {
                WypiszZnak(znak1[i]);
        }

            uint16 x = 0;
        dlugoscstr = dlugosc(znak2);              
        for(x;x<dlugoscstr;x++)
        {
                WypiszZnak(znak2[x]);
        }
}

void WypiszC (uint32 cyfra)
{
        uint16 i = 0;
        uint32 dlugoscstring = dlugosc(cyfra)-1;              
        for(i;i<dlugoscstring;i++)
        {
                WypiszZnak(cyfra);
        }
}

void Wyczysc()
{
        WyczyscLinia(0,wysokoscS-1);
        kursorX = 0;
        kursorY = 0;
        Kursor();
}

void Zaczekaj(uint32 sekundy)
{

        for(uint32 i=0; i<=sekundy; i++)

        {

        for(uint32 y=0; y<=94000000; y++)
         {

         }

        }

}

void Poczekaj(uint32 czas)
{

        for(uint32 i=0; i<=czas; i++)

        {

        for(uint32 y=0; y<=900000; y++)
         {

         }

        }

}
/*
int color = 0x0F;

void set_screen_color(int text_color,int bg_color)
{
	color =  (bg_color << 4) | text_color;;
}
void set_screen_color_from_color_code(int color_code)
{
	color = color_code;
}
void print_colored(string ch,int text_color,int bg_color)
{
	int current_color = color;
	set_screen_color(text_color,bg_color);
	Wypisz(ch);
	set_screen_color_from_color_code(current_color);
}
*/


#endif
