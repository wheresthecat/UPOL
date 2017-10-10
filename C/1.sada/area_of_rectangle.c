/* Cviceni: Obsah obdelniku.
* Jednoduchy program pro vypocet obsahu obdelnika.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Deklarace promennych.
  double sideA, sideB;
  double areaOfRectangle;

  // Vstup hodnot

  do // Tento do-while cyklus je pro osetreni spravneho vstupu pro hodnotu vyssi nez nula.
  {
    if (sideA <= 0 || sideB <= 0) // Pri zadani nespravne hodnoty upozorni uzivatele o chybe a vyzve k naprave.
    {
      printf("\nRozmery musi byt vetsi nez nula, zadejte je prosim znovu.\n");
    }

    printf("Zadejte delku strany a v cm: ");
    scanf("%lf", &sideA);

    printf("\nZadejte delku strany b v cm: ");
    scanf("%lf", &sideB);
  }
  while(sideA <= 0 || sideB <= 0);

  // Vystup

  printf("\nObsah ctyruhelniku je %.2f cm ctvecnich.\n", sideA*sideB);

  getchar();
  return 0;
}
