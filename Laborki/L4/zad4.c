#include <stdio.h>

char strMatch(char *w, char *s)
{
	if(*w=='*')
	{
		while(*w=='*')w++;
		for(int i=0; s[i]!='\0'; i++)
			if(strMatch(w, s+i))
				return 1;
		return strMatch(w,"");
	}
	else 
	{
		if(*w=='?')
		{
		return *s!='\0' && strMatch(w+1, s+1);
		}
		else 
			if(*w=='\0')
			{
				return *s=='\0';
			}
			else
			{
				return *s==*w && strMatch(w+1, s+1);
			}
	}
}

int main()
{
	char w[100], s[100];
	printf("\nPodaj wzor: ");
	scanf("%s", w);
	printf("\nPodaj lancuch: ");
	scanf("%s", s);
	if(strMatch(w,s))
		printf("\nLancuch ZGODNY z wzorem.\n\n");
	else
		printf("\nLancuch NIEZGODNY z wzorem.\n\n");
	return 0;
}
