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
	printf("unsingned short int:\n");
	printf("max %hu\n", a);
	printf("min %hu\n", a++);
	
	for (signed short int i=1; i>0; i++)
	{
		b=i;
	}
	printf("signed short int:\n");
	printf("max %hd\n", b);
	printf("min %hd\n", b++);
	
	for (signed int i=1; i>0; i++)
	{
		c=i;
	}
	printf("singned int:\n");
	printf("max %d\n", c);
	printf("min %d\n", c++);
	
	for (unsigned int i=1; i>0; i++)
	{
		d=i;
	}
	printf("unsigned int:\n");
	printf("max %u\n", d);
	printf("min %u\n", d++);
	
	for (unsigned long int i=1; i>0; i++)
		e=i;
	}
	printf("unsigned long int:\n");
	printf("max %lu\n", e);
	printf("min %lu\n", e++);
	
	for (signed long int i=1; i>0; i++)
	{
		f=i;
	}
	printf("signed long int:\n");
	printf("max %ld\n", f);
	printf("min %ld\n", f++);
	
	return 0;
}
