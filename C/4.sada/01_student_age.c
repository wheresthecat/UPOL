/* Cviceni: Strukturovane datove typy.

Program porovna vek dvou studentu a vypise do konzole, ktery student je starsi, pripadne, zda jsou studenti stejne stari.

*/


#include <stdio.h>
#include <stdlib.h>


#define TEST


// Datovy typ pro datum.
typedef struct {
	short year;
	char month;
	char day;
} date;


// Datovy typ pro student.
typedef struct {
	char firstName[25];
	char lastName[25];
	date born;
} student;

// Definice funkci.
int compare_age(student s1, student s2);

// Funkce main.
int main()
{
	// Testovaci studenti.
	student s1 = { "Michal", "Lahvica", { 1998, 12, 1 } };
	student s2 = { "Petr", "Mahdal", { 1998, 12, 1 } };

	int output = compare_age(s1, s2);



	
	printf("Prvni student: %s, %s \t| Narozen: %d. %d. %d\n", s1.firstName, s1.lastName, s1.born.day, s1.born.month, s1.born.year);
	printf("Druhy student: %s, %s \t| Narozen: %d. %d. %d\n", s2.firstName, s2.lastName, s2.born.day, s2.born.month, s2.born.year);
	printf("------\n");


	if (output == -1)
	{
		printf("%s %s je starsi nez %s %s.\n", s1.firstName, s1.lastName, s2.firstName, s2.lastName);
	}
	else if (output == 1)
	{
		printf("%s %s je starsi nez %s %s.\n", s2.firstName, s2.lastName, s1.firstName, s1.lastName);
	}
	else
	{
		printf("Studenti %s %s a %s %s jsou stejne stari.\n", s1.firstName, s1.lastName, s2.firstName, s2.lastName);
	}

	

	getchar();
	return 0;
}

// Funkce compare_age vraci hodnotu -1 pokud je prvni student starsi. 1, pokud je starsi druhy student. 
// A 0, kdyz jsou studenti stejne stari.

int compare_age(student s1, student s2)
{
	

	if (s1.born.year < s2.born.year)
	{
		return -1;
	}
	if (s1.born.year > s2.born.year)
	{
		return 1;
	}

	if (s1.born.month < s2.born.month)
	{
		return -1;
	}
	if (s1.born.month > s2.born.month)
	{
		return 1;
	}

	if (s1.born.day < s2.born.day)
	{
		return -1;
	}
	if (s1.born.day> s2.born.day)
	{
		return 1;
	}

	return 0;
}