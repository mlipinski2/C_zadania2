#include <stdio.h>

int sil (int a, int b);

int main(){

    int a, b;
    long long int out;
    printf("podaj liczbe której potęgę bedziemy obliczać: ");
    scanf("%d", &a);
    printf("podaj wartość potęgi: ");
    scanf("%d", &b);
    out = sil(a,b);  
    printf("wynik z %d do potęgi %d to: %lld \n", a, b, out);
    return 0;
}

int sil (int a, int b) {
  if (a<0) {
     return 0;
     } 
  if (a==0 || a==1) {
     return 1;
     }
  sil = a*b(b-1);
  return sil;
}
