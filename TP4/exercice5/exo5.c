#include <stdio.h>
#include <stdlib.h>

int main() {
	char buffer[1024];
	printf("Saisissez une phrase:");
	gets_s(buffer, 1024);
	int mots = 1;
	int somme=0;
	for (int i = 0; i < strlen(buffer); i++) {
		if (buffer[i] == ' ') {
			mots += 1;
		}
		else {
			somme++;
		}
	}
	float longueur = somme / mots;
	printf("Votre phrase est composee de %d mots\n", mots);
	printf("La longueur moyenne est %.2f", longueur);
}