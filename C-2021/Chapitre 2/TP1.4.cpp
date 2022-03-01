#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int tab1[100], tab2[100], z, y;
	printf("Hello World\n");
	for (z = 0; z < 100; z++) {
		tab1[z] = z + 1;
	}
	for (z = 0; z < 100; z++) {
		if (tab1[z] == 1 || tab1[z] == 2) tab2[z] = 1;
		for (y = 2; y < tab1[z]; y++) {
			if ((tab1[z] % y) != 0) {
				tab2[z] = 1;
			}
			else {
				tab2[z] = 0;
				break;
			}

		}
	}
	for (z = 0; z < 100; z++) {
		if (tab1[z] < 10) printf("%d     %d\n", tab1[z], tab2[z]);
		else if (tab1[z] > 99) printf("%d   %d\n", tab1[z], tab2[z]);
		else printf("%d    %d\n", tab1[z], tab2[z]);
	}
}