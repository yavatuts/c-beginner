#include <stdio.h>

int foot, inch, santi, meter;

void input() {
  printf("Enter foot : ");
  scanf("%i", &foot);
  printf("Enter inch : ");
  scanf("%i", &inch);
}

void calculate() {
  santi = foot*0.3048*100;
  santi += inch/12.0*0.3048*100;
  meter = santi / 100;
  santi %= 100;
}

void output() {
  printf("%i foot and %i inch is equal to \n", foot, inch);
  printf("%i Meter and %i Santimeter\n", meter, santi);
}

void main() {
  input();
  calculate();
  output();
}
