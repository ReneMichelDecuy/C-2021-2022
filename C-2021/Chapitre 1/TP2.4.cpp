#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Hello World\n");
	int age, nbcin, ftbjn, nbfood;
	char sexe, sport, food;
	printf("age : ");
	scanf("%d", &age);
	printf("sexe : "); 
	do {
		scanf(" %c", &sexe);
	} while (sexe != 'F' && sexe != 'M' && sexe != 'f' && sexe != 'm');
	printf("nombre de fois au cinema par mois : ");
	scanf("%d", &nbcin);
	printf("prefere Quick ou Mac Donald (premiere lettre) : ");
	do {
		scanf(" %c", &food);
	} while (food != 'Q' && food != 'M' && food != 'q' && food != 'm');
	printf("nombre de fois par mois : ");
	scanf("%d", &nbfood);
	printf("pratique un sport  : ");
	do {
		scanf(" %c", &sport);
	} while (sport != 'O' && sport != 'N' && sport != 'o' && sport != 'n');
	if (sport == 'O' || sport == 'o') {
		printf("lequel : 1 - foot\n2 - tennis\n3 - basket\n4 - judo\n5 - natation\n6 - autre\n");
		scanf("%d", &ftbjn);
	}
	printf("age : %d\n", age);
	printf("sexe : %c\n", sexe);
	if (food == 'Q' || food == 'q') printf("va au Quick %d fois par mois\n", nbfood);
	else printf("va au Mac Donald %d fois par mois\n", nbfood);
	if (sport == 'O' || sport == 'o') {
		switch (ftbjn) {
		case 1:
			printf("fais du foot\n");
			break;
		case 2:
			printf("fais du tennis\n");
			break;
		case 3:
			printf("fais du basket\n");
			break;
		case 4:
			printf("fais du judo\n");
			break;
		case 5:
			printf("fais de la natation\n");
			break;
		default:
			printf("fais un autre sport\n");
			break;
		}
	}
	else printf("ne fais pas de sport\n");
}