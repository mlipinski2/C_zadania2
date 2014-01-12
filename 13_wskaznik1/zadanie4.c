#include <stdio.h>
#include <stdarg.h>

/*
Program prosi o podanie 5 liczb.
Funkcja min_max wypisuje maksymalna oraz
minimalna wartosc z podanych 5 cyfr.
*/
void min_max(int *a);

int main(void){
   
    int i, *p, a[5];

    p = &a[0];
    i = 0;
    for (i = 0; i < 4; i++){
        printf("podaj liczbe \n");
        scanf("%d", &a[i]);
    }
    min_max(p);
}

void min_max(int *a){
    
    int min, max, i;
    i = 0;
    min = *a;
    max = *a;
    for (i=0 ; i < 4; i++){
    if (min >*(a+i))
       min = *(a+i);
    if (max <*(a+i))
       max = *(a+i);
    }
        printf("min %d max %d\n suma %d\n", min, max, (min+max));
}
