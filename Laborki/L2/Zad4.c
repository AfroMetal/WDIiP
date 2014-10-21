#include <stdio.h>
int dnido(d,m,r)
{
	int s1=0,s2=0,s3=0,s=0;
	int mm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  for(int i=1; i<=r-1; i++)
  {
    if(((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
    s1 += 366;
  else
    s1 += 365;
  }
  if(((m >= 3) && (((r % 4 == 0) && (r % 100 != 0)) || (r % 400 == 0))))
    s2 += 1;
  for(int i=0; i<m-1 ; i++)
    s2 += mm[i];
  s3 = d-1;
  s = s1+s2+s3;
  return s;
}
int main()
{
	
  int r=1995,m=3,d=3,s,d2,m2,r2;
  printf("Podaj dzisiejsza date w formacie dd.mm.rrrr: ");
	scanf("%d.%d.%d",&d2,&m2,&r2);
  printf("Licze dni od daty %d.%d.%dr do %d.%d.%dr\n",d,m,r,d2,m2,r2);

  s = dnido(d2,m2,r2) - dnido(d,m,r);
  printf("Suma dni = %d\n", s);
  printf("W sekundach = %d\n", s *24*60*60);
  return 0;
}
