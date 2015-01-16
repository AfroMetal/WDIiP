#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int slowa_wyswietlane = 100;

struct Node
{
	int licznik; //wystapien znaku
	char slowo[256]; //tablica przechowujaca aktualne slowo
	struct Node* litery[26]; //kolejne znaki (alfabet angielski)
};

struct Node* nowy_wezel() //tworzenie wezla
{
	struct Node* node = (struct Node*) malloc(sizeof(struct Node));	
	node->licznik = 0;
	for(int i=0; i<26; i++)
		node->litery[i] = 0;
	return node;
}

void usun_wezel(struct Node* node) //czyszczenie wezla
{
	if(node == 0) return;
	for(int i=0; i<26; i++)
		if(node->litery[i])
			usun_wezel(node->litery[i]);
	free(node);
}

struct Node** SLOWA;

void sortowanie() //sortowanie slow wedlug ilosci wystapien
{
	int n = slowa_wyswietlane;
	do
	{
		for(int i=0; i<n-1; i++)
		{
			if(!SLOWA[i+1]) continue;
			if(!SLOWA[i])
			{
				SLOWA[i] = SLOWA[i+1];
				SLOWA[i+1] = 0;
				continue;
			}
			else
				if(SLOWA[i]->licznik < SLOWA[i+1]->licznik)
				{
					struct Node* tmp = SLOWA[i+1];
					SLOWA[i+1] = SLOWA[i];
					SLOWA[i] = tmp;
				}
		}
		n--;
	}while(n>1);
}

void dodaj_wierzcholek(struct Node* node)
{
	if(node->licznik > 0 && (!SLOWA[slowa_wyswietlane-1] || (SLOWA[slowa_wyswietlane-1]->licznik < node->licznik)))
	{
		SLOWA[slowa_wyswietlane-1] = node;
		sortowanie();
	}
	for(int i=0; i<26; i++)
		if(node->litery[i])
			dodaj_wierzcholek(node->litery[i]);
}

int main(int argc, char* argv[])
{
	if(argc>1)
		sscanf(argv[1], "%d", &slowa_wyswietlane);
	
	struct Node* litery[26];
	struct Node* aktualny = 0; //aktualny wierzcholek
	
	for(int i=0; i<26; i++)
		litery[i] = nowy_wezel();
	
	char slowo[256]; //aktualne slowo
	int i=0; //iterator aktualnego slowa
	
	while(!feof(stdin)) //sprawdzenie czy plik zostal juz przeczytany lub czy w ogole jest
	{
		char znak = toupper(getc(stdin));
		unsigned z;
		
		if(isalpha(znak))
		{
			slowo[i++] = znak; //zapis litery do aktualnego slowa
			z = znak - 65; //65 kod A
			if(!aktualny) //jesli wierzcholek (kolejny znak slowa) nie istnieje to aktualne slowo jest nowe
				aktualny = litery[z];
			else
			{
				if(!aktualny->litery[z])
					aktualny->litery[z] = nowy_wezel();
				aktualny = aktualny->litery[z];
			}
		}
		else
			if(i>0)
			{
				strcpy(aktualny->slowo, slowo); //kopiowanie slowa do wiercholka
				for(i=0; i<256; i++) //czyszczenie slowa
					slowo[i] = 0;
				i=0;
				aktualny->licznik++; //zwiekszamy licznik wystapienia aktualnego wyrazu
				aktualny = 0; //nowy wyraz wiec czyscimy wskaznik
			}
	}
	
	//wyswitlanie listy najczesciej wystepujacych slow
	
	SLOWA = (struct Node**) malloc(sizeof(struct Node) * slowa_wyswietlane);
	for(int i=0; i<slowa_wyswietlane; i++)
		SLOWA[i]=0;
	
	for(int i=0; i<26; i++)
		dodaj_wierzcholek(litery[i]);
	
	printf("\nNajczesciej wystepujace slowa (%d):\n\n", slowa_wyswietlane);
	for(int i=0; i<slowa_wyswietlane; i++)
	{
		if(SLOWA[i])
			printf("%d. \"%s\" %d wystapien,\n", i+1, SLOWA[i]->slowo, SLOWA[i]->licznik);
	}
	
	free(SLOWA);
	for(int i=0; i<26; i++)
		usun_wezel(litery[i]);
	
	return 0;
}
