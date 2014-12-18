#include <stdio.h>
#include <math.h>

double intpower(double x, int n)
{
	if(n==0)
		return 1;
	if(n==1)
		return x;
	if(n%2==1)
		return x * intpower(x, n-1);
	else
	{
		int r = intpower(x, n/2);
		return (r*r);
	}
}

int main()
{
	double x;
	int n;
	printf("\nPodaj podstawę x = ");
	scanf("%lf", &x);
	printf("Podaj wykladnik n = ");
	scanf("%d", &n);
	printf("\n%.0lf ^ %d = %.0f\n\n", x, n, intpower(x, n));
	return 0;
}
