#include <stdio.h>
int odwrocona(int a);

int main()
{
  int a;
  printf("Wprowadź liczbę całkowitą:\n");
  scanf("%d\n", &a);

  printf("%d\n", odwrocona(a));

  return 0;
}

int odwrocona(int a)
{
  int b = 0;

  while (a > 0) {
    b = b * 10 + a % 10;
    a = a / 10;
  }

  return b;
}
