#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	float t[10], somme = 0;
	int z;
	printf("Hello World\n");
	for (z = 0; z < 10; z++) {
		scanf("%f", &t[z]);
		somme = somme + t[z];
	}
	printf("somme : %.2f", somme);
}