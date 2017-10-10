/* Cviceni: Jedoduchy program, ktery prevede castku z USD na CZK.
*/

#include <stdio.h>
#include <stdlib.h>

#define RATE 21.771 // Aktualni ke dni 22.09.2017.


int main()
{

  // Deklarace promennych.

  double UsdInput, CzkOutput;

  // Uzivatelsky vstup.

  printf("Zadejte castku v USD: ");
  scanf("%lf", &UsdInput);

  // Prepocet meny

  CzkOutput = UsdInput * RATE;

  // Vystup

  printf("\nCastka %.2f USD je po prevedeni %.2f CZK. \n", UsdInput, CzkOutput);

  getchar();
  return 0;

}
