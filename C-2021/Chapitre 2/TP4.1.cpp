#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int tab[40], i = 0, z, y;
	int min, vtmp, ptmp;
	printf("Hello World\n");
	do {
		scanf("%i", &tab[i]);
		i++;
	} while (tab[i - 1] != -1 && i < 40);
	i--;
	for (z = 0; z < i; z++) {
		printf("%d ", tab[z]);
	}
	printf("\n");
	for (z = 0; z < i; z++) {
		min = tab[z];
		ptmp = z;
		for (y = z + 1; y < i; y++) {
			if (min > tab[y]) {
				min = tab[y];
				ptmp = y;
			}
		}
		vtmp=tab[ptmp];
		for (y = ptmp; y > z; y--) {
			tab[y] = tab[y - 1];
		}
		tab[z] = vtmp;
	}
	for (z = 0; z < i; z++) {
		printf("%d ", tab[z]);
	}
}