#include <stdio.h>
#include "mnozenie.h"


int main()
{
    double a, b,c;
    printf("Test mnozenia\n");

    printf("Podaj pierwsza liczbe\n");
    scanf("%lf", &a);

    printf("Podaj druga liczbe\n");
    scanf("%lf", &b);

    printf("Podaj trzecia liczbe\n");
    scanf("%lf", &c);

    printf("Wynik mnozenia wynosi %lf\n",mnozenie(a,b,c));

    return 0;
}

