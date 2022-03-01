#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	float a, b, c = 0.0;
	printf("Hello World\n");
	scanf("%f %f", &a, &b);
	if ((a < 0 && b < 0) || (a > 0 && b > 0)) {
		if (a < 0 && b < 0) {
			a = -a;
			b = -b;
		}
		for (int z = 0; z < b; z++) {
			c = c + a;
		}
	}
	else {
		if (a < 0)a = -a;
		else b = -b;
		for (int z = 0; z < b; z++) {
			c = c + a;
		}
		c = -c;
	}
	printf("%.4f", c);
}