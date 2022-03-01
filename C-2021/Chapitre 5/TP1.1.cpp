#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	printf("Hello World\n");
	char c;
	FILE *fichier = NULL;
	fichier = fopen("source.txt", "r+");
	if (fichier != NULL) {
		while (fichier != NULL) {
			c = (char)getc(fichier);
			if (c == EOF) break;
			printf("%c", c);
		}
		fclose(fichier);
	}
	else perror("erreur");

}