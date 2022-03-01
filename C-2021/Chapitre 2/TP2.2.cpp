#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	float t[3][4], m[3], moyenne;
	int z, y;
	printf("Hello World\n");
	for (z = 0; z < 3; z++) {
		moyenne = 0.0;
		for (y = 0; y < 4; y++) {
			scanf("%f", &t[z][y]);
			moyenne = moyenne + t[z][y];
		}
		m[z] = moyenne / 4.0;
		printf("%.2f ", m[z]);
	}
}