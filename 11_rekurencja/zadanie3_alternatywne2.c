#include <stdio.h>
#include <string.h>

/* odwroc(abcd) -> d: odwroc(abc) */
char odwroc(char a[]) {
  int n = strlen(a);
  reverse(a, n);
}

void reverse(char a[], int n);

int main(void) {
  char c[10];
  printf("podaj napis: ");
  fgets(c, 10, stdin);
  odwroc(c);
  printf("%s\n", c);
}

void reverse(char a[], int n) {
  if (n ==0)
    return;
  else {
    putchar(a[n-1]);
    reverse(a, n-1);
  }
}

