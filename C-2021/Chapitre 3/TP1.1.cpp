#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int puissance(int a, int b) {
	int z, p = 1;
	for (z = 0; z < b; z++) {
		p = p * a;
	}
	return p;
}

int main() {
	int a, b, p;
	printf("Hello World\n");
	scanf("%d %d", &a, &b);
	p = puissance(a, b);
	printf("%d puissance %d = %d",a,b,p);
}