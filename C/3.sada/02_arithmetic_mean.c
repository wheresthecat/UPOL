/**
Cviceni 02: Aritmeticky prumer pole.
Program vypocita aritmeticky prumer pole z prvku zadanych uzivatelem.
*/



#include <stdio.h>
#include <stdlib.h>



int main()
{

    // Deklarace promennych
    int size = 0; // Velikost pole.
    int sum = 0; // Suma pole.
    int repeat = 1; // Promenna pro cyklus v pripade chybneho vstupu.
    int autoFill = 0; // "bool" pro manualni / automaticke plneni.
    int randmax = 0; // Promena pro strop pro funkci rand().

    char choice; // Pro switch vyberu zpusobu zadani cisel.
    float meanValue; // Konecny vysledek, prumer hodnot v poli.





    // Uzivatelsky vstup: velikost pole.
    printf("Zadejte pocet prvku pole: \n");
    scanf(" %i", &size);

    printf("\nChcete zadat cisla (M)anualne, nebo (A)utomaticky?\n");

    while(repeat == 1)
    {
        /* Zde jsem mel potize se switchem. Program ignoroval vlozene hodnoty a bral to jako chybny
        * vstup, i když mel byt spravny a obcas to vypadalo, že to nejak ignoruje break prikaz. Po nejake dobe
        * jsem to castecne vyresil vlozenim getchar() hned po scanf(), ale posleze se ukazalo, ze to vubec nepomohlo.
        * Nakonec stacilo pridat mezeru pred %c ve scanf() - díky mezeře bude scanf ignorovat bile znaky po stisku enteru apod.
        * Coz jsem nasel na stackoverflow.com.
        * ( https://stackoverflow.com/questions/29122166/c-scanf-for-char-not-working-as-expected?rq=1 )
        */
        scanf(" %c", &choice);
        getchar();
        // Switch pro zvoleni metody naplneni pole cisli.
        switch(choice)
        {
            case 'A':
            case 'a':
                printf("Automaticky.\n");
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
    int numbers[size]; // Kdyz byla deklarace pole jeste pred vstupem (tzn int size mel hodnotu 0), hazelo to vcelku zvlastni bugy.

    // Uzivatelsky vstup: prvky pole.


    if(autoFill == 1) // Automaticke naplneni pole.
    {
        printf("Zadejte maximalni velikost nahodneho cisla: \n");
        scanf(" %i", &randmax);

        for(int i = 0; i < size; i++)
        {
            printf("\nZadano %i. cislo: %i", i + 1, numbers[i] = rand() % randmax);
        }
        printf("\n");
    }


    else // Manualni naplneni pole.
    {
        if(size > 20)
        {
            printf("\nGood Luck.\n"); // Motivace pro uzivatele.
        }
        for(int i = 0; i < size; i++)
        {
            printf("Zadejte %i. cislo: ", i + 1);
            scanf("%i", &numbers[i]);
        }
    }


    printf("\n======================================\n");
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


    // Vypocet prumeru.

    meanValue = (float)sum / size;

    // Vystup:

    printf("\nAritmeticky prumer pole je: %.2f", meanValue);



    getchar();
    return 0;


}
