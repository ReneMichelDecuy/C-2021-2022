#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

float min(float* tab) {
	float renvoi=tab[0];
	for (int z = 1; z < 8; z++) {
		if (renvoi > tab[z]) {
			renvoi = tab[z];
		}
	}
	return renvoi;
}

float max(float* tab) {
	float renvoi=tab[0];
	for (int z = 1; z < 8; z++) {
		if (renvoi < tab[z]) {
			renvoi = tab[z];
		}
	}
	return renvoi;
}

int main() {
	float liste[8] = { 1.6,-6.9,9.67,5.90,345,-23.6,78,34.6 };
	printf("Hello World\n");
	float mini = min(liste);
	float maxi = max(liste);
	printf("min = %.1f\nmax = %.1f\n", mini, maxi);
}