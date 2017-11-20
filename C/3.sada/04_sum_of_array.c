/**
Cviceni 04: Suma pole.
Program vypocita sumu pole, pomoci funkce.
*/

#include <stdio.h>
#include <stdlib.h>

double array_sum(double numbers[], int size); // funkce pro vypocet sumy pole.

int main()
{
    // Deklarace promennych.

    int size; // Velikost pole.

    // Urceni velikosti pole.
    printf("Zadejte velikost pole: \n");
    scanf("%i", &size);

    double numbers[size]; // Deklarace pole.

    // Naplneni pole.
    printf("\nNaplneni pole: \n");

    for(int i = 0; i < size; i++)
    {
        printf("Zadejte %i. cislo: ", i + 1);
        scanf("%lf", &numbers[i]);
    }

    printf("\n========================\n");

    // Pouziti funkce.
    double output = array_sum(numbers, size);

    printf("Suma pole je: %g.\n", output);

    getchar();
    return 0;


}

// Funkce pro vypocet sumy pole.

double array_sum(double numbers[], int size)
{
    double sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }

    return sum;
}
