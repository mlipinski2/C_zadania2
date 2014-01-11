#include <stdio.h>
int main(void) {
         int tab[512];
         int i;
         for(i=0; i < ARRAY_SIZE(tab); ++i) tab[i] = 128;
         return 0;
}
