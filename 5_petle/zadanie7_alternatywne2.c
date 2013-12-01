#include <stdio.h>
int wczytaj_dane(int tablica[], int k) {
  int i = 0, podano_liczbe_parzysta = 0;

  while (i < k) {
    printf("Podaj liczbę: ");
    scanf("%d", &tablica[i]);
    if (tab[i] %2 == 0)
    	podano_liczbe_parzysta = 1;
    ++i;
  }
  return podano_liczbe_parzysta;
}

int main(void) {
	int tab[6], i = 0, ile = 3;
	int jest_parzysta;

	jest_parzysta = wczytaj_dane(tab, ile);

	if (jest_parzysta) {
		printf("Parzyste liczby w tablicy to: ");
		for (i = 0; i < 6; i++)
{
  if(tab[i] % 2 == 0)
  {
    printf("%d", tab[i]);
  }
}
  printf("\n");
} else {
	printf("brak liczby parzystej w tablicy.\n");
}

  return 0;
}
