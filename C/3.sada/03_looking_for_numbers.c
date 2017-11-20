/***
Cviceni 03: Hledani cisel v poli.
Program necha uzivatele naplnit pole cisli, nebo to provede pomoci nahodnych cisel.
Program vyhleda v poli zadane cislo a vypise jeho index, nebo oznami, ze nebylo
nalezeno.
*/


#include <stdio.h>
#include <stdlib.h>



int main()
{

    // Deklarace promennych
    int size = 0; // Velikost pole.
    int number = 0; // Hledane cislo.
    int repeat = 1; // Promenna pro cyklus v pripade chybneho vstupu.
    int secondRepeat = 1;
    int autoFill = 0; // "bool" pro manualni / automaticke plneni.
    int randmax = 0; // Promena pro strop pro funkci rand().

    char choice; // Pro switch vyberu zpusobu zadani cisel.
    char secondChoice;
    int secondMenuRepeat = 1;
    float meanValue; // Konecny vysledek, prumer hodnot v poli.





    // Uzivatelsky vstup: velikost pole.
    printf("Zadejte pocet prvku pole: \n");
    scanf(" %i", &size);

    printf("\nChcete zadat cisla (M)anualne, nebo (A)utomaticky?\n");

    while(repeat == 1)
    {

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
    int numbers[size];

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

//    printf("Pole obsahuje nasledujici prvky: ");
//    for(int j = 0; j < size; j++)
//    {
//        // Podminka kontroluje, zda se jedna/nejedna o posledni prvek pole a podle toho vypise "," nebo ".".
//        // Jde ciste o kosmeticky detail.
//        if(j!=size-1)
//        {
//            printf("%i, ", numbers[j]);
//        }
//        else
//        {
//            printf("%i. ", numbers[j]);
//        }
//    }

    // Vyhledavani cisla v poli.
    printf("\n======================================\n");
    int test = 1;
    while(secondRepeat == 1)
    {
        printf("Zadejte hledane cislo: ");
        scanf(" %i", &number);

        for(int i = 0; i < size; i++)
        {
            if(numbers[i] == number)
            {
                printf("Hledane cislo ma index %i\n", i);
            }
        }

        printf("Cislo nenalezeno.\n");
        printf("Znovu? A / N\n");

        char test;
        scanf(" %c", &test);
        getchar();

        while(secondMenuRepeat == 1)
        {
            switch(secondChoice)
            {
                case 'A':
                case 'a':
                    secondRepeat = 1;
                    test = 1;
                    secondMenuRepeat = 0;
                break;

                case 'N':
                case 'n':
                    secondRepeat = -1;
                    test = 0;
                    secondMenuRepeat = 0;
                break;

                default:
                    printf("Napiste prosim A/N\n");
                    secondMenuRepeat = 1;
                break;
            }
        }
    }





    return 0;


}
