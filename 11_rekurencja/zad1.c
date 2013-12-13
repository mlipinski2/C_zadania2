#include <stdio.h>

int main(void){

    int a, b, c;
    long long int out;
    printf("podaj liczbe n: ");
    scanf("%d", &a);
    printf("podaj liczbe k: ");
    scanf("%d", &b);
    out = a;
        for (c = 2; c <= b; c++){
            out = out * a;
        }
    printf("wynik %lld \n", out);
    return 0;
}
