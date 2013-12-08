#include <stdio.h>
int inverted(int x);

int main()
{
  int a;
  printf("Wprowadź liczbę:\n");
  scanf("%d\n", &x);

  printf("%d\n", inverted(x));

  return 0;
}

int inverted(int x)
{
  int y = 0;

  while (x > 0) {
    y = y * 10 + x % 10;
    x = x / 10;
  }

  return y;
}
