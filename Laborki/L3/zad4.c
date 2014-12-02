#include <stdio.h>
void d2r(char *str, unsigned int n)
{
	int i = 0;
	for(;n>=1000; n-=1000)
	{
		str[i]='M';
		i++;
	}
	for(;n>=900; n-=900)
	{
		str[i]='C';
		i++;
		str[i]='M';
		i++;
	}
	for(;n>=500; n-=500)
	{
		str[i]='D';
		i++;
	}
	for(;n>=400; n-=400)
	{
		str[i]='C';
		i++;
		str[i]='D';
		i++;
	}
	for(;n>=100; n-=100)
	{
		str[i]='C';
		i++;
	}
	for(;n>=90; n-=90)
	{
		str[i]='X';
		i++;
		str[i]='C';
		i++;
	}
	for(;n>=50; n-=50)
	{
		str[i]='L';
		i++;
	}
	for(;n>=40; n-=40)
	{
		str[i]='X';
		i++;
		str[i]='L';
		i++;
	}
	for(;n>=10; n-=10)
	{
		str[i]='X';
		i++;
	}
	for(;n>=9; n-=9)
	{
		str[i]='I';
		i++;
		str[i]='X';
		i++;
	}
	for(;n>=5; n-=5)
	{
		str[i]='V';
		i++;
	}
	for(;n>=4; n-=4)
	{
		str[i]='I';
		i++;
		str[i]='V';
		i++;
	}
	for(;n>=1; n--)
	{
		str[i]='I';
		i++;
	}
}
int main()
{
	unsigned num=0;
	char str[25] = "";
	printf("\nPodaj liczbe arabska do zamiany: ");
	scanf("%u", &num);
	d2r(str, num);
	printf("Ta liczba w zapisie rzymskim to: %s\n\n", str);
	return 0;
}
