#ifndef KONWERSJA_H
#define KONWERSJA_H
#include "system.h"
#include "Sterowniki/Znaki.h"
#include "Sterowniki/Funkcje.h"
#include "Definicje.h"


void intDochar(int n, char str[]) {          
    int i, sign;
    if ((sign = n) < 0) n = -n;
    i = 0;
    do {
        str[i++] = n % 10 + '0';         
    } while ((n /= 10) > 0);

    if (sign < 0) str[i++] = '-';
    str[i] = '\0';

    /* TODO: implement "reverse" */
    return str;
}
string intDostring(int n)
{
	string ch = Czytaj();;
	intDochar(n,ch);
	int dlug = dlugosc(ch);
	int x = 0;
	int dlugzer = dlug - 1;
	while(x<(dlug/2 + dlug%2))
	{
		char tmp = ch[x];
		ch[x] = ch[dlugzer];
		ch[dlugzer] = tmp;
		x++;
		dlugzer--;
	}
	return ch;
}

int stringDoint(string ch)
{
	int p = 1;
	int n = 0;
	int strdlug = dlugosc(ch);
	for (int i = strdlug-1;i>=0;i--)
	{
		n += ((int)(ch[i] - '0')) * p;
		p *= 10;
	}
	return n;
}

#endif