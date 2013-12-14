#include<stdio.h>

int nwd(int a, int b);

int main (void){
    int x,y,c;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &x);
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &y);
    c = nwd(x,y);
    printf("Najmniejszy wspolny dzielnik to: %d \n", c);
}

int nwd(int a, int b){
    int tmp;
    while(b != 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
