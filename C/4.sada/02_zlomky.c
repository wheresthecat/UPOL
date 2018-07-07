// Cviko z upolu, secitani zlomku, strukturovane datove typy a funkce.

#include <stdio.h>
#include <stdlib.h>

#define DEBUG 1


typedef struct {
	int citatel;
	int jmenovatel;
} zlomek;

zlomek vysledek(zlomek a, zlomek b);

int main(int argc, char const *argv[])
{

	zlomek a, b;

	printf("Scitani zlomku: \n");

	printf("Vlozte zlomek a: (citatel/jmenovatel) \n");
	scanf("%d/%d", &a.citatel, &a.jmenovatel);

	printf("Vlozte zlomek b: (citatel/jmenovatel) \n");
	scanf("%d/%d", &b.citatel, &b.jmenovatel);



	#ifdef DEBUG

	printf("Debug line:\n");
	printf("Zlomek a: %d/%d.\n", a.citatel, a.jmenovatel);
	printf("Zlomek b: %d/%d.\n", b.citatel, b.jmenovatel);

	#endif



	return 0;
}