#include <stdio.h>
#include <stdarg.h>

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
        printf("max %d min %d\n roznica %d\n", max, min, (max-min));
}
