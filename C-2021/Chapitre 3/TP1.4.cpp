#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int diviseur(int nb1, int nb2) {
	int r;
	while (nb2 != 0) {
		r = nb1 % nb2;
		nb1 = nb2;
		nb2 = r;
	}
	return nb1;
}

int main() {
	srand(time(NULL));
	int nb1 = rand(), nb2 = rand();
	printf("Hello World\n");
	int pgcd = diviseur(nb1, nb2);
	printf("pgcd(%d,%d) = %d", nb1, nb2, pgcd);
}