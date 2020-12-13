#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned long v = 2868838400;

	printf("le nombre %u, est code sur %d octets\n", v, sizeof(v));
	int b, a = sizeof(v);
	b = a * 8;
	printf("Il est donc code sur %d bits\n", b);

	int i;
	for (i = 0; i <= 31; i++)
	{
		int test = v & 1;
		if (test == 1)
		{
			printf("bit %2d: ", i);
			printf("ON\n");
		}
		else
		{
			printf("bit %2d: ", i);
			printf("OFF\n");
		}
		v >>= 1;
	}
	printf("bye!\n");
}
