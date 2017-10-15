/* Cviceni: Nasobilka.
*  Program vyzada od uzivatele cislo a vypise jeho nasobky mensi nebo rovno cislu 100.
*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
    // Deklarace promněnných.

    int input;
    int count = 1;
    int result = 1;

    // Vstup údajů.

    printf("Zadejte cislo: ");
    scanf("%d", &input);

    // Nasobilka.

    printf("Nasobky zadaneho cisla: \n");

    while(result < 100)
    {
        result = input * count;
        printf("%d, ", result);
        count++;
    }




    getchar();
    return 0;

}
