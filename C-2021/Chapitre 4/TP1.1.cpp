#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int main() {
	printf("Hello World\n");
	float *adr1;
	adr1 = (float*) malloc(sizeof(float));
	float *adr2;
	adr2 = (float*) malloc(sizeof(float));
	*adr1 = -45.78;
	*adr2 = 678.89;
	printf("%p %f\n%p %f", adr1, *adr1, adr2, *adr2);
	free(adr1);
	free(adr2);
}