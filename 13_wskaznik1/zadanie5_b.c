#include <stdio.h>
#include <math.h>

int main () {
int tab[512], licznik, liczba = 128, index = 0;
int *wskaznik = &liczba;

/* BLAD !! zaczyna wypisywanie od 2, reszta w porzadku */

for ( licznik = 0; licznik <= 512; licznik++, index++ )
{        
        tab[licznik] = *wskaznik;
        printf("%d ---> %d\n", index, tab[licznik]);
}
return 0;
}
