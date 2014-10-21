#include <stdio.h>
int main()
{
  int r; //deklarowanie zmiennej dla roku
  printf("Podaj rok do sprawdzenia: ");
  scanf("%d", &r); //odczytanie roku do sprawdzenia
  if(((r % 4 == 0) && (r % 100 != 0)) || (r % 400 == 0)) //sprawdzenie warunkow dla roku przestepnego
    printf("Rok %d jest przestepny.\n", r);
  else
    printf("Rok %d nie jest przestepny.\n", r);
  return 0;
}
