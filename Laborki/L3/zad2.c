#include <stdio.h>
int palindrom(char *str)
{
	int lngth=0, i=0, j=0, n=0, result=1;
	while (str[n] != '\0')
	{
		lngth++;
		n++;
	}
	j = lngth-1;
	while (i <= j)
	{
		if (str[i] != str[j])
		{
			result = 0;
		}
		i++;
		j--;
	}
	return result;
}
int main()
{
	int result;
	char str[25];
	printf("Podaj łańcuch do sprawdzenia: ");
	scanf("%s", str);
	result = palindrom(str);
	printf("%d\n", result);
	return 0;
}
