#include<stdio.h>
#include<stdlib.h>

int main() {
	int n = rand();
	int a = 0;
	int i = 0;
	while (a != n) {
		printf("Entrez votre valeur:");
		scanf_s("%d", &a);
		i++;
		if (a < n) {
			printf("Trop petit");
		}
		if (a > n) {
			printf("Trop grand");
		}
	}
	printf("Félicitations!\nVotre score est %d", i);

}