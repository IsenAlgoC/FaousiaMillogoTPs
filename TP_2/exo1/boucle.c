#include <stdio.h>
#include <stdlib.h>

int main()

{
	int i = 0;
	int somme = 0;
	int n;
	//somme des n premiers entiers avec la boucle for

	do {
		printf("Entrez une valeur: ");
		scanf_s("%d", &n);
		for (i = 0; i <= n; i++) {
			if (n < 361) {
				somme += i;
			}

		}
	} while (n > 361);
	printf("La valeur de somme est %d", somme);


	//somme des n premiers entiers avec la boucle while
	i = 0;
	int somme2 = 0;
	while (i <= 100) {
		somme2 = somme2 + i;
		i += 1;
	}
	printf("\nLa valeur de somme est %d ", somme2);


	//somme des n premiers entiers avec la boucle do while
	i = 0;
	int somme3 = 0;
	do {
		i += 1;
		somme3 = somme3 + i;
	} while (i <= n);
	printf("\nLa valeur de somme est %d ", somme3);


	n = 0;
	int b = 0, Max = 65535;

	while (Max - b >= n)
	{
		b = n + b;
		n = n + 1;
	}
	printf("\n\nLa somme maximale est %d\n", b);
	printf("La valeur de n a ne pas depasser est %d", n - 1);


}