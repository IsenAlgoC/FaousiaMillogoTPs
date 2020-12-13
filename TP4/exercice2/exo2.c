#include <stdio.h>
#include <stdlib.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20

int main() {
	int MyTab1[TAILLETAB1];
	for (int i = 0; i < TAILLETAB1; i++) {
		printf("%d %c ", MyTab1[i]=(i+1), SEPARATEUR);
	}
	int* MyPtr1 = &MyTab1[19];
	printf("\n");
	for (*MyPtr1; *MyPtr1 >= 0; *MyPtr1--) {
		printf("%d %c", *MyPtr1, SEPARATEUR);
	}
}