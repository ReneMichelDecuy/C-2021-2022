#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void lire(float* tab) {
	for (int z = 0; z < 20; z++) {
		scanf("%f", &tab[z]);
	}
}

void affiche(float* tab) {
	for (int z = 0; z < 20; z++) {
		printf("%.1f ", tab[z]);
	}
}

int indice_min(float* tab,int z) {
	int y,tmp=z;
	for (y = z; y < 20; y++) {
		if (tab[y] < tab[tmp]) tmp = y;
	}
	return tmp;
}

void trier(float* tab) {
	float tmp;
	int  y=0;
	for (int z = 0; z < 20; z++) {
		y=indice_min(tab, z);
		tmp = tab[y];
		tab[y] = tab[z];
		tab[z] = tmp;
	}
}

int main() {
	float tableau[20];
	printf("Hello World\n");
	lire(tableau);
	affiche(tableau);
	printf("\n");
	trier(tableau);
	affiche(tableau);
	printf("\n");
}