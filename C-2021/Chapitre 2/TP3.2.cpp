#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char test, cha[100];
	int z, d;
	printf("Hello World\n");
	gets_s(cha);
	scanf(" %c", &test);
	z = strlen(cha);
	d = z - 1;
	while ((cha[d] != test) && (0 < d)) {
		d--;
	}
	if (d==0) {
		printf("caratere pas trouve\n");
	}
	else {
		printf("Le caractere %c se trouve a la position %d a partir de la droite", test, z - d);
	}
}