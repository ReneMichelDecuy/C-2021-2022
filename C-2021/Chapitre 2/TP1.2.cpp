#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	float t1[10], t2[10];
	int z,i=0;
	printf("Hello World\n");
	for (z = 0; z < 10; z++) {
		scanf("%f", &t2[z]);
	}
	for (z = 0; z < 10; z++) {
		if (t2[z] > 0) {
			t1[i] = t2[z];
			i++;
		}
	}
	for (z = 0; z < i; z++) {
		printf("%.2f ", t1[z]);
	}
}