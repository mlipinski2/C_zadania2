#include <stdio.h>
int main() {
  int M, suma, i, n;
  suma = 0;
  i = 1;
  printf("Podaj liczbę M: ");
  scanf("%d\n", &M);
  while (suma < M) {
     suma=suma+i;
     i=i+1;
  }
  n=i+1;
  printf("Szukane n to: %d", n);
  return 0;
}
