#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int taille(FILE *fichier) {
	char c;
	int test = 0;
	do {
		c = (char)getc(fichier);
		test++;
	} while (c != EOF);
	return test;
}

int main() {
	printf("Hello World\n");
	FILE *fichier[3] = { NULL,NULL,NULL };
	fichier[0] = fopen("source.txt", "r+");
	fichier[1] = fopen("dest1.txt", "r+");
	fichier[2] = fopen("dest2.txt", "r+");
	if ((fichier[0] != NULL) && (fichier[1] != NULL) && (fichier[2] != NULL)) {
		printf("fichier 1 : %d octets\n", taille(fichier[0]));
		printf("fichier 2 : %d octets\n", taille(fichier[1]));
		printf("fichier 3 : %d octets\n", taille(fichier[2]));
	}
	else perror("erreur");
}