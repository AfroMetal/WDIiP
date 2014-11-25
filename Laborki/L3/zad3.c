#include <math.h>
#include <stdio.h>
#include <stdlib.h>
double f(double x)
{
	return cos(x/2);
}

double rozwiazanie(double a, double b, double eps)
{
	if (a >=b || f(a) * f(b) >= eps)
	{
		printf("Warunki zadania nie są spełnione\n");
		return 0;
	}
	else
	{
	double x0=0.0;
		while(fabs(a-b)>eps)
		{
			x0=(a+b)/2.0;
			if(fabs(f(x0))<eps)
				return x0;
			if(f(a) * f(x0) < 0)
			{
				b = x0;
			}
			else
			{
				a = x0;
			}
		}
		return x0;
	}
	printf("Nie znaleziono miejsca zerowego\n");
	return 0;
}
int main()
{
	double eps=0.0;
	for (unsigned k=1; k<=8; k++)
	{
		eps = 1.0 / pow(10.0,(double)k);
		printf("\nMiejsce zerowe dla k=%u oraz epsilon=%g, wynosi %.8g\n", k, eps, rozwiazanie(2,4,eps));
	}
	return 0;
}
