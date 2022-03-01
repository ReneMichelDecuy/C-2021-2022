#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	printf("Hello World\n");
	char c;
	FILE *fichier1 = NULL;
	FILE *fichier2 = NULL;
	fichier1 = fopen("source.txt", "r");
	fichier2 = fopen("dest1.txt", "w");
	if (fichier1 != NULL) {
		while (fichier1 != NULL) {
			c = (char)getc(fichier1);
			if (c == EOF) break;
			else putc(c,fichier2);
		}
		printf("Travail termine");
		fclose(fichier1);
		fclose(fichier2);
	}
	else perror("erreur");
}