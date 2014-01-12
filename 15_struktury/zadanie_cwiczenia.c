#include<stdio.h>

struct point {
    int x;
    int y;
}

struct point makepoint(int x, int y) {
  struct point tmp;
  tmp.x = x;
  tmp.y = y;
  return tmp;
}

struct point makerect(struct point ll, struct point ur) {
    struct rect temp;
    tmp.ll = ll;
    tmp.ur = ur;
    return tmp;
}

struct point addpoints(struct point p1, struct point p2) {
  struct point tmp;
  tmp.x = p1.x + p2.x;
  tmp.y = p1.y + p2.y;
  return tmp;
}

int main() {
    int a, b;
    struct point p, p1, p2;
    struct rect r;

    p1 = makepoint(4, 6);
    p2 = makepoint(6, 4);

    p = addpoints(p1, p2);

    printf("p = (%d, %d)\n", p.x, p.y);

    printf("r = (%d, %d) (%d, %d)\n", r.ll.x, r.ll.y, r.ur.x, r.ur.y);

    return 0;
}