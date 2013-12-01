#include <stdio.h>

int main (void)
{
	int x, y;

	printf("Podaj pierwsza liczbe: ");
	scanf("%d", &x);
	printf("Podaj druga liczbe liczbe: ");
	scanf("%d", &y);
	{
		while (x < y) 
		{
			printf("%d \n", x);
			x++;
		}
	}
}
