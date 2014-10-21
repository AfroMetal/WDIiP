#include <stdio.h>
int main()
//Program wczytuje 2 liczby, a nastepnie zwraca ich sume, roznice, iloraz i iloczyn
{
  float a; //definiowanie liczby a
  float b; //definiowanie liczby b
  float s,r,m,d; //definiowanie wynikow
  printf("Podaj liczbe a: ");
  scanf("%f", &a); //odczytanie liczby a
  printf("Podaj liczbe b: ");
  scanf("%f", &b); //odczytanie liczby b
  //obliczenia
  s = a+b;
  r = a-b;
  m = a*b;
  d = a/b;
  //wypisanie wynikow
  printf("Wyniki dzialan na liczbach a=%f i b=%f:\n", a, b);
  printf("%f + %f = %f\n", a, b, s);
  printf("%f - %f = %f\n", a, b, r);
  printf("%f * %f = %f\n", a, b, m);
  printf("%f / %f = %f\n", a, b, d);
  return 0;
}
