#include <stdio.h>

int main(void){

    int a, b;
    long long int out;
    printf("podaj liczbe której potęgę bedziemy obliczać: ");
    scanf("%d", &a);
    printf("podaj wartość potęgi: ");
    scanf("%d", &b);
    out = silnia(a,b);  
    printf("wynik z %d do potęgi %d to: %lld \n", a, b, out);
    return 0;
}

int silnia (int liczba)
{
  int sil;
  if (liczba<0) {
     return 0;
     } 
  if (liczba==0 || liczba==1) {
     return 1;
     }
  sil = liczba*silnia(liczba-1);
  return sil;
}
