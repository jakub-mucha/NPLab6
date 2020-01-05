#include <stdio.h>
int mnozenie (int a, int b);


int main()
{
    int a, b;
    printf("Test mnozenia\n");

    printf("Podaj pierwsza liczbe\n");
    scanf("%d", &a);

    printf("Podaj druga liczbe\n");
    scanf("%d", &b);

    printf("Wynik mnozenia wynosi %d\n",mnozenie(a,b));

    return 0;
}

int mnozenie (int a,int b){
int wynik;
wynik=a*b;
return wynik;
}
