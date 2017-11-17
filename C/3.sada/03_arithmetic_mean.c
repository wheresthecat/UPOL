/**
Cviceni 03: Aritmeticky prumer pole.
Program vypocita aritmeticky prumer pole z prvku zadanych uzivatelem.
*/



#include <stdio.h>
#include <stdlib.h>

/***
TODO:
    -automaticke naplneni pole pomoci rand() % size
*/

int main()
{

    // Deklarace promennych
    int size = 0;
    int sum = 0;
    float meanValue;



    // Uzivatelsky vstup: velikost pole.
    printf("Zadejte pocet prvku pole: \n");
    scanf("%i", &size);
    printf("\n");
    if(size > 20)
    {
        printf("\nNo tak to teda good luck.\n");
    }

    // Deklarace pole.
    int numbers[size]; // Kdyz byla deklarace pole jeste pred vstupem, hazelo to vcelku zvlastni bugy.

    // Uzivatelsky vstup: prvky pole.

    for(int i = 0; i < size; i++)
    {
        printf("Zadejte %i. cislo: ", i + 1);
        scanf("%i", &numbers[i]);
    }


    printf("======================================\n");
    // Vypis prvku pole:
    printf("Pole obsahuje nasledujici prvky: ");
    for(int j = 0; j < size; j++)
    {
        // Podminka kontroluje, zda se jedna/nejedna o posledni prvek pole a podle toho vypise "," nebo ".".
        // Jde ciste o kosmeticky detail.
        if(j!=size-1)
        {
            printf("%i, ", numbers[j]);
        }
        else
        {
            printf("%i. ", numbers[j]);
        }
    }

    // Vypocet prumeru hodnot pole.
    // Suma pole.
    for(int j = 0; j < size; j++)
    {
        sum += numbers[j];
    }

    // printf("\nSuma pole: %i", sum);

    // Vypocet prumeru.

    meanValue = sum / size;

    // Vystup:

    printf("\nAritmeticky prumer pole je: %.2f", meanValue);

    getchar();
    return 0;
}
