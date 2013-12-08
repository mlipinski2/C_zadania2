#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void odwrocona(int x);

int main()
{
  int a;
  printf("Wprowadź liczbę całkowitą:\n");
  scanf("%d", &a);
  printf("%s\n", odwrocona(a));
  printf("\n");
  return 0;
}

void odwrocona(int x) {
  char *znaki = malloc(10);
  sprintf(znaki, "%d", x);
  int len = strlen(znaki);  

  printf("liczba cyfr: %d\n", len);

  while (len > 0) {
    printf("%c", znaki[len-1]);
    len--;
  }
}