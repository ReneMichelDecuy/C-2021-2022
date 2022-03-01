#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char* ff=(char*)malloc(30*sizeof(char));
	printf("Hello World\n");
	//gets_s(ff); //ca marche pas !
	fgets(ff, 30, stdin);//ca marche ?
	int length = strlen(ff) - 1;
	for (int z = 0; z < length; z++) {
		printf("%p %c\n", &ff + z, ff[z]);
	}
	free(ff);
}