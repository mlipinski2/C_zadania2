#include <stdio.h>
struct mm {
  int min;
  int max;
};

struct mm minmax(int tab[], int lenght);

int main() {
  int length, int_tab[10];
  struct mm res;

  printf("Podaj liczbę elementów tablicy (do 10): ");
  scanf("%d", &length);

  for (int i = 0; i < length; i++) {
    printf("Element %d: ", (i + 1));
    scanf("%d", &int_tab[i]);
  }

  res = minmax(int_tab, length);
  printf("Najmniejszy element to %d, największy to %d, roznica %d\n", res.min, res.max, res.max-res.min);
  return 0;
}

struct mm minmax(int tab[], int length) {
  struct mm wyniki;
  wyniki.max = 0, wyniki.min = 0;

  wyniki.min = tab[0];
  wyniki.max = tab[0];
  for (int i = 1; i < length; i++) {
    if (tab[i] > wyniki.max) {
      wyniki.max = tab[i];
    }
    if (tab[i] < wyniki.min) {
      wyniki.min = tab[i];
    }
  }
  return wyniki;
}
