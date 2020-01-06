#ifndef ZNAKI_H
#define ZNAKI_H
#include "Funkcje.h"
#include "../system.h"
#include "../Definicje.h"

string Czytaj()
{
    uint8 Sczytanie = 1;
    char buffor;
    uint8 i = 0;
    string Znak;

    while(Sczytanie)
    {
        if(Wejsciep(0x64) & 0x1)                 
        {
            switch(Wejsciep(0x60))
            { 
        case 2:
                WypiszZnak('1');
                Znak[i] = '1';
                i++;
                break;
        case 3:
                WypiszZnak('2');
                Znak[i] = '2';
                i++;
                break;
        case 4:
                WypiszZnak('3');
                Znak[i] = '3';
                i++;
                break;
        case 5:
                WypiszZnak('4');
                Znak[i] = '4';
                i++;
                break;
        case 6:
                WypiszZnak('5');
                Znak[i] = '5';
                i++;
                break;
        case 7:
                WypiszZnak('6');
                Znak[i] = '6';
                i++;
                break;
        case 8:
                WypiszZnak('7');
                Znak[i] = '7';
                i++;
                break;
        case 9:
                WypiszZnak('8');
                Znak[i] = '8';
                i++;
                break;
        case 10:
                WypiszZnak('9');
                Znak[i] = '9';
                i++;
                break;
        case 11:
                WypiszZnak('0');
                Znak[i] = '0';
                i++;
                break;
        case 12:
                WypiszZnak('-');
                Znak[i] = '-';
                i++;
                break;
        case 13:
                WypiszZnak('=');
                Znak[i] = '=';
                i++;
                break;
        case 14:
                WypiszZnak('\b');
                i--;
                Znak[i] = 0;
                break;
        case 15:
                WypiszZnak('\t');          
                Znak[i] = '\t';
                i++;
                break;
        case 16:
                WypiszZnak('q');
                Znak[i] = 'q';
                i++;
                break;
        case 17:
                WypiszZnak('w');
                Znak[i] = 'w';
                i++;
                break;
        case 18:
                WypiszZnak('e');
                Znak[i] = 'e';
                i++;
                break;
        case 19:
                WypiszZnak('r');
                Znak[i] = 'r';
                i++;
                break;
        case 20:
                WypiszZnak('t');
                Znak[i] = 't';
                i++;
                break;
        case 21:
                WypiszZnak('y');
                Znak[i] = 'y';
                i++;
                break;
        case 22:
                WypiszZnak('u');
                Znak[i] = 'u';
                i++;
                break;
        case 23:
                WypiszZnak('i');
                Znak[i] = 'i';
                i++;
                break;
        case 24:
                WypiszZnak('o');
                Znak[i] = 'o';
                i++;
                break;
        case 25:
                WypiszZnak('p');
                Znak[i] = 'p';
                i++;
                break;
        case 26:
                WypiszZnak('[');
                Znak[i] = '[';
                i++;
                break;
        case 27:
                WypiszZnak(']');
                Znak[i] = ']';
                i++;
                break;
       case 28:
                WypiszZnak('\n');
                Znak[i] = '\n';
                  i++;
               Sczytanie = 0;
                break;
        case 30:
                WypiszZnak('a');
                Znak[i] = 'a';
                i++;
                break;
        case 31:
                WypiszZnak('s');
                Znak[i] = 's';
                i++;
                break;
        case 32:
                WypiszZnak('d');
                Znak[i] = 'd';
                i++;
                break;
        case 33:
                WypiszZnak('f');
                Znak[i] = 'f';
                i++;
                break;
        case 34:
                WypiszZnak('g');
                Znak[i] = 'g';
                i++;
                break;
        case 35:
                WypiszZnak('h');
                Znak[i] = 'h';
                i++;
                break;
        case 36:
                WypiszZnak('j');
                Znak[i] = 'j';
                i++;
                break;
        case 37:
                WypiszZnak('k');
                Znak[i] = 'k';
                i++;
                break;
        case 38:
                WypiszZnak('l');
                Znak[i] = 'l';
                i++;
                break;
        case 39:
                WypiszZnak(';');
                Znak[i] = ';';
                i++;
                break;
        case 40:
                WypiszZnak((char)44);   
                Znak[i] = (char)44;
                i++;
                break;
        case 41:
                WypiszZnak((char)44);
                Znak[i] = (char)44;
                i++;
                break;
     case 42:                            
                WypiszZnak('q');
                Znak[i] = 'q';
                i++;
                break;
        case 43:                                
                WypiszZnak((char)92);
                Znak[i] = 'q';
                i++;
                break;
        case 44:
                WypiszZnak('z');
                Znak[i] = 'z';
                i++;
                break;
        case 45:
                WypiszZnak('x');
                Znak[i] = 'x';
                i++;
                break;
        case 46:
                WypiszZnak('c');
                Znak[i] = 'c';
                i++;
                break;
        case 47:
                WypiszZnak('v');
                Znak[i] = 'v';
                i++;
                break;                
        case 48:
                WypiszZnak('b');
                Znak[i] = 'b';
                i++;
                break;               
        case 49:
                WypiszZnak('n');
                Znak[i] = 'n';
                i++;
                break;                
        case 50:
                WypiszZnak('m');
                Znak[i] = 'm';
                i++;
                break;               
        case 51:
                WypiszZnak(',');
                Znak[i] = ',';
                i++;
                break;                
        case 52:
                WypiszZnak('.');
                Znak[i] = '.';
                i++;
                break;            
        case 53:
                WypiszZnak('/');
                Znak[i] = '/';
                i++;
                break;            
        case 54:
                WypiszZnak('.');
                Znak[i] = '.';
                i++;
                break;            
        case 55:
                WypiszZnak('/');
                Znak[i] = '/';
                i++;
                break;                      
        case 57:
                WypiszZnak(' ');
                Znak[i] = ' ';
                i++;
                break;
            }
        }
    }
    Znak[i] = 0;                   
    return Znak;
}


#endif
