#include <stdio.h>
#include <math.h>
int main (void){
    double a, b, c;
    printf("Podaj długość boku a:\n");
    scanf("%lf", &a);
    printf("Podaj długość boku b:\n");
    scanf("%lf", &b);
    c = hypot(a, b);
    printf("Dlugość boku c:\n%lf\n", c);
return(0);
}

