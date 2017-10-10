/* Cviceni: Prevod znaku.
* Program precte napsany znak a zobrazi jeho malou nebo velkou verzi.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

  // Deklarace promennych.
  char inputLetter;

  // Uvodni text.
  printf("Program prevede napsany znak z abecedy na kapitalku, nebo naopak.\n");
  printf("(Napiste \"!\" pro ukonceni programu.)\n\n");

  // Pomoci cyklu "while" muze uzivatel opakovane zadavat dalsi znaky, podminka s "!" je
  // pro vystup z cyklu - ukonceni programu.
  while (inputLetter != '!')
  {

      printf("Vlozte znak: \n");
      scanf("%c", &inputLetter);
      int letterToNumber = (int)inputLetter; // Konverze znaku na int pro zjisteni ciselne hodnoty

      // Zjisteni, zda se jedna o male nebo velke pismeno, podle toho bude lisit vystup.
      if(letterToNumber >= 97 && letterToNumber <= 122)
      {
        printf("\nVstupni znak: %c Vystupni znak: %c\n", inputLetter, inputLetter - 32); // zmena znaku  "a na A"
        getchar();
      }
      else if(letterToNumber >= 65 && letterToNumber <= 90)
      {
        printf("\nVstupni znak: %c Vystupni znak: %c\n", inputLetter, inputLetter + 32); // zmena znaku "A na a"
        getchar();
      }
      // Osetreni nespravneho vstupu. Vnorena podminka zajisti, aby se upozorneni na chybu
      // nezobrazovalo pri ukonceni programu.
      else
      {
        if(inputLetter != '!')
        {
          printf("Zadejte prosim jen pismena abecedy, bez diakritiky.\n");
          getchar();
        }
      }

  }


  getchar();
  return 0;

}
