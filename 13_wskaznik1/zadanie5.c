#include <stdio.h>
#define MAX 512

    int main(void){
    int i, *p, a[MAX];
    i = 0;
    p = &a[0];
    for (i=0 ; i < MAX; i++){
        *(p+i) = 128;
    }
    printf("Dla %d ostatnia wartosc to %d\n", *p, *(p+(MAX-1)));
}
