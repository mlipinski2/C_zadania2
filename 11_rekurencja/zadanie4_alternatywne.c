#include<stdio.h>

int nwd(int a, int b);

int main (void){
    int x,y,c;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &x);
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &y);

    c = nwd(x,y);
    
    printf("Najwiekszy wspolny dzielnik to: %d \n", c);
}

int nwd(int a, int b){
    if (b == 0)
        return a;
    else
        return nwd(b,a % b);
}
