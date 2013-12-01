/*Perle zadanie 4*/

#include <stdio.h>

int main(void)
{
int x, y;
        printf("Podaj gorna granice: ");
        scanf("%d", &y);
        if (y < 1){
                printf("podaj liczbe wieksza niz 1");
                }
        while (x < y)
                {
                printf("%d", x);
                ++x;
                }
}
