#include <stdio.h>
#include <math.h>
double c (double a, double b);
int
main (void)
{
double a, b;
printf ("Podaj długość boku a:\n");
canf ("%lf", &a);
printf ("Podaj długość boku c:\n");
scanf ("%lf", &b);
printf ("%lf \n", c);
return (0);
}
double
c (double a, double b)
{
double out;
out = hypotf (a, b);
return out;
}
