#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int facto(int fac,int t) {
	if (t > 1) {
		fac = fac * t;
		t--;
		fac = facto(fac, t);
		return fac;
	}
	return fac;
}

int main() {
	int nombre;
	printf("Hello World\n");
	scanf("%d", &nombre);
	int res = facto(nombre, nombre-1);
	printf("%d", res);
}