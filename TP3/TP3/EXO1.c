#include <stdio.h>
#include <stdlib.h>

#define carre(x) (x) * (x) 
int main()
{
	int Nb = 5, j;
	j = carre(Nb);
	printf("%d", j);
	printf("\n%d", carre(Nb + 1)); // le r�sultat obtenu sans les parenth�ses est 11 car sans les parenth�ses dans la macro le compilateur effectue l'op�ration 5+1*5+1 ce qui est different de (5+1)*(5+1)

}