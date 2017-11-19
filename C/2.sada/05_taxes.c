/* Cviceni: Progresivní daň
*  Program vypočítá progesivní daň ze mzdy:
*       Do 10 000 - 10%
*       Od 10 000 do 20 000 - 20%
*       Nad 20 000 - 30%
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Deklarace proměnných

    int salary;
    int test = 25000;
    int tierOne, tierTwo, tierThree;
    float tax;

    // Vstup.

    printf("Zadejte mzdu: ");
    scanf("%i", &salary);

    // Výpočet daně.
    // Do 10k
    if(salary < 10000)
    {
        tax = salary * 0.10;
    }
    else
    {
        tax = 1000;
    }

    // Do 20k

    if(salary < 20000)
    {
        tax += (salary - 10000) * 0.20;
    }
    else
    {
        tax += 2000;
    }

    // Nad 20k

    if(salary > 20000)
    {
        tax += (salary - 20000) * 0.30;
    }

    // Výstup.

    printf("\nOdpovidajici dan je: %.2f", tax);





}
