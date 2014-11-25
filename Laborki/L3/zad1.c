#include <stdio.h>
int main()
{
	unsigned short int a=1;
	signed short int b=1;
	unsigned int c=1;
	signed int d=1;
	unsigned long int e=1;
	signed long int f=1;
	
	while (a >= 1)
	{
		a=2*a;
	}
	printf("\nunsingned short int:\n");
	printf("min %hu\n", a);
	printf("max %hu\n", (unsigned short)(a-1));

	while (b >= 1)
	{
		b=2*b;
	}
	printf("\nsigned short int:\n");
	printf("min %hd\n", b);
	printf("max %hd\n", (short)(b-1));
	
	while (c >= 1)
	{
		c=2*c;
	}
	printf("\nunsigned int:\n");
	printf("min %u\n", c);
	printf("max %u\n", (unsigned)(c-1));

	while (d >= 1)
	{
		d=2*d;
	}
	printf("\nsingned int:\n");
	printf("min %d\n", d);
	printf("max %d\n", d-1);

	while (e >= 1)
	{
		e=2*e;
	}
	printf("\nunsigned long int:\n");
	printf("min %lu\n", e);
	printf("max %lu\n", (unsigned long)(e-1));

	while (f >= 1)
	{
		f=2*f;
	}
	printf("\nsigned long int:\n");
	printf("min %ld\n", f);
	printf("max %ld\n", (long)(f-1));
	
	return 0;
}
