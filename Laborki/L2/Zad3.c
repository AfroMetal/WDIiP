#include <stdio.h>
#include <math.h>
int main()
{
  double n=1.0,a;
  for(int i=1; i<=1000; i++)
  {
    a = pow(i,(double)1/(double)1000);
    n *= a;
  }
  printf("%e\n", n);

  return 0;
}
