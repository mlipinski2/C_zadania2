void podnies_do_kwadratu(int *n) {
  
}

void wczytaj_liczbe(int *n) {
  printf("Wpisz liczbę naturalną: ");
  scanf("%d", &n);
}

int main() {
   int liczba;
   wczytaj_liczbe(&liczba);
   podnies_do_kwadratu(&liczba);
   printf("Kwadrtat wczytanej liczby to %d\n", liczba);
   return 0;
}

/*
#include<stdio.h>

void podnies_do_kwadratu(int *n) {
    int b;
    b = *n;
    *n = (b*b);
}

void wczytaj_liczbe(int *n) {
    printf("Wpisz liczbę naturalną: ");
    scanf("%d", n); 
}

int main() {
    int liczba;
    int *n;
    n = &liczba;
    wczytaj_liczbe(&liczba);
    podnies_do_kwadratu(&liczba);
    printf("Kwadrtat wczytanej liczby to %d\n", liczba);
    return 0;
}
*/
