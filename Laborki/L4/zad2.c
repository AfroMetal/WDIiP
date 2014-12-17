#include <stdio.h>

void wypisz(const int *t, const int n)
{
  if (t!=0) 
	{
    for (int i=0; i<n; i++) 
		{
      printf(" %d", t[i]);
    }
    printf("\n");
  }
}

void permutuj(int *t, const int a, const int b)
{  
  if (a==b-1) 
	{
    wypisz(t,b);
  }
  else 
	{
    for (int i=a; i<b; i++) 
		{
      int tmp = t[i];
      t[i] = t[a];
      t[a] = tmp;
      permutuj(t, a+1, b);
      t[a] = t[i];
      t[i] = tmp;
    }
  }
}

int main()
{
	int n;
	printf("Podaj dla ilu kolejnych liczb naturalnych policzyc permutacje: ");
	scanf("%d",&n);
	int t[n];
	for(int i=0; i<n; i++)
		t[i]=i+1;
  permutuj(t, 0, n);
}
