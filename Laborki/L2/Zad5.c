#include <stdio.h>
int dosk(int n) //funkcja obliczajaca sume dzielnikow liczby
{
  int sn=0;
  for(int i=1; i<n; i++)
  { 
    if(n % i == 0)
    {
      sn += i;
    }
  }  
 return sn;
}
int main()
{
  printf("\nLiczby doskonale do 1000:\n");
  for(int i=1; i<1000; i++) //petla znajdujaca liczby dokonale mniejsze od 1000
  {
    if(i == dosk(i))
    printf("%d\n", i);
  }
  printf("\nPary liczb zaprzyjaznionych do 1000:\n");
  for(int i=0; i<1000; i++) //petla znajdujaca pary liczb zaprzyjaznionych
  {
    if(i == dosk(dosk(i)) && i!=dosk(i)) //warunek sprawdzajacy czy suma sumy dzielnikow jest rowna liczbie, wykluczajac przy tym liczby doskonale czyli pary takich samych liczb
    {
      printf("%d %d\n", i, dosk(i));
      i = dosk(i);
    }
  }
  return 0;
}
