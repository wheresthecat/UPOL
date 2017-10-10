/* Cviceni: Textova kalkulacka
* Program pozada uzivatele o zadani dvou cisel. Vystupem jsou zakladni matematicke
* operace.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Deklarace promennych.
  int firstNumber, secondNumber;
  int addition, subtraction, multiplication;
  float division;

  // Vstup cisel.
  printf("Zadejte prvni cislo: ");
  scanf("%d", &firstNumber);

  printf("\nZadejte druhe cislo: ");
  scanf("%d", &secondNumber);

  // "Kalkukacka"
  addition = firstNumber + secondNumber;
  subtraction = firstNumber - secondNumber;
  multiplication = firstNumber * secondNumber;
  division = (float)firstNumber / secondNumber;

  // Vystup
  printf("\nVysledek:\n\n");
  printf("Scitani:\t%d\n", addition);
  printf("Odcitani:\t%d\n", subtraction);
  printf("Nasobeni:\t%d\n", multiplication);
  if(secondNumber == 0)
  {
    printf("Deleni:\t\tDeleni nulou nema smysl!\n");
  }
  else
  {
    printf("Deleni: \t%.3f\n", division);
  }


  getchar();
  return 0;

}
