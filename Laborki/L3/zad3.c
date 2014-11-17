#include <math.h>
#include <stdio.h>
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
	for (double x = a; x<=b; x+=eps)
	{
		if (f(x) < eps && f(x) > -eps)
			return x;
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
		printf("Miejsce zerowe dla k=%u oraz epsilon=%g, wynosi %g\n", k, eps, rozwiazanie(2,4,eps));
	}
	return 0;
}
