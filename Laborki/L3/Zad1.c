#include <stdio.h>
int main()
{
	unsigned short int a;
	signed short int b;
	signed int c;
	unsigned int d;
	unsigned long int e;
	signed long int f;

	for (unsigned short int i=1; i>0; i++)
	{
		a=i;
	}
	printf("\nunsingned short int:\n");
	printf("max %hu\n", a);
	printf("min %hu\n", (unsigned short)(a+1));

	for (signed short int i=1; i>0; i++)
	{
		b=i;
	}
	printf("\nsigned short int:\n");
	printf("max %hd\n", b);
	printf("min %hd\n", (short)(b+1));

	for (signed int i=1; i>0; i++)
	{
		c=i;
	}
	printf("\nsingned int:\n");
	printf("max %d\n", c);
	printf("min %d\n", c+1);

	for (unsigned int i=1; i>0; i++)
	{
		d=i;
	}
	printf("\nunsigned int:\n");
	printf("max %u\n", d);
	printf("min %u\n", (unsigned)(d+1));

	for (unsigned long int i=1; i>0; i++)
	{
		e=i;
	}
	printf("\nunsigned long int:\n");
	printf("max %lu\n", e);
	printf("min %lu\n", (unsigned long)(e+1));

	for (signed long int i=1; i>0; i++)
	{
		f=i;
	}
	printf("\nsigned long int:\n");
	printf("max %ld\n", f);
	printf("min %ld\n", (long)(f+1));

	return 0;
}
