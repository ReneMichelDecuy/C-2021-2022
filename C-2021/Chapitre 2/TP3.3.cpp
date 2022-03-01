#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char cha[100];
	int occ[27] = {}, z;
	printf("Hello World!\n");
	gets_s(cha);
	int length = strlen(cha);
	for (z = 0; z < length; z++){
		switch (cha[z]){
		case 'a':
			occ[0]++;
			break;
		case 'b':
			occ[1]++;
			break;
		case 'c':
			occ[2]++;
			break;
		case 'd':
			occ[3]++;
			break;
		case 'e':
			occ[4]++;
			break;
		case 'f':
			occ[5]++;
			break;
		case 'g':
			occ[6]++;
			break;
		case 'h':
			occ[7]++;
			break;
		case 'i':
			occ[8]++;
			break;
		case 'j':
			occ[9]++;
			break;
		case 'k':
			occ[10]++;
			break;
		case 'l':
			occ[11]++;
			break;
		case 'm':
			occ[12]++;
			break;
		case 'n':
			occ[13]++;
			break;
		case 'o':
			occ[14]++;
			break;
		case 'p':
			occ[15]++;
			break;
		case 'q':
			occ[16]++;
			break;
		case 'r':
			occ[17]++;
			break;
		case 's':
			occ[18]++;
			break;
		case 't':
			occ[19]++;
			break;
		case 'u':
			occ[20]++;
			break;
		case 'v':
			occ[21]++;
			break;
		case 'w':
			occ[22]++;
			break;
		case 'x':
			occ[23]++;
			break;
		case 'y':
			occ[24]++;
			break;
		case 'z':
			occ[25]++;
			break;
		case ' ':
			occ[26]++;
			break;
		default:
			printf("fin de chaine\n");
			break;
		}
	}
	for (z = 0; z < 26; z++){		
		if (occ[z] > 0) printf("Nombre de %c : %d\n", 'a' + z, occ[z]);
	}
	if (occ[z] > 0) printf("Nombre d'espaces : %d\n", occ[z]);
}