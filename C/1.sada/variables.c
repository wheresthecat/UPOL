/* Cviceni: Prace s promennymi.
* Procviceni deklarace a zobrazeni nekolika promennych a konstant.
*/

#include <stdio.h>
#include <stdlib.h>
// Konstanty.
#define NUMBER 1024
#define PI 3.141592
#define CARROT "Mrkev"


int main()
{

  // Deklarace promennych.
  int justAnInteger = 2048;
  float someFloat = 354.256;
  int onlyLetter = 'C';
  long long int someReallyBigNumber = 9223372036854775807;
  double someReallySmallNumber = 2.26e-13;

  // Nacteni promennych.

  printf("Toto je hodnota  promenne \"someReallyBigNumber\": %lli \n", someReallyBigNumber);
  printf("Toto je hodnota promenne \"justAnInteger\": %i \n", justAnInteger);
  printf("Toto je hodnota  konstanty \"NUMBER\": %i \n", NUMBER);
  printf("Toto je hodnota  konstanty \"PI\": %f \n", PI);
  printf("Toto je hodnota  promenne \"onlyLetter\": %c \n", onlyLetter);
  printf("Toto je hodnota  promenne \"someFloat\": %.3f \n", someFloat);
  printf("Toto je hodnota promenne \"someReallySmallNumber\": %.15f \n", someReallySmallNumber);
  printf("Toto je hodnota promenne \"someReallySmallNumber\": %g \n", someReallySmallNumber);
  printf("Tady mame dokonce cele slovo: %s", CARROT);




  getchar();
  return 0;
}
