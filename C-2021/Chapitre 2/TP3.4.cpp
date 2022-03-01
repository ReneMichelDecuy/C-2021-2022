#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char cha[100];
	int z;
	printf("Hello World\n");
	gets_s(cha);
	int length = strlen(cha);
	for (z = 0; z < length; z++) {
		if (cha[z] >= 'A' && cha[z] <= 'Z')cha[z] = cha[z] + 32;
	}
	printf("%s", cha);
}