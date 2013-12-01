#include <stdio.h>
int main(void)
{
  int tab[6];
  int i = 0;

  while (i < 6)
  {
    printf("Podaj liczbę: ");
    scanf("%d", &tab[i]);
    ++i;
  }

printf("Parzyste liczby w tablicy to: ");
for (i = 0; i < 6; i++)
{
  if(tab[i] % 2 == 0)
  {
    printf("%d", tab[i]);
  }
}
  printf("\n");
  return 0;
}
