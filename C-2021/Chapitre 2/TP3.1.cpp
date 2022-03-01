#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char cha[20], ahc[20];
	int e = 0, z, d;
	printf("Hello World\n");
	gets_s(cha);
	e = strlen(cha);
	for (z = 0; z < e; z++) {
		ahc[z] = cha[e - 1 - z];
	}
	ahc[e] = '\0';
	printf("%s", ahc);
}
