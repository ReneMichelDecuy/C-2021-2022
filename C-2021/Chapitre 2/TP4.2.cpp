#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int tab[40], i = 0, z, y;
	int min, vtmp, ptmp;
	printf("Hello World\n");
	for (z = 0; z < 40; z++) {
		tab[z] = rand() % 100;
	}
	for (z = 0; z < 40; z++) {
		printf("%d ", tab[z]);
	}
	printf("\n");
	for (z = 0; z < 40; z++) {
		min = tab[z];
		ptmp = z;
		for (y = z + 1; y < 40; y++) {
			if (min > tab[y]) {
				min = tab[y];
				ptmp = y;
			}
		}
		vtmp = tab[ptmp];
		for (y = ptmp; y > z; y--) {
			tab[y] = tab[y - 1];
		}
		tab[z] = vtmp;
	}
	for (z = 0; z < 40; z++) {
		printf("%d ", tab[z]);
	}
}