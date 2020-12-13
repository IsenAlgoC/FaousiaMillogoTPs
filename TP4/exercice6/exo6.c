#include <stdio.h>
#include <stdlib.h>

int main() {
	int tab[100];
	int n;
	int j = 0;
	for (int i = 0; i < 100; i++) {
		tab[i] = (int)rand() % 100;
		printf("%d ", tab[i]);
	}
	printf("\nEntrez la valeur recherchée:");
	scanf_s("%d", &n);
	int* curseur = &tab[0];
	for (int i = 0; i < 100; i++) {
		if (*curseur == n && j == 0) {
			printf("La valeur %d a ete retrouvee en %d", n, i);
			j = 1;
		}
		else if (*curseur == n && j == 1) {
			printf(", puis en %d,", i);
		}
		curseur++;
	}
	if (j==0) {
		printf("La valeur nest pas dans le tableau");
	}
	
}