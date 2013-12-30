#include <stdio.h>

int main () {

double *tablica;
tablica = malloc(8000001 * sizeof(double));

tablica[2000000] = 16;

printf("tablica[%d]= %f\n", 2000000, tablica[20000001]);

free tablica[];

}
