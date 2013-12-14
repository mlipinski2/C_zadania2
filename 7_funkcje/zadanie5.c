#include <stdio.h>
void prostokat(int szerokosc, int wysokosc);
void owal(int szerokosc, int wysokosc);
void strzalka(int szerokosc, int wysokosc);
void diament(int szerokosc, int wysokosc);

void podstawa(int szerokosc);
void boki(int wysokosc);

int main() {
  int szerokosc, wysokosc;

  printf("Podaj szerokosc figur:\n");
  scanf("%d", &szerokosc);
  printf("Podaj wysokosc figur:\n");
  scanf("%d", &wysokosc);
  printf("\n");

  prostokat(szerokosc, wysokosc);

  return 0;
}

void prostokat(int szerokosc, int wysokosc) {
  podstawa(szerokosc);
  boki(wysokosc - 2);
  podstawa(szerokosc);
}

void podstawa(szerokosc) {
	int i;
	for(i = 0; i < szerokosc; i++)
		putchar('*');
	putchar('\n');
}

void boki(wysokosc) {
	int i;
	for(i = 0; i < wysokosc; i++)
		putchar('*');
		putchar(' ');
		putchar(' ');
		putchar(' ');
		putchar('*');

}

void owal(int szerokosc, int wysokosc) {

}

void strzalka(int szerokosc, int wysokosc) {

}

void diament(int szerokosc, int wysokosc) {

}