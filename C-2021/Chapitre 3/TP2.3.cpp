#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int transforme(char* ch) {
	int length = strlen(ch);
	int z,y=0;
	for (z = 0; z < length; z++) {
		if (ch[z] >= 'a' && ch[z] <= 'z') {
			ch[z] = ch[z] - 32;
			y++;
		}
	}
	return y;
}

int main() {
	char chaine[100];
	printf("Hello World\n");
	gets_s(chaine);
	int change = transforme(chaine);
	printf("%s\n", chaine);
	printf("%d changements effectues", change);
}