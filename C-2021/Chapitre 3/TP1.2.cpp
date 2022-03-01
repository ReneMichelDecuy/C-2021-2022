#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void affiche(int *t) {
	for (int z = 0; z < 10; z++) {
		printf("%d %d", z, t[z]);
		printf("\n");
	}
}

int main() {
	int tab[10] = { 1,2,4,8,16,32,64,128,256,512 };
	printf("Hello World\n");
	affiche(tab);
}