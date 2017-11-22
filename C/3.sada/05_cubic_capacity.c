/**
Cviceni 05: Vypocet objemu a povrchu teles.
Program vypocita povrch a objem zvoleneho telesa.
*/
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265359

// Deklarace funkci.
float block_area(int width, int length, int height);
float block_volume(int width, int length, int height);
float cylinder_area(float diameter, float height);
float cylinder_volume(float diameter, float height);


int main()
{

    // Deklarace promennych

    int firstVal;
    int secondVal;
    int thirdVal;

    int choice = 0;

    float volume;
    float area;

    // Uzivatelsky vstup.

    printf("Zadejte typ telesa(1=valec, 2=kvadr):");
    scanf(" %i", &choice);

    printf("Zadejte prvni rozmer: \n");
    scanf(" %i", &firstVal);

    printf("Zadejte druhy rozmer: \n");
    scanf(" %i", &secondVal);

    if(choice == 2) // Treti rozmer je u valce zbytecny.
    {
        printf("Zadejte treti rozmer: \n");
        scanf(" %i", &thirdVal);
    }



    // Vystup hodnot.
    if(choice == 1) // Valec
    {
        volume = cylinder_volume(firstVal, secondVal);
        area =   cylinder_area(firstVal, secondVal);
    }
    else if(choice == 2) // Kvadr
    {
        volume = block_volume(firstVal, secondVal, thirdVal);
        area =   block_area(firstVal, secondVal, thirdVal);
    }

    // Vypis vyslednych hodnot.
    printf("\nObjem telesa je: %.2f", volume);
    printf("\nPovrch telesa je: %.2f", area);



    getchar();
    return 0;
}


// Funkce
// Vypocet objemu kvadru
float block_volume(int width, int length, int height)
{
    int result = width * length * height;

    return(result);
}

// Vypocet povrchu kvadru.

float block_area(int width, int length, int height)
{
    int result = 2 * ((width * length)+ (width * height) + (length * height));

    return(result);
}

// Vypocet objemu valce
float cylinder_volume(float diameter, float height)
{
    float r = (diameter/2);

    float result = PI * (r*r) * height;

    return(result);
}

// Vypocet povrchu valce
float cylinder_area(float diameter, float height)
{
    float r = (diameter/2);

    //Obsah podstavy
    float sP = PI*r*r;

    // Obsah plaste
    float sPl = 2 *(PI*r*height);

    // Povrch valce

    float result = (2 * sP) + sPl;

    return(result);
}





