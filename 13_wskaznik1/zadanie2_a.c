int main(void) {
  int *wsk;
  int tab[2][2] = {{12, 14}, {16}};
  wsk = tab[0];
  printf("%d\n", *wsk);
  printf("%d\n", *wsk+2);
}
