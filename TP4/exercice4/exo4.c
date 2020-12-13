#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char mot[20];
	printf("Entrez un mot:");
	scanf_s("%s", mot, (unsigned)_countof(mot));
	int n = strlen(mot);
	for (int i = 0; i < n/2; i++) {
		if (mot[i] != mot[n - 1 - i]) {
			printf("Ce mot nest pas un palindrome");
			break;
		}
		else {
			printf("Ce mot est un palindrome");
			break;
		}
	}
}