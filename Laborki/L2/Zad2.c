#include <stdio.h>
int main()
{
  float s=0.0; //definiowanie sumy ciagu
  float n=0.0;
  while(s<=10.0) //warunek dla petli, przerwana gdy s>10
  {
    ++n; //zwiekszanie n o 1
    s += 1/n; //aktualizacja sumy o kolejny wyraz ciagu harmonicznego
  }
  printf("Suma szeregu harmonicznego przekracza 10 dla wyrazu %.0f.\n", n); //zwrot wyrazu minimalnego
  return 0;
}
