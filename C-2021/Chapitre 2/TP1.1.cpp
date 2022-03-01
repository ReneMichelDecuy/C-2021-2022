#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int tableau[10] = {}, min, max, z;
	printf("Hello World\n");
	for (z = 0; z < 10; z++) {
		scanf("%d", &tableau[z]);
	}
	if (tableau[0] < tableau[1]) {
		min = tableau[0];
		max = tableau[1];
	}
	else {
		max = tableau[0];
		min = tableau[1];
	}
	for (z = 2; z < 10; z++) {
		if (min > tableau[z]) {
			min = tableau[z];
		}
		else if (max < tableau[z]) {
			max = tableau[z];
		}
	}
	printf("min : %d\nmax : %d", min, max);
}