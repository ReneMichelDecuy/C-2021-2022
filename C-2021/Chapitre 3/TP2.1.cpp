#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int multideux(int nombre) {
	int test = 0;
	if (nombre % 2 == 0)test = 1;
	return test;
}

int multitrois(int nombre) {
	int test = 0;
	if (nombre % 3 == 0)test = 1;
	return test;
}

int main() {
	int nombre;
	printf("Hello World\n");
	scanf("%d", &nombre);
	int mt2 = multideux(nombre);
	int mt3 = multitrois(nombre);
	if (mt2 == 1 && mt3 == 1) {
		printf("%d est multiple de 2, de 3 et de 6", nombre);
	}
	else {
		if (mt2 == 1) {
			printf("%d est multiple de 2 seulement", nombre);
		}
		else if (mt3 == 1) {
			printf("%d est multiple de 3 seulement", nombre);
		}
		else {
			printf("%d n'est pas multiple de 2, ni de 3, ni de 6", nombre);
		}
	}
}