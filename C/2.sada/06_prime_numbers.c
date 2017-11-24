/**
Cviceni 6: Vypocet prvocisel.
Program vypise vsechny prvocisla, mensi, nez maximalni cislo zadane uzivatelem.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Deklarace promennych.

    int top;
    int number;
    int divide;
    int count = 0;
    int isPrime; // "bool"

    printf("Zadejte maximalni cislo: ");
    scanf("%i", &top);

    printf("Prvocisla jsou: \n");

    // Logika pro nalezeni prvocisla.
    //Zacina se od dvou. Cislo jedna neni povazovano za prvocislo.
    for(number = 2; number <= top; number++)
    {
        isPrime = 1;
        for (divide = 2; divide < number; divide++)
        {
            // Pokud je nalezen delitel, cyklus se prerusi, protoze se nejedna
            // o prvocislo a neni nutne dal hledat.
            if (number%divide == 0)
            {
                isPrime = 0;
                break;
            }
        }
        // Vypise nalezena prvocisla a odradkuje po dest pro lepsi prehlednost.
        if(isPrime == 1)
        {
            printf("%i, ", number);
            count+= 1; // Pocita nalezena prvocisla.
            if(count % 10 == 0)
            {
                printf("\n");
            }
        }

    }
    // Vypise celkovy pocet nalezenych prvocisel.
    printf("\nCelkem bylo nalezeno %i prvocisel.", count);



    getchar();
    return 0;
}
