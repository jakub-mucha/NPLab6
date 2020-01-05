#include <stdio.h>
#include "mnozenie.h"


int main()
{
    float a, b,c;
    printf("Test mnozenia\n");

    printf("Podaj pierwsza liczbe\n");
    scanf("%f", &a);

    printf("Podaj druga liczbe\n");
    scanf("%f", &b);

    printf("Podaj trzecia liczbe\n");
    scanf("%f", &c);

    printf("Wynik mnozenia wynosi %f\n",mnozenie(a,b,c));

    return 0;
}

