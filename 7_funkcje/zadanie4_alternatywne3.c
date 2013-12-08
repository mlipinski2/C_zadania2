#include <stdio.h>
#include <stdlib.h>

char *odwrocona(int x);

int main()
{
  int a;
  printf("Wprowadź liczbę całkowitą:\n");
  scanf("%d", &a);
  printf("%s\n", odwrocona(a));
  printf("\n");
  return 0;
}

char *odwrocona(int a) {
  char *znaki = malloc(10);
  int i = 0;

  while (x>0) {
    znaki[i] = '0' + x % 10; /*zero ASCI dodajemy*/
    x = x / 10;
    i++;
  }
  znaki[i] = '/0'; /*znak konca tablicy*/

  return znaki;
}