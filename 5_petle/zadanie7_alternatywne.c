#include <stdio.h>
int main(void)
{
  int tab[6];
  int i = 0;
  int podano_liczbe_parzysta = 0;

  while (i < 6)
  {
    printf("Podaj liczbę: ");
    scanf("%d", &tab[i]);
    if (tab[i] == 0) /* z warunkiem sprawdzenia czy jest parzysta i wypisaniem ze nie podano parzystych*/
    	podano_liczbe_parzysta = 1;
    ++i;
  }
if podano_liczbe_parzysta {
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
