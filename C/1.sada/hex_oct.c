/* Cviceni: Program pozada uzivatele o zadani cisla, které pote zobrazi v osmickove
* a sestnactkove soustave.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number;

  // Vstup.

  printf("Zadejte libovolne cislo: ");
  scanf("%d", &number);

  // Vystup.

  printf("Cislo %d v osmickove soustave: %o\n", number, number);
  printf("Cislo %d v sestnactkove soustave: %X\n", number, number);


  getchar();
  return 0;

}
