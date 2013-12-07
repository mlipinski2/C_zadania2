#include <stdio.h>

long silnia(int);

int main()
{
  int liczba_naturalna;
  long silnia = 1;

  printf ("Podaj liczbę naturalną z której obliczymy silnię:\n");
  scanf ("%d", &liczba_naturalna);

  if (liczba_naturalna < 0)

    printf ("Liczba musi być wieksza od zera.\n");
  else
    

      printf ("%d! = %ld\n", liczba_naturalna, silnia(liczba_naturalna));

    
  return 0;

}

long silnia(int x);
{
  int a;
  long out = 1;
  for (a = 1; a <= x; a++)
    out = out * a;
  return out;
}
