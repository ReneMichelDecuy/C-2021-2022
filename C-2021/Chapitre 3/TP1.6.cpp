#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverse(char *ch) {
	int z, tmp;
	int length = strlen(ch);
	for (z = 0; z < length / 2; z++) {
		tmp = ch[z];
		ch[z] = ch[length - z - 1];
		ch[length - z - 1] = tmp;
	}
}

int main() {
	char chaine[100];
	printf("Hello World\n");
	gets_s(chaine);
	inverse(chaine);
	printf("%s\n", chaine);
}