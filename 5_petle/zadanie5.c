#include <stdio.h>

int main () {

	int result[6], i=0;

	i = 0
	while (i < 6) {
		printf("podaj liczbe: ");
		scanf("%d", &result[i]);
		++i;
	}
	for (i = 0; i < 6; ++1) {
		printf("twoje liczby to %d  \n", result[i]);
	}
}
