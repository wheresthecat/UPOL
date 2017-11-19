/**
Cviceni 03: Aritmeticky prumer pole.
Program vypocita aritmeticky prumer pole z prvku zadanych uzivatelem.
*/



#include <stdio.h>
#include <stdlib.h>

/***
TODO:
    Konecna kontrola a okomentovani.
*/

int main()
{

    // Deklarace promennych
    int size = 0;
    int sum = 0;
    int repeat = 1;
    int autoFill = 0;
    int randmax = 0;

    unsigned char choice;
    float meanValue;




    // Uzivatelsky vstup: velikost pole.
    printf("Zadejte pocet prvku pole: \n");
    scanf("%i", &size);

    printf("\nChcete zadat cisla (M)anualne, nebo (A)utomaticky?\n");

    while(repeat == 1)
    {


        scanf(" %c", &choice);
        getchar();

        switch(choice)
        {
            case 'A':
            case 'a':
                autoFill = 1;
                repeat = 0;

            break;

            case 'M':
            case 'm':
                printf("Manualne.\n");
                repeat = 0;
            break;


            default:
                printf("Chyba zadani. Zvolte prosim A nebo M:\n");
                repeat = 1;
                break;


        }


    }
    printf("\n");


    // Deklarace pole.
    int numbers[size]; // Kdyz byla deklarace pole jeste pred vstupem, hazelo to vcelku zvlastni bugy.

    // Uzivatelsky vstup: prvky pole.


    if(autoFill == 1)
    {
        printf("Zadejte maximalni velikost nahodneho cisla: \n");
        scanf(" %i", &randmax);

        for(int i = 0; i < size; i++)
        {
            printf("\nZadano %i. cislo: %i", i + 1, numbers[i] = rand() % randmax);
            //scanf("%i", &numbers[i]);
        }
        printf("\n");

    }
    else
    {
        if(size > 20)
        {
            printf("\nGood Luck.\n");
        }
        for(int i = 0; i < size; i++)
        {
            printf("Zadejte %i. cislo: ", i + 1);
            scanf("%i", &numbers[i]);
        }
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
