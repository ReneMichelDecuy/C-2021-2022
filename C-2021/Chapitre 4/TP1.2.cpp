#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Hello World\n");
	srand(time(NULL));
	int *adrdeb;
	adrdeb = (int*)malloc(6 * sizeof(int));
	int z, range;
	for (z = 0; z < 6; z++) adrdeb[z] = rand();
	for (z = 0; z < 5; z++) {
		for (int y = 0; y < 5; y++) {
			if (adrdeb[y] > adrdeb[y + 1]) {
				range = adrdeb[y];
				adrdeb[y] = adrdeb[y + 1];
				adrdeb[y + 1] = range;
			}
		}
	}
	printf("%p %i\n", adrdeb + 5, adrdeb[5]);
	free(adrdeb);
}