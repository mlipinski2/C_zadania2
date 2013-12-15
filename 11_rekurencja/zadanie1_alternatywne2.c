#include <stdio.h>

int main(void){

    int a, b, c;
    long long int out;
    printf("podaj liczbe której potęgę bedziemy obliczać: ");
    scanf("%d", &a);
    printf("podaj wartość potęgi: ");
    scanf("%d", &b);
    out = a;
        for (c = 2; c <= b; c++){
            out = out * a;
        }
    printf("wynik z %d do potęgi %d to: %lld \n", a, b, out);
    return 0;
}
