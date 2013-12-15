#include <stdio.h>
#include <math.h>

int newton(int n, int k);

int main() {
  int n, k, out;

  printf("Podaj wartość n: ");
  scanf("%d", &n);
  printf("Podaj wartość k: ");
  scanf("%d", &k);
  wynik = newton(n, k);
  printf("%d\n", out);
}

int newton(int n, int k) {

  if (n == 0 || n == k) {
    return 1;
  }

  if (n > 0 && k > 0 && n > k) {
    return newton(n - 1, k - 1) + newton(n - 1, k);
  }
}
