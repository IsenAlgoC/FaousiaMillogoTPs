#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define NBMAXNOTES 30



	int main() {
		char a = "N";
		float n = 0;
		int i = 0;
		int abs = 0;
		int val = 0;
		float tab[NBMAXNOTES];
		for (int j = 0; j < NBMAXNOTES; j++) {
			tab[j] = -2;
		}
		
		while (i < 30 && a != 'O') {
			i++;
			printf("Entrez la note no %d : ", i);
			scanf_s("%f", &n);
			if (n > 20 || n < 0) {
				printf("Vous avez tapé une note invalide. Leleve est-il absent ? ou voulez-vous arreter la saisie des notes ? A/O/N  ");
				scanf_s(" %c", &a);
				if (a == 'A') {
					abs++;
					tab[i - 1] = -1;
				}
			}
			else {
				tab[i - 1] = n;
				val++;
			}
		}

		// Calcul de la moyenne
		float sum = 0;
		for (int j = 0; j < val + abs; j++) {
			if (tab[j] != -1 && tab[j] != -2) {
				sum += tab[j];
			}
		}
		float moy = sum / val;
		printf("\nLa moyenne de ces notes est : %f", moy);

		// Determination de la plus petite et de la plus grande note
		float min = 20;
		float max = 0;
		for (int j = 0; j < val + abs; j++) {
			if (tab[j] != -1 && tab[j] != -2 && tab[j] > max) {
				max = tab[j];
			}
			if (tab[j] != -1 && tab[j] != -2 && tab[j] < min) {
				min = tab[j];
			}
		}
		printf("\nIl y a %d notes valides et %d absences", val, abs);
		printf("\nLa plus petite note est est %f, la plus grande est %f", min, max);


		// l'ecart type
		float ecart = 0;
		float s = 0;
		for (int j = 0; j < val + abs; j++) {
			if (tab[j] != -1 && tab[j] != -2) {
				s += (moy - tab[j]) * (moy - tab[j]);
			}
		}
		ecart = sqrtf(s / val);
		printf("\nL'écart type vaut : %f\n", ecart);

		// On copie les tableaux
		float tab2[NBMAXNOTES];
		int tab_ind[NBMAXNOTES];
		int tab_ind2[NBMAXNOTES];
		for (int j = 0; j < NBMAXNOTES; j++) {
			tab2[j] = tab[j];
			tab_ind[j] = j;
			tab_ind2[j] = j;
		}

		// Trier les tableaux dans l'ordre décroissant
		float b;
		for (i = 0; i < NBMAXNOTES - 1; i++) {
			for (int j = 0; j < NBMAXNOTES - i - 1; j++) {
				if (tab2[j] < tab2[j + 1]) {
					b = tab2[j];
					tab2[j] = tab2[j + 1];
					tab2[j + 1] = b;
					b = tab_ind2[j];
					tab_ind2[j] = tab_ind2[j + 1];
					tab_ind2[j + 1] = b;
				}
			}
		}

		// Affichage des tableaux
		printf("\n\n");
		printf("\nIndice  Note");
		for (int j = 0; j < NBMAXNOTES; j++) {
			if (tab[j] >= 0) {
				printf("\n%d       %f", tab_ind[j], tab[j]);
			}
		}
		printf("\n\n");
		printf("\nRang  Indice  Note");
		for (int j = 0; j < NBMAXNOTES; j++) {
			if (tab2[j] >= 0) {
				printf("\n%d     %d      %f", j, tab_ind2[j], tab2[j]);
			}
		}
		printf("\nBye !\nAppuyez sur une touche pour continuer...");
	}