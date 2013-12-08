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
  char *znaki = malloc(4);
  znaki[0] = '0';
  znaki[1] = '1';
  znaki[2] = '4';
  znaki[3] = '1';
  return znaki;
}