/*
* Cviceni: Rozpoznani datumu, zda existuje. Program
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Deklarace promennych

    int day, month, year; // Datum
    int maxFeb; // Unor a prestupny rok
    int test = 0;
    int error = 0;
    int leap = 0;
    int months; // pro switch

    // Vstup údajů.

    printf("Zadejte datum ve formatu (Den.Mesic.Rok): ");
    scanf("%d.%d.%d", &day, &month, &year);


    /* TODO: (Frosty) - Chybové hlášky wrong year/month/day jsou v podstatě navíc, možná je vhodné
    * je přesunout v kódu na konec k finálnímu výstupu. A nebo uplně odstranit.
    */

    // Zjisteni, zda je datum skutečný.

    // Chybové stringy

    char *wrongYear = " Rok mimo rozsah. ";
    char *wrongMonth = " Mesic mimo rozsah. ";
    char *wrongDay = " Den mimo rozsah. ";
    char *wrongDate = "Datum neexistuje. ";
    char *goodDate = "Den existuje.";
    char *leapYear = "Prestupny rok.";

    // Rok - podmínky pro otestování počátku Gregoriánského kalendáře + horní mez.

    if(year < 1582 || year > 2017)
    {
        printf("%s", wrongYear);
        error += 1;
    }

    // Zjištění přestupného roku.

    if(year % 4 == 0 && year % 100 != 0)
    {
        leap = 1;
    }

    if(year % 400 == 0)
    {
        leap = 1;
    }


// Mesic
    // Vymezení správného počtu měsíců.
    if (month < 1 || month > 12)
    {
        printf("%s", wrongMonth);
        error += 1;
    }

    // Rozdělení měsíců dle počtu dní.

    if(month == 1 || 3 || 5 || 7 || 8 || 10 || 12) // 31 dní
    {
        if(day>31 || day<1)
        {
            printf("%s", wrongDay);
            error +=1;
        }
    }

    // Měsíce s 30 dny.
    if(month == 4 || 6 || 9 || 11)
    {
        if(day>30 || day<1)
        {
            printf("%s", wrongDay);
            error +=1;
        }
    }

    // Únor a přestupný rok.
    if(month == 2)
    {
        if(leap == 1)
        {
            maxFeb = 29;
        }
        else
        {
            maxFeb = 28;
        }
        if(day>maxFeb || day<1)
        {
            printf("%s", wrongDay);
            error +=1;
        }
    }


    // Konečný výstup. Good or Wrong.
    if(error > 0)
    {
        printf("%s", wrongDate);
    }
    else
    {
        printf("%s", goodDate);
    }

    getchar();
    return 0;
}
