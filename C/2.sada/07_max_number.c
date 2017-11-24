/**
Cviceni 07: Maximum
Program porovna tri cisla vlozena uzivatelem a vypise ktere z nich je nejvetsi.
*/

#include <stdlib.h>
#include <stdlib.h>

int main()
{
    // Deklarace promennych.

    int prvni, druhe, treti;

    // Vstup hodnot.

    printf("Vlozte prosim prvni cislo: ");
    scanf("%i", &prvni);

    printf("Vlozte prosim druhe cislo: ");
    scanf("%i", &druhe);

    printf("Vlozte prosim treti cislo: ");
    scanf("%i", &treti);

    // Porovnani cisel a vypis do konzole.

    if(prvni > druhe && prvni > treti)
    {
        printf("Nejvetsi je cislo %i!", prvni);
    }
    else if (druhe > prvni && druhe > treti)
    {
        printf("Nejvetsi je cislo %i!", druhe);
    }
    else if (treti > druhe && treti > prvni)
    {
        printf("Nejvetsi je cislo %i!", treti);
    }
    else
    {
        printf("Nektera, nebo vsechna cisla jsou stejna.");
    }


    getchar();
    return 0;
}
