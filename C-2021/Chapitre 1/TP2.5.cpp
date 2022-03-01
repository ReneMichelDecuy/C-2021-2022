#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nb=0, z, y;
	printf("Hello World\n");
	while ((nb < 2) || (nb > 11)) {
		scanf("%d", &nb);
	}
	for (z = 0; z < nb+1; z++) {
		if (z > 0) {
			for (y = 0; y < nb+1; y++) {
				if ((y == 0) && (z < 10)) printf("  %d  |", z);
				else if ((y == 0) && (z == 10)) printf("  %d |", z);
				else if (z*y < 10) printf("  %d  |", y*z);
				else if (z*y >= 100) printf(" %d |", y*z);
				else printf("  %d |", y*z);
			}
			printf("\n");
		}
		else {
			for (y = 0; y < nb+1; y++) {
				if (y == 0) printf("     |");
				else if (y < 10) printf("  %d  |", y);
				else printf("  %d |", y);
			}
			printf("\n");
		}
	}
}