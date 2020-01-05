#include <stdio.h>
#include "mnozenie.h"


int main()
{
    int a, b,c;
    printf("Test mnozenia\n");

    printf("Podaj pierwsza liczbe\n");
    scanf("%d", &a);

    printf("Podaj druga liczbe\n");
    scanf("%d", &b);

    printf("Podaj trzecia liczbe\n");
    scanf("%d", &c);

    printf("Wynik mnozenia wynosi %d\n",mnozenie(a,b,c));

    return 0;
}

