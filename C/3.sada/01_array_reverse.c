/*
Cviceni 01. - Obraceni pole.
Program vypise do konzole hodnoty obaszene v poli a pote je vypise v opacnem poradi.

*/


#include <stdlib.h>
#include <stdio.h>

#define LENGTH 10 // Pocet prvku v poli.


int main()
{
    // Deklarace promennych.

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Vypis pole v normalnim poradi.

    printf("Vypis hodnot v poli v puvodnim poradi (1->10): \n");

    for(int i = 0; i < LENGTH; i++)
    {
        // Podminka pro rozliseni posledniho prvku - ciste kosmeticky detail, tecka misto carky.
        if(i == LENGTH - 1)
        {
            printf("%i. ", numbers[i]);
        }
        else
        {
            printf("%i, ", numbers[i]);
        }
    }

    // Vypis pole v obracenem poradi.

    printf("\nVypis pole v obracenem poradi (10->1):\n");

    for(int i = LENGTH - 1; i >= 0; i--)
    {
        // Podminka pro rozliseni posledniho prvku - ciste kosmeticky detail, tecka misto carky.
        if(i == 0)
        {
            printf("%i. ", numbers[i]);
        }
        else
        {
            printf("%i, ", numbers[i]);
        }
    }




    getchar();
    return 0;
}
