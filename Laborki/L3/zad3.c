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
	/*for (double x = a; x<=b; x+=eps)
	{
		if (f(x) < eps && f(x) > -eps)
			return x;
	}*/
	double x=0.0;
	{
		while((f(a-b)>eps || f(a-b)<-eps) && i>0)
		{
			x=(a+b)/2.0;
			if(f(f(x)<eps)
				i=0;
			if(f(a)*f(x)<0)
				b=x;
			else
			{
				a=x;
			}
		}
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
		printf("\nMiejsce zerowe dla k=%u oraz epsilon=%g, wynosi %.8g\n", k, eps, rozwiazanie(2,4,eps));
	}
	return 0;
}
