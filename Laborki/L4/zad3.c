#include <stdio.h>
#include <stdlib.h>

int k, n;

void kombinacje(int *t, int k, int m)
{
	if(k==0){
		for(int i=1; i<=n; i++)
			if(t[i])
				printf(" %d", i);
			printf("\n");
	}
	else if(k>n) return;
	else{
		t[m]=1;
		kombinacje(t, k, m-1);
		t[m]=0;
		kombinacje(t, k, m-1);
	}
}

int main()
{
	printf("Podaj rozmiar tablicy {1,2, ... , n}: ");
	scanf("%d",&n);
	printf("Podaj długość kombinacji: ");
	scanf("%d", &k);

	int t[n+1];
	for(int i=0; i<n; i++)
		t[i]=i+1;
	
	kombinacje(t, k, n);
	return 0;
}
