#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	float poids;
	printf("Hello World\n");
	scanf("%f", &poids);
	if (poids < 20.0) printf("3.00 francs\n");
	else if (poids > 50.0) printf("5.90 francs\n");
	else printf("3.95 francs\n");
}