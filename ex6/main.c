#include <stdio.h>
#include <stdlib.h>
int main()
{
	char prenom[50];
	int age;
	int annee = 2026;
	int resultat = annee - age;
	printf("bonjour quel est votre prenom ? ");
	scanf("%s", prenom);
	printf("bonjour %s quel age as tu ? ", prenom);
	scanf("%d", &age);
	printf("%s , tu es né(e) en %d ", prenom, resultat);

	exit(0);


}
