#include <stdio.h>
void  inverted(int x);

int main()
{
  int a;
  printf("Wprowadź liczbę całkowitą:\n");
  scanf("%d\n", &a);

  printf("%d\n", inverted(a));

  return 0;
}

void inverted(int x) {
  while (a > 0) {
    prinft("%d", a % 10);
    a = a / 10;
  }
}
