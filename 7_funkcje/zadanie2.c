#include <stdio.h>
 
long long int silnia(int);
 
int main()
{
  int liczba_naturalna;
  printf("Podaj liczbę naturalną z której obliczymy silnię:\n");
  scanf("%d", &liczba_naturalna);
  
  if (liczba_naturalna < 0)
  
    printf("Liczba musi być wieksza od zera.\n");
  else
  {
  
  printf("%d! = %lli\n", liczba_naturalna, silnia(liczba_naturalna));
 
  }
  return 0;
  
}
 
long long int silnia(int x)
{
  int a;
  long long int out = 1;
 
  for (a = 1; a <= x; a++)
    out = out * a;
 
  return out;
}
