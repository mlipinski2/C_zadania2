#include <stdio.h>

int main(void){

    int a, b, sil;
    long long int out;
    printf("podaj liczbe której potęgę bedziemy obliczać: ");
    scanf("%d", &a);
    printf("podaj wartość potęgi: ");
    scanf("%d", &b);
    out = sil(a,b);  
    printf("wynik z %d do potęgi %d to: %lld \n", a, b, out);
    return 0;
}

int b (int a)
{
  int sil;
  if (a<0) {
     return 0;
     } 
  if (a==0 || a==1) {
     return 1;
     }
  sil = a*b(a-1);
  return sil;
}
