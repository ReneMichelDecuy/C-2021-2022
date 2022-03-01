#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void motdepasse(char* mdp) {
	int z = 0;
	do {
		mdp[z] = _getch();
		printf("*");
		z++;
	} while (mdp[z - 1] != 13);
	mdp[z] = '\0';
}

int main() {
	printf("Hello World\n");
	char mdp[100];
	motdepasse(mdp);
	printf("\n%s", mdp);
}