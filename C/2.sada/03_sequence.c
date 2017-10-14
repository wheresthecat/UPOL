/* Cviceni: Posloupnost.
*  Program vyzada po uzivateli prvni clen, diferenci mezi jednotlivymi kroky
*  a pocet iteraci.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Deklarace promennych.

    int firstOne, difference, count, output;

    // Uzivatelsky vstup.

    printf("Zadejte prvni clen: ");
    scanf("%d", &firstOne);

    printf("\nZadejte diferenci: ");
    scanf("%d", &difference);

    printf("\nZadejte pocet iteraci: ");
    scanf("%d", &count);

    // Cyklus a vystup programu.

    printf("Posloupnost: ");

    for(int i = 0; i < count; i++)
    {
        if(i == count-1)
        {
            printf("%d.", firstOne);
        }
        else
        {
            printf("%d, ", firstOne);
        }

        firstOne += difference;
    }




    getchar();
    return 0;


}
