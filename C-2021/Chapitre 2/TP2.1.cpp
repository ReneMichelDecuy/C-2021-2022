#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	float t[3][4], somme = 0;
	int z, y;
	printf("Hello World\n");
	for (z = 0; z < 3; z++) {
		for (y = 0; y < 4; y++) {
			scanf("%f", &t[z][y]);
			somme = somme + t[z][y];
		}
	}
	printf("%f", somme);
}