#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	printf("Entrez une annee:");
	scanf_s("%d", &a);
	if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0)) {
		printf("L annee est bissextile");
	}
	else {
		printf("L anne n'est pas bissextile");
	}


	int b;
	printf("Entrez une annee");
	scanf_s("%d", &b);
	if (b % 400 == 0) {
		printf("Lannee est bissextile");
	}
	else {
		if (b % 4 == 0 && b % 100 != 0) {
			printf("Lannee est bissextile");
		}
		else {
			printf("Lannee nest pas bissextile");
		}
	}

}