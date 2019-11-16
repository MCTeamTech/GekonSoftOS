#ifndef ZNAKI_H
#define ZNAKI_H
#include "Funkcje.h"
#include "../system.h"
#include "../Definicje.h"

string Czytaj()
{
    char buffor;
    string bufforstr;
    uint8 i = 0;
    uint8 reading = 1;
    while(reading)
    {
        if(inportb(0x64) & 0x1)                 
        {
            switch(inportb(0x60))
            { 
        case 2:
                WypiszZnak('1');
                bufforstr[i] = '1';
                i++;
                break;
        case 3:
                WypiszZnak('2');
                bufforstr[i] = '2';
                i++;
                break;
        case 4:
                WypiszZnak('3');
                bufforstr[i] = '3';
                i++;
                break;
        case 5:
                WypiszZnak('4');
                bufforstr[i] = '4';
                i++;
                break;
        case 6:
                WypiszZnak('5');
                bufforstr[i] = '5';
                i++;
                break;
        case 7:
                WypiszZnak('6');
                bufforstr[i] = '6';
                i++;
                break;
        case 8:
                WypiszZnak('7');
                bufforstr[i] = '7';
                i++;
                break;
        case 9:
                WypiszZnak('8');
                bufforstr[i] = '8';
                i++;
                break;
        case 10:
                WypiszZnak('9');
                bufforstr[i] = '9';
                i++;
                break;
        case 11:
                WypiszZnak('0');
                bufforstr[i] = '0';
                i++;
                break;
        case 12:
                WypiszZnak('-');
                bufforstr[i] = '-';
                i++;
                break;
        case 13:
                WypiszZnak('=');
                bufforstr[i] = '=';
                i++;
                break;
        case 14:
                WypiszZnak('\b');
                i--;
                bufforstr[i] = 0;
                break;
        case 15:
                WypiszZnak('\t');          
                bufforstr[i] = '\t';
                i++;
                break;
        case 16:
                WypiszZnak('q');
                bufforstr[i] = 'q';
                i++;
                break;
        case 17:
                WypiszZnak('w');
                bufforstr[i] = 'w';
                i++;
                break;
        case 18:
                WypiszZnak('e');
                bufforstr[i] = 'e';
                i++;
                break;
        case 19:
                WypiszZnak('r');
                bufforstr[i] = 'r';
                i++;
                break;
        case 20:
                WypiszZnak('t');
                bufforstr[i] = 't';
                i++;
                break;
        case 21:
                WypiszZnak('y');
                bufforstr[i] = 'y';
                i++;
                break;
        case 22:
                WypiszZnak('u');
                bufforstr[i] = 'u';
                i++;
                break;
        case 23:
                WypiszZnak('i');
                bufforstr[i] = 'i';
                i++;
                break;
        case 24:
                WypiszZnak('o');
                bufforstr[i] = 'o';
                i++;
                break;
        case 25:
                WypiszZnak('p');
                bufforstr[i] = 'p';
                i++;
                break;
        case 26:
                WypiszZnak('[');
                bufforstr[i] = '[';
                i++;
                break;
        case 27:
                WypiszZnak(']');
                bufforstr[i] = ']';
                i++;
                break;
       case 28:
                WypiszZnak('\n');
                bufforstr[i] = '\n';
                  i++;
               reading = 0;
                break;
        /*case 29:
                WypiszZnak('q');           Left Control
                bufforstr[i] = 'q';
                i++;
                break;*/
        case 30:
                WypiszZnak('a');
                bufforstr[i] = 'a';
                i++;
                break;
        case 31:
                WypiszZnak('s');
                bufforstr[i] = 's';
                i++;
                break;
        case 32:
                WypiszZnak('d');
                bufforstr[i] = 'd';
                i++;
                break;
        case 33:
                WypiszZnak('f');
                bufforstr[i] = 'f';
                i++;
                break;
        case 34:
                WypiszZnak('g');
                bufforstr[i] = 'g';
                i++;
                break;
        case 35:
                WypiszZnak('h');
                bufforstr[i] = 'h';
                i++;
                break;
        case 36:
                WypiszZnak('j');
                bufforstr[i] = 'j';
                i++;
                break;
        case 37:
                WypiszZnak('k');
                bufforstr[i] = 'k';
                i++;
                break;
        case 38:
                WypiszZnak('l');
                bufforstr[i] = 'l';
                i++;
                break;
        case 39:
                WypiszZnak(';');
                bufforstr[i] = ';';
                i++;
                break;
        case 40:
                WypiszZnak((char)44);               //   Single quote (')
                bufforstr[i] = (char)44;
                i++;
                break;
        case 41:
                WypiszZnak((char)44);               // Back tick (`)
                bufforstr[i] = (char)44;
                i++;
                break;
     case 42:                            
                WypiszZnak('q');
                bufforstr[i] = 'q';
                i++;
                break;
        case 43:                                
                WypiszZnak((char)92);
                bufforstr[i] = 'q';
                i++;
                break;
        case 44:
                WypiszZnak('z');
                bufforstr[i] = 'z';
                i++;
                break;
        case 45:
                WypiszZnak('x');
                bufforstr[i] = 'x';
                i++;
                break;
        case 46:
                WypiszZnak('c');
                bufforstr[i] = 'c';
                i++;
                break;
        case 47:
                WypiszZnak('v');
                bufforstr[i] = 'v';
                i++;
                break;                
        case 48:
                WypiszZnak('b');
                bufforstr[i] = 'b';
                i++;
                break;               
        case 49:
                WypiszZnak('n');
                bufforstr[i] = 'n';
                i++;
                break;                
        case 50:
                WypiszZnak('m');
                bufforstr[i] = 'm';
                i++;
                break;               
        case 51:
                WypiszZnak(',');
                bufforstr[i] = ',';
                i++;
                break;                
        case 52:
                WypiszZnak('.');
                bufforstr[i] = '.';
                i++;
                break;            
        case 53:
                WypiszZnak('/');
                bufforstr[i] = '/';
                i++;
                break;            
        case 54:
                WypiszZnak('.');
                bufforstr[i] = '.';
                i++;
                break;            
        case 55:
                WypiszZnak('/');
                bufforstr[i] = '/';
                i++;
                break;            
      /*case 56:
                WypiszZnak(' ');           Right shift
                bufforstr[i] = ' ';
                i++;
                break;*/           
        case 57:
                WypiszZnak(' ');
                bufforstr[i] = ' ';
                i++;
                break;
            }
        }
    }
    bufforstr[i] = 0;                   
    return bufforstr;
}


#endif
