/***
Cviceni 03: Hledani cisel v poli.
Program necha uzivatele naplnit pole cisly, nebo to provede pomoci nahodnych cisel.
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

    int autoFill = 0; // "bool" pro manualni / automaticke plneni.
    int randmax = 0; // Promena pro strop pro funkci rand().
    int countOfFound = 0; //Pocita nalezena cisla.

    char choice; // Pro switch vyberu zpusobu zadani cisel.
    char secondChoice; // Pro switch druheho menu: Dalsi hledani nebo ukonceni programu.

    int repeat = 1; // Promenna pro cyklus v pripade chybneho vstupu u swtiche pro vyber zpusobu zadani cisel.
    int secondRepeat = 1; // Promena pro cyklus pro opakovani hledani cisla.
    int secondMenuRepeat = 1; // Promenna pro cyklus osetreni vstupu A / N.



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
        // Strop pro maximalni velikost pseudonahodneho cisla.
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


    // Vyhledavani cisla v poli.
    printf("\n======================================\n");
    while(secondRepeat == 1)
    {
        countOfFound = 0; // Reset pocitadla nalezenych cisel.

        printf("Zadejte hledane cislo: ");
        scanf(" %i", &number);

        for(int i = 0; i < size; i++)
        {
            if(numbers[i] == number)
            {
                printf("Hledane cislo ma index %i\n", i);
                countOfFound++;
            }

        }
        // Odezva podle poctu nalezenych cisel.
        if(countOfFound == 0)
        {
            printf("Cislo nenalezeno.\n");
        }
        else
        {
            printf("Zadne dalsi cislo nenalezeno.\n");
        }

        printf("\nChcete hledat dalsi cislo? A / N\n");

        secondMenuRepeat = 1; // Reset promenne pro druhe menu.

        // Menu pro zadani Ano / Ne pro opakovani hledaneho cisla, nebo ukonceni programu.
        while(secondMenuRepeat == 1)
        {
            scanf(" %c", &secondChoice);
            switch(secondChoice)
            {
                case 'N':
                case 'n':
                    secondRepeat = 0;
                    secondMenuRepeat = 0;
                    break;

                case 'A':
                case 'a':
                    secondRepeat = 1;
                    secondMenuRepeat = 0;
                    break;

                default:
                    printf("Napiste prosim A/N:\n");
                    secondMenuRepeat = 1;
                break;
            }
        }
    }


    return 0;


}
