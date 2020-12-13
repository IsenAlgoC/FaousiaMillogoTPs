#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	char nom[20];
	char prenom[20];
	char sexe;
	printf("Entrez votre nom:");
	scanf_s("%s", &nom, (unsigned)_countof(nom));
	printf("Entrez votre prenom:");
	scanf_s("%s", &prenom, (unsigned)_countof(prenom));
	printf("Quel est votre sexe?");
	sexe = _getch();
	if (sexe =='H') {
		printf("\nMonsieur  %s  %s", prenom, nom);
	}
	if (sexe =='F') {
		printf("\nMadame %s  %s", prenom, nom);
	}
}
