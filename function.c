#include "function.h"
#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>

double sinus(double value)
{
    return sin(value);
}

int randomize(int value)
{
	time_t tt;
    int a = time(&tt);
    srand(a);
    value = value + rand()%100;
    return value;
}
