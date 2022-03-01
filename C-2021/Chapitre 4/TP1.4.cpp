#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void affiche(int *tab, int i, int j) {
	for (int z = 0; z < j; z++) {
		for (int y = 0; y < i; y++) {
			printf("%d ", tab[z*i+y]);
		}
		printf("\n");
	}
	printf("\n");
}

int main() {
	int i, j;
	int tab1[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19 };
	int tab2[] = { -19,18,-17,16,-15,14,-13,12,-11,10,-9,8,-7,6,-5,4,-3,2,-1,0 };
	printf("Hello World\n"); 
	scanf("%d %d", &i, &j);
	affiche(tab1, i, j);
	scanf("%d %d", &i, &j);
	affiche(tab2, i, j);
}