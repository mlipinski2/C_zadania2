#include <stdio.h>
#include <math.h>
int main()
{
    int wiek, miesiace, dni, godziny, przestepny, minuty;
    long int sekundy;
   	 printf ("Podaj swoj wiek \n");
         scanf("%d", &wiek);
         miesiace = wiek*12;
         dni = wiek * 365;
         godziny = dni * 24;
         minuty = godziny * 60;
         sekundy = minuty * 60;
         printf ("Twoj wiek w sekundach to %d miesiecy \n"
         "%d dni \n"
         "%d godzin \n"
         "%d minut \n"
         "%li sekund \n", miesiace, dni, godziny, minuty, sekundy);
         leap = year%4==0 && year%100!=0 || year%400 == 0
;
}
