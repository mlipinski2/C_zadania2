#include <stdio.h>
#define ZAKRES  101;

int main (void){
    int a, b, count, wynik, answer, right;
    count  = 0;
    right = 0;
    answer = 0;
    for (i = 0; count <= 4; ++i){
        a = rand() % ZAKRES;
        b = rand() % ZAKRES;
        printf("podaj wynik z mnozenia %d oraz %d: ", a, b);
        scanf("%d", &answer);
            if (answer == a*b){
                ++right;
            }
    }
    printf("liczba poprawnych odpowiedzi to: %d \n", right);
return 0;
}
