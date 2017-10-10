/* Cviceni: Nakresli ctverec.
*   Tento program nakresli ctverec v konzoli, o velikosti dle zadane hodnoty.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Deklarace promennych.

    int inputNumber, outerLoop, innerLoop;



    // Vstup hodnot.

    printf("Zadejte velikost ctverce: ");
    scanf("%i", &inputNumber);

    int spacing = inputNumber- 2; // Deklarace promenne pro vypln prostoru ctverce.


    // Vnejsi cyklus pro "vykresleni" horni hrany ctverce.

    for(outerLoop = 0; outerLoop < inputNumber; outerLoop++)
    {
        printf("* ");
    }

    // Vnitrni cyklus pro vykresleni sten ctverce.
    for(innerLoop = 2; innerLoop < inputNumber; innerLoop++)
    {
        printf("\n* ");
        // Tento cyklus vyplni prostor ctverce.
        for(int i = 0; i < spacing; i++)
        {
            printf("  ");
        }
        printf("*");
    }

    printf("\n");

    // Cyklus pro vykresleni spodni hrany ctverce.
    for(outerLoop = 0; outerLoop < inputNumber; outerLoop++)
    {
        printf("* ");
    }

    getchar();
    return 0;



}
