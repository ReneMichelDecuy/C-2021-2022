#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char cha[100];
	int z,y;
	printf("Hello World\n");
	gets_s(cha);
	int length = strlen(cha);
	for (z = 0; z < length; z++) {
		if (cha[z] == ' ') {
			for (y = z; y < length; y++) {
				cha[y] = cha[y + 1];
			}
		}
	}
	printf("%s",cha);
}