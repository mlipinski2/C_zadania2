#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int newton(int n, int k) {
  if (k == 0 || k == n)
    return 1;
  else
    return newton(n-1, n-k) + newton(n-1, k);
}

int main(void) {
  int n, k;

  printf("Podaj wartość n: ");
  scanf("%d", &n);
  printf("Podaj wartość k: ");
  scanf("%d", &k);
  printf("%d\n", newton(x, y));
}
