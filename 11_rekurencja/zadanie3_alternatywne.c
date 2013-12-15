#include <stdio.h>
#include <string.h>

/* odwroc(abcd) -> d: odwroc(abc) */
char odwroc(char a[]);

int main(void) {
  char c[10];
  printf("podaj napis: ");
  fgets(c, 10, stdin);
  odwroc(c);
  printf("%s\n", c);
  return 0;
}

void odwroc(char a[]) {
  int n = strlen(a);
  if (n ==0)
    return;
  else {
    putchar(a[n-1]);
    a[n-1] = '\0';
    odwroc(a);
  }
}
