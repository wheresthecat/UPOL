/*Cviceni: Prevod ze stupnu do radianu.
*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592
#define RAD_PER_DEGREE 0.0174533 // Radian na jeden stupen.

int main()
{
  //deklarace promennych

  double input;

  // Uzivatelsky vstup
  printf("Zadejte hodnotu ve stupnich: \n");
  scanf("%lf", &input);

  printf("\n=====================\n");
  printf("Hodnota %.0f stupne je %f radianu.\n", input, input * RAD_PER_DEGREE);

  getchar();
  return 0;

}
