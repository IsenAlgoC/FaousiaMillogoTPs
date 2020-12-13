#include <stdio.h>
#include <stdlib.h>
#include "tp4.h"

int main() {
	int HeureDebut = 750;
	int Duree = 45;
	int HeureFin = 0;
	int HeureDebutMinute = 750%60;
	int HeureDebutHeure = 750 / 60;
	int HeureFinMinute = 0;
	int HeureFinHeure = 0;
	int DuréeMinute = 45;
	int DuréeHeure = 0;
	HeureFin = HeureDebut + Duree;
	HeureFinMinute = HeureFin % 60;
	HeureFinHeure = HeureFin / 60;
	printf("HeureDebut: %dh", HeureDebutHeure);
	printf("%d\n", HeureDebutMinute);
	printf("Duree: %dminutes\n", Duree);
	printf("HeureFin: %dh", HeureFinHeure);
	printf("%d", HeureFinMinute);

}

