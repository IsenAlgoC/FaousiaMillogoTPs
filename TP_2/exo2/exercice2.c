#include <stdio.h>
#include <stdlib.h>


void permute(float* a, float* b, float* c)
{
	float d;
	if (*b > *a)
	{
		d = *b;
		*b = *a;
		*a = d;
	}
	if (*c > *a)
	{
		d = *c;
		*c = *a;
		*a = d;
	}
	if (*c > *b)
	{
		d = *c;
		*c = *b;
		*b = d;
	}

}
int main()
{
	float a, b, c;
	do
	{
		printf("\n Entrez un nombre:");
		scanf_s("%f", &a);
		printf("Entrez un deuxieme nombre: ");
		scanf_s("%f", &b);
		printf("Entrez un troisieme nombre:");
		scanf_s("%f", &c);

		permute(&a, &b, &c);

		if (a <= 55 && b <= 35 && c <= 25)
		{
			printf(" VALIDE");
		}
		else
		{
			printf(" NON VALIDE");
		}
	} while (1);




}