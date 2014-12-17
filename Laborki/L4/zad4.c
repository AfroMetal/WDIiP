#include <stdio.h>
#include <string.h>
  
  
int strMatch(char wzorzec[], char lancuch[])
{
    int i, z = 0;
  
    for (i=0; i<=strlen(wzorzec)-1; i++)
    {
        if (lancuch[z]=='\0' && wzorzec[i] != '*') return 0; //czy jestem na koncu lancucha
  
        if (wzorzec[i] != '*' && wzorzec[i] != '?')    //literka literka
        {
            if (wzorzec[i]!=lancuch[z]) return 0; //wzorzec i lancuch nie jest ani * ani ? i sa rozne, to niezgodny
        }
        else    //* - literka
        {
            if (wzorzec[i] == '*' && wzorzec[i+1] != '\0') //* nie jest na koncu   {*costam}//
            {
                int b = 0;
  
                for (; z<=strlen(lancuch)-1; z++)
                {
                    if (lancuch[z] == wzorzec[i+1] || wzorzec[i+1] == '?' || wzorzec[i+1] == '*')
                    {
                        b = 1;
                        break;
                    }
                }
                i++;
  
                if (!b) return 0;
            }
        }
     
//? - literka 
        z++;
  }
 
    if (wzorzec[i-1] != '*' && lancuch[z] != '\0') return 0;
       //lancuch sie nie skonczyl, a wzorzec na ostatnim elemencie nie ma *
    return 1;
 
}
  
int main()
{
    char wzorzec[100];
    char lancuch[100];
   
  
    printf("Podaj wzorzec: ");
    scanf("%s", wzorzec);
  
    printf("\nWYBRANY WZORZEC: %s\n", wzorzec);
    printf("Podaj ciag znakow: ");
    scanf("%s", lancuch);
  
    printf("\nPodany ciag jest ");
  
    if (strMatch(wzorzec, lancuch)) printf("zgodny ze wzorcem.\n");
    else printf("niezgodny ze wzorcem.\n");
 
    printf("\n");
     
    return 0;
}
