#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5000

void num2arr(int*, unsigned);
void arr2num(int*);
void fctrl(int);
void mltpl(int);
int lngth = 0;
int arr2[N];

void num2arr(int arr[N], unsigned num)
{
	for(unsigned i=0; i<N; i++)
	{
		arr[i] = 0;
	}
	unsigned i=0;
	while(num>0)
	{
		arr[i] = num%10;
		i++;
		num/=10;
	}
}

void arr2num(int *arr)
{
	unsigned j=N-1;
	while(arr[j]==0)
		j--;
	for(int i=j; i>=0; i--)
	{
		printf("%d", arr[i]);
		if(i%3==0)
		printf(" ");
	}
	printf("\n");
}

void fctrl(int num)
{
	int i;
	for(i=2; i<=num; i++)
	{
		mltpl(i);
	}
}

void mltpl(int num)
{
	long i, r=0;
	int arr[N];
	for(i=0; i<=lngth; i++)
	{
		arr[i]=arr2[i];
	}
	for(i=0; i<=lngth; i++)
	{
		arr2[i] = (arr[i] * num + r) % 10;
		r = (arr[i] * num + r) / 10;
	}
	if(r!=0)
	{
		while(r!=0)
		{
			arr2[i] = r % 10;
			r = r / 10;
			i++;
		}
	}
	lngth = i-1;
}

int main()
{
	int num;
	printf("Silnia do liczenia: ");
	scanf("%d", &num);
	
	arr2[0]=1;
	fctrl(num);
	printf("\n%d! = ",num);
	arr2num(arr2);
	
	return 0;
}
